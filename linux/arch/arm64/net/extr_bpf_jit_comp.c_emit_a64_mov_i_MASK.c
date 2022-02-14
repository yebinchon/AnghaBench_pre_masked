
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct jit_ctx {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int const,int const,int,int) ;
 int FUNC_1 (int const,int const,int,int) ;
 int FUNC_2 (int const,int const,int,int ) ;
 int FUNC_3 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_4(const int VAR_0, const int VAR_1,
      const s32 VAR_2, struct jit_ctx *VAR_3)
{
 u16 VAR_4 = VAR_2 >> 16;
 u16 VAR_5 = VAR_2 & 0xffff;

 if (VAR_4 & 0x8000) {
  if (VAR_4 == 0xffff) {
   FUNC_3(FUNC_1(VAR_0, VAR_1, (u16)~VAR_5, 0), VAR_3);
  } else {
   FUNC_3(FUNC_1(VAR_0, VAR_1, (u16)~VAR_4, 16), VAR_3);
   if (VAR_5 != 0xffff)
    FUNC_3(FUNC_0(VAR_0, VAR_1, VAR_5, 0), VAR_3);
  }
 } else {
  FUNC_3(FUNC_2(VAR_0, VAR_1, VAR_5, 0), VAR_3);
  if (VAR_4)
   FUNC_3(FUNC_0(VAR_0, VAR_1, VAR_4, 16), VAR_3);
 }
}
