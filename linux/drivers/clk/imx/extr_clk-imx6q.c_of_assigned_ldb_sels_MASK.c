
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int* args; struct device_node* np; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,char*,char*) ;
 int FUNC_2 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_4,
     unsigned int *VAR_5,
     unsigned int *VAR_6)
{
 struct of_phandle_args VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_1(VAR_4, "assigned-clock-parents",
       "#clock-cells");
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_9 = FUNC_2(VAR_4, "assigned-clock-parents",
     "#clock-cells", VAR_8, &VAR_7);
  if (VAR_9 < 0) {

   if (VAR_9 == -VAR_0)
    continue;
   else
    return;
  }
  if (VAR_7.np != VAR_4 || VAR_7.args[0] >= VAR_1) {
   FUNC_3("ccm: parent clock %d not in ccm\n", VAR_8);
   return;
  }
  VAR_11 = VAR_7.args[0];

  VAR_9 = FUNC_2(VAR_4, "assigned-clocks",
    "#clock-cells", VAR_8, &VAR_7);
  if (VAR_9 < 0)
   return;
  if (VAR_7.np != VAR_4 || VAR_7.args[0] >= VAR_1) {
   FUNC_3("ccm: child clock %d not in ccm\n", VAR_8);
   return;
  }
  VAR_12 = VAR_7.args[0];

  if (VAR_12 != VAR_2 &&
      VAR_12 != VAR_3)
   continue;

  VAR_13 = FUNC_0(VAR_11);
  if (VAR_13 < 0) {
   FUNC_3("ccm: invalid ldb_di%d parent clock: %d\n",
          VAR_12 == VAR_3, VAR_11);
   continue;
  }

  if (VAR_12 == VAR_2)
   *VAR_5 = VAR_13;
  if (VAR_12 == VAR_3)
   *VAR_6 = VAR_13;
 }
}
