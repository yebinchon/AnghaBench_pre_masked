
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;


 int FUNC_0 (int,int const,int,int) ;
 int FUNC_1 (int,int const,int,int) ;
 int FUNC_2 (int,int const,int,int) ;
 int FUNC_3 (int ,struct jit_ctx*) ;
 void FUNC_4 (int ,int const,int ,struct jit_ctx*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static inline void FUNC_9(const int VAR_0, const u64 VAR_1,
        struct jit_ctx *VAR_2)
{
 u64 VAR_3 = VAR_1, VAR_4 = ~VAR_1;
 bool VAR_5;
 int VAR_6;

 if (!(VAR_3 >> 32))
  return FUNC_4(0, VAR_0, (u32)VAR_1, VAR_2);

 VAR_5 = FUNC_6(VAR_3, 1) < FUNC_6(VAR_3, 0);
 VAR_6 = FUNC_7(FUNC_8((VAR_5 ? (FUNC_5(VAR_4) - 1) :
       (FUNC_5(VAR_3) - 1)), 16), 0);
 if (VAR_5)
  FUNC_3(FUNC_1(1, VAR_0, (VAR_4 >> VAR_6) & 0xffff, VAR_6), VAR_2);
 else
  FUNC_3(FUNC_2(1, VAR_0, (VAR_3 >> VAR_6) & 0xffff, VAR_6), VAR_2);
 VAR_6 -= 16;
 while (VAR_6 >= 0) {
  if (((VAR_3 >> VAR_6) & 0xffff) != (VAR_5 ? 0xffff : 0x0000))
   FUNC_3(FUNC_0(1, VAR_0, (VAR_3 >> VAR_6) & 0xffff, VAR_6), VAR_2);
  VAR_6 -= 16;
 }
}
