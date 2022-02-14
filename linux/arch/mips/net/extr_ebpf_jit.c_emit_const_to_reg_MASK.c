
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct jit_ctx {int dummy; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jit_ctx*,int ,int,int,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(struct jit_ctx *VAR_5, int VAR_6, u64 VAR_7)
{
 if (VAR_7 >= 0xffffffffffff8000ull || VAR_7 < 0x8000ull) {
  FUNC_0(VAR_5, VAR_1, VAR_6, VAR_0, (int)VAR_7);
 } else if (VAR_7 >= 0xffffffff80000000ull ||
     (VAR_7 < 0x80000000 && VAR_7 > 0xffff)) {
  FUNC_0(VAR_5, VAR_3, VAR_6, (s32)(s16)(VAR_7 >> 16));
  FUNC_0(VAR_5, VAR_4, VAR_6, VAR_6, (unsigned int)(VAR_7 & 0xffff));
 } else {
  int VAR_8;
  bool VAR_9 = 0;
  int VAR_10 = 0;

  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   u64 VAR_11 = (VAR_7 >> (16 * (3 - VAR_8))) & 0xffff;

   if (VAR_9 && VAR_10 > 0 && (VAR_11 || VAR_8 == 3)) {
    FUNC_0(VAR_5, VAR_2, VAR_6, VAR_6, VAR_10);
    VAR_10 = 0;
   }
   if (VAR_11) {
    if (VAR_8 == 0 || (!VAR_9 && VAR_8 < 3 && VAR_11 < 0x8000)) {
     FUNC_0(VAR_5, VAR_3, VAR_6, (s32)(s16)VAR_11);
     VAR_10 = -16;
    } else {
     FUNC_0(VAR_5, VAR_4, VAR_6,
         VAR_9 ? VAR_6 : VAR_0,
         (unsigned int)VAR_11);
    }
    VAR_9 = 1;
   }
   if (VAR_9)
    VAR_10 += 16;
  }
 }
}
