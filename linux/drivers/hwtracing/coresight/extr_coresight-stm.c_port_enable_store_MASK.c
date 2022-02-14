
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long stmsper; int spinlock; scalar_t__ base; int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct stm_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct stm_drvdata *VAR_5 = FUNC_2(VAR_1->parent);
 unsigned long VAR_6;
 int VAR_7 = 0;

 VAR_7 = FUNC_3(VAR_3, 16, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_5(&VAR_5->spinlock);
 VAR_5->stmsper = VAR_6;

 if (FUNC_4(&VAR_5->mode)) {
  FUNC_1(VAR_5->base);
  FUNC_7(VAR_5->stmsper, VAR_5->base + VAR_0);
  FUNC_0(VAR_5->base);
 }
 FUNC_6(&VAR_5->spinlock);

 return VAR_4;
}
