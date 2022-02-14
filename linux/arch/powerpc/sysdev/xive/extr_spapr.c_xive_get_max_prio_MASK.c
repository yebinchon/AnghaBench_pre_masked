
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int const) ;
 struct device_node* FUNC_1 (char*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool FUNC_4(u8 *VAR_0)
{
 struct device_node *VAR_1;
 const __be32 *VAR_2;
 u32 VAR_3;
 int VAR_4, VAR_5;

 VAR_1 = FUNC_1("/");
 if (!VAR_1) {
  FUNC_3("not root node found !\n");
  return 0;
 }

 VAR_2 = FUNC_2(VAR_1, "ibm,plat-res-int-priorities", &VAR_3);
 if (!VAR_2) {
  FUNC_3("Failed to read 'ibm,plat-res-int-priorities' property\n");
  return 0;
 }

 if (VAR_3 % (2 * sizeof(u32)) != 0) {
  FUNC_3("invalid 'ibm,plat-res-int-priorities' property\n");
  return 0;
 }





 VAR_5 = 0xFF;
 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  int VAR_6 = 0;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < VAR_3 / (2 * sizeof(u32)); VAR_7++) {
   int VAR_8 = FUNC_0(VAR_2[2 * VAR_7]);
   int VAR_9 = FUNC_0(VAR_2[2 * VAR_7 + 1]);

   if (VAR_4 >= VAR_8 && VAR_4 < VAR_8 + VAR_9)
    VAR_6++;
  }

  if (!VAR_6)
   VAR_5 = VAR_4;
 }

 if (VAR_5 == 0xFF) {
  FUNC_3("no valid priority found in 'ibm,plat-res-int-priorities'\n");
  return 0;
 }

 *VAR_0 = VAR_5;
 return 1;
}
