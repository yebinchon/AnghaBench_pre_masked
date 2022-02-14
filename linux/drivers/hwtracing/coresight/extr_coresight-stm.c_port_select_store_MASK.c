
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long stmspscr; int spinlock; scalar_t__ base; int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct stm_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_4 (int *) ;
 unsigned long FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct stm_drvdata *VAR_6 = FUNC_2(VAR_2->parent);
 unsigned long VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_9 = FUNC_3(VAR_4, 16, &VAR_7);
 if (VAR_9)
  return VAR_9;

 FUNC_6(&VAR_6->spinlock);
 VAR_6->stmspscr = VAR_7;

 if (FUNC_4(&VAR_6->mode)) {
  FUNC_1(VAR_6->base);

  VAR_8 = FUNC_5(VAR_6->base + VAR_0);
  FUNC_8(0x0, VAR_6->base + VAR_0);
  FUNC_8(VAR_6->stmspscr, VAR_6->base + VAR_1);
  FUNC_8(VAR_8, VAR_6->base + VAR_0);
  FUNC_0(VAR_6->base);
 }
 FUNC_7(&VAR_6->spinlock);

 return VAR_5;
}
