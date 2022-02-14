
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;


 int FUNC_0 (int ,int ,int const) ;
 int FUNC_1 (int ,int ,int const) ;
 int FUNC_2 (int ,int ,int const) ;



 size_t VAR_0 ;
 int FUNC_3 (int const,int const,struct jit_ctx*) ;
 int FUNC_4 (int const,int ,struct jit_ctx*) ;
 int ** VAR_1 ;
 int FUNC_5 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_6(const s8 VAR_2, const u32 VAR_3,
    struct jit_ctx *VAR_4, const u8 VAR_5) {
 const s8 *VAR_6 = VAR_1[VAR_0];
 s8 VAR_7;

 VAR_7 = FUNC_3(VAR_2, VAR_6[0], VAR_4);


 switch (VAR_5) {
 case 130:
  FUNC_5(FUNC_0(VAR_7, VAR_7, VAR_3), VAR_4);
  break;
 case 128:
  FUNC_5(FUNC_1(VAR_7, VAR_7, VAR_3), VAR_4);
  break;
 case 129:
  FUNC_5(FUNC_2(VAR_7, VAR_7, VAR_3), VAR_4);
  break;
 }

 FUNC_4(VAR_2, VAR_7, VAR_4);
}
