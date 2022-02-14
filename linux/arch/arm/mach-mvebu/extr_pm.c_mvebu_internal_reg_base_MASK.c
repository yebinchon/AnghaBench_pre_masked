
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int phys_addr_t ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct device_node* FUNC_2 (int *,char*) ;
 int FUNC_3 (struct device_node*,int*) ;

__attribute__((used)) static phys_addr_t FUNC_4(void)
{
 struct device_node *VAR_0;
 __be32 VAR_1[2];

 VAR_0 = FUNC_2(((void*)0), "internal-regs");
 FUNC_0(!VAR_0);






 VAR_1[0] = FUNC_1(0xf0010000);
 VAR_1[1] = 0x0;

 return FUNC_3(VAR_0, VAR_1);
}
