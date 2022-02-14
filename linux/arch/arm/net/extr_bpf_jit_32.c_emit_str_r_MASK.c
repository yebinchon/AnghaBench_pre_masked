
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jit_ctx {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 int FUNC_0 (int const,int const,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;




 size_t VAR_0 ;
 int FUNC_4 (int const,int const,struct jit_ctx*) ;
 int ** VAR_1 ;
 int FUNC_5 (int ,struct jit_ctx*) ;
 int FUNC_6 (int const,int,struct jit_ctx*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_7(const s8 VAR_4, const s8 VAR_5[],
         s32 VAR_6, struct jit_ctx *VAR_7, const u8 VAR_8){
 const s8 *VAR_9 = VAR_1[VAR_0];
 s32 VAR_10;
 s8 VAR_11;

 VAR_11 = FUNC_4(VAR_4, VAR_9[1], VAR_7);

 if (VAR_8 == 129)
  VAR_10 = 0xff;
 else
  VAR_10 = 0xfff;

 if (VAR_6 < 0 || VAR_6 > VAR_10) {
  FUNC_6(VAR_9[0], VAR_6, VAR_7);
  FUNC_5(FUNC_0(VAR_9[0], VAR_9[0], VAR_11), VAR_7);
  VAR_11 = VAR_9[0];
  VAR_6 = 0;
 }
 switch (VAR_8) {
 case 131:

  FUNC_5(FUNC_1(VAR_3, VAR_11, VAR_6), VAR_7);
  break;
 case 129:

  FUNC_5(FUNC_2(VAR_3, VAR_11, VAR_6), VAR_7);
  break;
 case 128:

  FUNC_5(FUNC_3(VAR_3, VAR_11, VAR_6), VAR_7);
  break;
 case 130:

  FUNC_5(FUNC_3(VAR_3, VAR_11, VAR_6), VAR_7);
  FUNC_5(FUNC_3(VAR_2, VAR_11, VAR_6 + 4), VAR_7);
  break;
 }
}
