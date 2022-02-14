
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct etmv4_config {int* addr_type; int vissctlr; void** addr_acc; void** addr_val; } ;
typedef enum etm_addr_type { ____Placeholder_etm_addr_type } etm_addr_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (struct etmv4_config*) ;

__attribute__((used)) static void FUNC_2(struct etmv4_config *VAR_1,
           u64 VAR_2, int VAR_3,
           enum etm_addr_type VAR_4)
{
 int VAR_5;
 u64 VAR_6 = FUNC_1(VAR_1);


 VAR_1->addr_val[VAR_3] = VAR_2;
 VAR_1->addr_acc[VAR_3] = VAR_6;
 VAR_1->addr_type[VAR_3] = VAR_4;






 VAR_5 = (VAR_4 == VAR_0 ? 0 : 16);
 VAR_1->vissctlr |= FUNC_0(VAR_5 + VAR_3);
}
