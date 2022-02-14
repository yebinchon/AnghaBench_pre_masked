
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int FUNC_0 (int const*,int const*,struct jit_ctx*) ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const,int,struct jit_ctx*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const s8 VAR_3[], u64 VAR_4, struct jit_ctx *VAR_5)
{
 const s8 *VAR_6 = VAR_1[VAR_0];
 const s8 *VAR_7 = FUNC_2(VAR_2) ? VAR_6 : VAR_3;

 FUNC_1(VAR_7[1], (u32)VAR_4, VAR_5);
 FUNC_1(VAR_7[0], VAR_4 >> 32, VAR_5);

 FUNC_0(VAR_3, VAR_7, VAR_5);
}
