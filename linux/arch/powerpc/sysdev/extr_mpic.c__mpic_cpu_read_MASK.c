
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int * cpuregs; int reg_type; } ;


 int FUNC_0 (int ,int *,unsigned int) ;
 unsigned int FUNC_1 (struct mpic*) ;

__attribute__((used)) static inline u32 FUNC_2(struct mpic *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0->reg_type, &VAR_0->cpuregs[VAR_2], VAR_1);
}
