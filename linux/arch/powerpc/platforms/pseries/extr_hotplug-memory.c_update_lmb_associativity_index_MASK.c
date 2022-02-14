
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int dummy; } ;
struct drmem_lmb {int aa_index; int drc_index; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct device_node* FUNC_1 (int ,struct device_node*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,struct property*,int const*,int *) ;
 struct device_node* FUNC_4 (char*) ;
 struct property* FUNC_5 (struct device_node*,char*,int *) ;
 int * FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct drmem_lmb *VAR_2)
{
 struct device_node *VAR_3, *VAR_4, *VAR_5;
 struct property *VAR_6;
 const u32 *VAR_7;
 u32 VAR_8;
 bool VAR_9;

 VAR_3 = FUNC_4("/");
 if (!VAR_3)
  return -VAR_1;

 VAR_4 = FUNC_1(FUNC_0(VAR_2->drc_index),
          VAR_3);
 FUNC_7(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_4, "ibm,associativity", ((void*)0));
 if (!VAR_7) {
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 VAR_5 = FUNC_4("/ibm,dynamic-reconfiguration-memory");
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 VAR_6 = FUNC_5(VAR_5, "ibm,associativity-lookup-arrays",
        ((void*)0));
 if (!VAR_6) {
  FUNC_7(VAR_5);
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7, &VAR_8);

 FUNC_7(VAR_5);
 FUNC_2(VAR_4);

 if (!VAR_9) {
  FUNC_8("Could not find LMB associativity\n");
  return -1;
 }

 VAR_2->aa_index = VAR_8;
 return 0;
}
