
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,int) ;
 int FUNC_1 (int*) ;
 struct device_node* FUNC_2 (char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*,char*,int ,int*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(u32 *VAR_0, u32 VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3 = 0;
 int VAR_4, VAR_5;

 VAR_2 = FUNC_2("/cpus");
 if (!VAR_2) {
  FUNC_5("Could not find CPU root node in device tree\n");
  FUNC_1(VAR_0);
  return -1;
 }






 VAR_4 = 1;
 while (VAR_3 < VAR_1) {
  u32 VAR_6;

  VAR_5 = FUNC_4(VAR_2, "ibm,drc-indexes",
      VAR_4++, &VAR_6);
  if (VAR_5)
   break;

  if (FUNC_0(VAR_2, VAR_6))
   continue;

  VAR_0[VAR_3++] = VAR_6;
 }

 FUNC_3(VAR_2);
 return VAR_3;
}
