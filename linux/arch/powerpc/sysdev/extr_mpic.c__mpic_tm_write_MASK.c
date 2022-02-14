
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpic {int tmregs; int reg_type; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,unsigned int,int ) ;
 unsigned int FUNC_2 (struct mpic*,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct mpic *VAR_1, unsigned int VAR_2, u32 VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_1, VAR_2) +
         FUNC_0(VAR_0);

 FUNC_1(VAR_1->reg_type, &VAR_1->tmregs, VAR_4, VAR_3);
}
