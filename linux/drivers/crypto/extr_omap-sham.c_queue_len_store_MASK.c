
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long max_qlen; } ;
struct omap_sham_dev {int lock; TYPE_1__ queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct omap_sham_dev* FUNC_0 (struct device*) ;
 size_t FUNC_1 (char const*,int ,long*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2, const char *VAR_3,
          size_t VAR_4)
{
 struct omap_sham_dev *VAR_5 = FUNC_0(VAR_1);
 ssize_t VAR_6;
 long VAR_7;
 unsigned long VAR_8;

 VAR_6 = FUNC_1(VAR_3, 0, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 < 1)
  return -VAR_0;






 FUNC_2(&VAR_5->lock, VAR_8);
 VAR_5->queue.max_qlen = VAR_7;
 FUNC_3(&VAR_5->lock, VAR_8);

 return VAR_4;
}
