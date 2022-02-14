
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subsys_interface {int dummy; } ;
struct device {int id; int kobj; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, struct subsys_interface *VAR_4)
{
 int VAR_5, VAR_6 = VAR_3->id;

 if (!FUNC_0(VAR_6))
  return 0;

 FUNC_2("CPU%d added\n", VAR_6);

 VAR_5 = FUNC_3(&VAR_3->kobj, &VAR_2);
 if (VAR_5)
  return VAR_5;

 if (FUNC_1(VAR_6, 1) == VAR_1)
  return -VAR_0;

 return VAR_5;
}
