
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
typedef int __be32 ;


 int * FUNC_0 (struct device_node*,char*,int *) ;
 void* FUNC_1 (struct device_node*) ;
 void* FUNC_2 (struct device_node*) ;
 void* FUNC_3 (int const*,int) ;

void FUNC_4(struct device_node *VAR_0, const __be32 *VAR_1,
    unsigned long *VAR_2, unsigned long *VAR_3,
    unsigned long *VAR_4)
{
 u32 VAR_5;
 const __be32 *VAR_6;


 *VAR_2 = FUNC_3(VAR_1, 1);
 VAR_1++;

 VAR_6 = FUNC_0(VAR_0, "ibm,#dma-address-cells", ((void*)0));
 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_0, "#address-cells", ((void*)0));

 VAR_5 = VAR_6 ? FUNC_3(VAR_6, 1) : FUNC_1(VAR_0);
 *VAR_3 = FUNC_3(VAR_1, VAR_5);

 VAR_1 += VAR_5;

 VAR_6 = FUNC_0(VAR_0, "ibm,#dma-size-cells", ((void*)0));
 VAR_5 = VAR_6 ? FUNC_3(VAR_6, 1) : FUNC_2(VAR_0);
 *VAR_4 = FUNC_3(VAR_1, VAR_5);
}
