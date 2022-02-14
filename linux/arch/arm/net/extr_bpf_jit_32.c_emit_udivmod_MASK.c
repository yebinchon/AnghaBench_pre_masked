
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct jit_ctx {int dummy; } ;
typedef scalar_t__ s8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__ const,scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__** VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,struct jit_ctx*) ;
 int FUNC_4 (scalar_t__,struct jit_ctx*) ;
 int FUNC_5 (scalar_t__,int ,struct jit_ctx*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static inline void FUNC_6(u8 VAR_10, u8 VAR_11, u8 VAR_12, struct jit_ctx *VAR_13, u8 VAR_14)
{
 const s8 *VAR_15 = VAR_6[VAR_5];
 if (VAR_12 != VAR_2) {
  FUNC_3(FUNC_1(VAR_15[0], VAR_2), VAR_13);
  FUNC_3(FUNC_1(VAR_2, VAR_12), VAR_13);
 }
 if (VAR_11 != VAR_1) {
  FUNC_3(FUNC_1(VAR_15[1], VAR_1), VAR_13);
  FUNC_3(FUNC_1(VAR_1, VAR_11), VAR_13);
 }


 FUNC_5(VAR_0, VAR_14 == VAR_3 ?
     (u32)VAR_9 : (u32)VAR_8, VAR_13);
 FUNC_4(VAR_0, VAR_13);


 if (VAR_10 != VAR_1)
  FUNC_3(FUNC_1(VAR_10, VAR_1), VAR_13);


 if (VAR_12 != VAR_2)
  FUNC_3(FUNC_1(VAR_2, VAR_15[0]), VAR_13);
 if (VAR_11 != VAR_1)
  FUNC_3(FUNC_1(VAR_1, VAR_15[1]), VAR_13);
}
