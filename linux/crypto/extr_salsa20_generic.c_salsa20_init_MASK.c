
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct salsa20_ctx {int initial_state; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(u32 *VAR_0, const struct salsa20_ctx *VAR_1,
    const u8 *VAR_2)
{
 FUNC_1(VAR_0, VAR_1->initial_state, sizeof(VAR_1->initial_state));
 VAR_0[6] = FUNC_0(VAR_2 + 0);
 VAR_0[7] = FUNC_0(VAR_2 + 4);
}
