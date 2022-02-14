
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct device_node* FUNC_3 (int ,int *) ;
 int * FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_7(void)
{
 int VAR_3, VAR_4;
 struct device_node *VAR_5;
 u32 VAR_6;
 const __be32 *VAR_7;
 u32 VAR_8;


 VAR_5 = FUNC_3(VAR_0, ((void*)0));
 FUNC_0(!VAR_5);

 VAR_8 = FUNC_2(VAR_0);
 VAR_2 = VAR_1 = VAR_8;

 FUNC_6("xics: xics_default_server = 0x%x\n", VAR_2);

 VAR_7 = FUNC_4(VAR_5, "ibm,ppc-interrupt-gserver#s", &VAR_6);
 if (!VAR_7) {
  FUNC_5(VAR_5);
  return;
 }

 VAR_3 = VAR_6 / sizeof(int);






 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4 += 2) {
  if (FUNC_1(VAR_7[VAR_4]) == VAR_8) {
   VAR_1 = FUNC_1(VAR_7[VAR_4+1]);
   break;
  }
 }
 FUNC_6("xics: xics_default_distrib_server = 0x%x\n",
   VAR_1);
 FUNC_5(VAR_5);
}
