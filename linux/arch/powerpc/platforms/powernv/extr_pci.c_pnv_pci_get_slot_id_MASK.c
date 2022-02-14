
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct device_node*,char*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;

int FUNC_7(struct device_node *VAR_2, uint64_t *VAR_3)
{
 struct device_node *VAR_4 = VAR_2;
 u32 VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_2, "reg", &VAR_5);
 if (VAR_7)
  return -VAR_1;

 VAR_5 = ((VAR_5 & 0x00ffff00) >> 8);
 while ((VAR_4 = FUNC_3(VAR_4))) {
  if (!FUNC_0(VAR_4)) {
   FUNC_4(VAR_4);
   break;
  }

  if (!FUNC_2(VAR_4, "ibm,ioda2-phb") &&
      !FUNC_2(VAR_4, "ibm,ioda3-phb")) {
   FUNC_4(VAR_4);
   continue;
  }

  VAR_7 = FUNC_6(VAR_4, "ibm,opal-phbid", &VAR_6);
  if (VAR_7) {
   FUNC_4(VAR_4);
   return -VAR_1;
  }

  *VAR_3 = FUNC_1(VAR_6, VAR_5);
  return 0;
 }

 return -VAR_0;
}
