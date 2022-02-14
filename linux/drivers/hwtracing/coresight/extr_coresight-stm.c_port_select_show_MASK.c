
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_drvdata {unsigned long stmspscr; int spinlock; scalar_t__ base; int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct stm_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,int ,char*,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct stm_drvdata *VAR_5 = FUNC_0(VAR_2->parent);
 unsigned long VAR_6;

 if (!FUNC_1(&VAR_5->mode)) {
  VAR_6 = VAR_5->stmspscr;
 } else {
  FUNC_4(&VAR_5->spinlock);
  VAR_6 = FUNC_2(VAR_5->base + VAR_1);
  FUNC_5(&VAR_5->spinlock);
 }

 return FUNC_3(VAR_4, VAR_0, "%#lx\n", VAR_6);
}
