
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_interface {int dummy; } ;
struct device {int id; int kobj; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, struct subsys_interface *VAR_2)
{
 int VAR_3 = VAR_1->id;

 if (!FUNC_0(VAR_3))
  return;

 FUNC_2("CPU%d removed\n", VAR_3);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_1->kobj, &VAR_0);
}
