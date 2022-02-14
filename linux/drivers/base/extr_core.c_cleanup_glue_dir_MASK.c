
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int kref; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct kobject*) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct kobject*,struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1, struct kobject *VAR_2)
{
 unsigned int VAR_3;


 if (!FUNC_4(VAR_2, VAR_1))
  return;

 FUNC_5(&VAR_0);
 VAR_3 = FUNC_3(&VAR_2->kref);
 if (!FUNC_1(VAR_2) && !--VAR_3)
  FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_6(&VAR_0);
}
