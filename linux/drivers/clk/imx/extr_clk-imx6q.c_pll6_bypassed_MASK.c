
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {scalar_t__* args; struct device_node* np; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device_node*,char*,char*) ;
 int FUNC_1 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;

__attribute__((used)) static bool FUNC_2(struct device_node *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct of_phandle_args VAR_6;

 VAR_5 = FUNC_0(VAR_2, "assigned-clocks",
      "#clock-cells");
 if (VAR_5 < 0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
  VAR_4 = FUNC_1(VAR_2, "assigned-clocks",
       "#clock-cells", VAR_3,
       &VAR_6);
  if (VAR_4 < 0)
   return 0;

  if (VAR_6.np == VAR_2 &&
      VAR_6.args[0] == VAR_1)
   break;
 }


 if (VAR_3 == VAR_5)
  return 0;

 VAR_4 = FUNC_1(VAR_2, "assigned-clock-parents",
      "#clock-cells", VAR_3, &VAR_6);

 if (VAR_6.args[0] != VAR_0)
  return 1;

 return 0;
}
