
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int nvmem_cell ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 struct device_node* FUNC_2 (struct device*) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int*,size_t*) ;
 int FUNC_7 (struct device_node*,char*) ;
 int FUNC_8 (struct device_node*) ;
 int* FUNC_9 (struct device_node*,int *) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static int FUNC_11(u32 *VAR_5)
{
 struct nvmem_cell *VAR_6;
 struct device_node *VAR_7;
 struct device *VAR_8;
 u32 *VAR_9, VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_8 = FUNC_3(0);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_8);
 if (!VAR_7)
  return -VAR_1;

 VAR_12 = FUNC_7(VAR_7,
          "allwinner,sun50i-h6-operating-points");
 if (!VAR_12) {
  FUNC_8(VAR_7);
  return -VAR_1;
 }

 VAR_6 = FUNC_9(VAR_7, ((void*)0));
 FUNC_8(VAR_7);
 if (FUNC_0(VAR_6)) {
  if (FUNC_1(VAR_6) != -VAR_2)
   FUNC_10("Could not get nvmem cell: %ld\n",
          FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }

 VAR_9 = FUNC_6(VAR_6, &VAR_11);
 FUNC_5(VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = (*VAR_9 >> VAR_4) & VAR_3;
 switch (VAR_10) {
 case 0b0001:
  *VAR_5 = 1;
  break;
 case 0b0011:
  *VAR_5 = 2;
  break;
 default:




  *VAR_5 = 0;
  break;
 }

 FUNC_4(VAR_9);
 return 0;
}
