
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tda_state {int * m_Regs; } ;


 int FUNC_0 (struct tda_state*,size_t,int *,size_t) ;

__attribute__((used)) static int FUNC_1(struct tda_state *VAR_0, u8 VAR_1, u8 VAR_2)
{
 return FUNC_0(VAR_0, VAR_1,
    &VAR_0->m_Regs[VAR_1], VAR_2-VAR_1+1);
}
