
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct jit_ctx {int dummy; } ;


 int FUNC_0 (int ,int const,int const) ;
 int FUNC_1 (int ,int const,int const) ;
 int FUNC_2 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int const,int const) ;
 int FUNC_5 (int ,int ,struct jit_ctx*) ;
 int FUNC_6 (int ,struct jit_ctx*) ;

__attribute__((used)) static inline void FUNC_7(const u8 VAR_3, const u8 VAR_4, const u8 VAR_5,
        const u8 VAR_6, struct jit_ctx *VAR_7, u8 VAR_8,
        bool VAR_9) {
 switch (VAR_8) {
 case 132:
  if (VAR_9) {
   FUNC_6(FUNC_1(VAR_1, VAR_4, VAR_6), VAR_7);
   FUNC_6(FUNC_1(VAR_2, VAR_3, VAR_5), VAR_7);
   FUNC_6(FUNC_3(VAR_1, VAR_2, VAR_1), VAR_7);
  } else {
   FUNC_6(FUNC_0(VAR_1, VAR_4, VAR_6), VAR_7);
  }
  break;
 case 138:
 case 133:
 case 136:
 case 137:
 case 135:
 case 134:
  if (VAR_9) {
   FUNC_6(FUNC_2(VAR_3, VAR_5), VAR_7);

   FUNC_5(VAR_0, FUNC_2(VAR_4, VAR_6), VAR_7);
  } else {
   FUNC_6(FUNC_2(VAR_4, VAR_6), VAR_7);
  }
  break;
 case 129:
 case 130:
  FUNC_6(FUNC_2(VAR_6, VAR_4), VAR_7);
  if (VAR_9)
   FUNC_6(FUNC_4(VAR_1, VAR_5, VAR_3), VAR_7);
  break;
 case 128:
 case 131:
  FUNC_6(FUNC_2(VAR_4, VAR_6), VAR_7);
  if (VAR_9)
   FUNC_6(FUNC_4(VAR_1, VAR_3, VAR_5), VAR_7);
  break;
 }
}
