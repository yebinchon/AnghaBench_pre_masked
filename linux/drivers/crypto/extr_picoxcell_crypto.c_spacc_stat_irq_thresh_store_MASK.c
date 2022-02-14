
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spacc_engine {unsigned long stat_irq_thresh; scalar_t__ regs; scalar_t__ fifo_sz; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 struct spacc_engine* FUNC_2 (struct device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
        struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 struct spacc_engine *VAR_7 = FUNC_2(VAR_3);
 unsigned long VAR_8;

 if (FUNC_1(VAR_5, 0, &VAR_8))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_8, 1UL, VAR_7->fifo_sz - 1);

 VAR_7->stat_irq_thresh = VAR_8;
 FUNC_3(VAR_7->stat_irq_thresh << VAR_2,
        VAR_7->regs + VAR_1);

 return VAR_6;
}
