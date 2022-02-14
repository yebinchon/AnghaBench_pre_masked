
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct etmv4_config {int viiectlr; void** addr_type; void** addr_acc; void** addr_val; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* FUNC_1 (struct etmv4_config*) ;

__attribute__((used)) static void FUNC_2(struct etmv4_config *VAR_1,
           u64 VAR_2, u64 VAR_3, int VAR_4)
{
 u64 VAR_5 = FUNC_1(VAR_1);


 VAR_1->addr_val[VAR_4] = VAR_2;
 VAR_1->addr_acc[VAR_4] = VAR_5;
 VAR_1->addr_type[VAR_4] = VAR_0;


 VAR_1->addr_val[VAR_4 + 1] = VAR_3;
 VAR_1->addr_acc[VAR_4 + 1] = VAR_5;
 VAR_1->addr_type[VAR_4 + 1] = VAR_0;
 VAR_1->viiectlr |= FUNC_0(VAR_4 / 2);
}
