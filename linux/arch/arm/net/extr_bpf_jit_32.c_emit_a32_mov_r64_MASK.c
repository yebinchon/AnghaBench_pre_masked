
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct jit_ctx {scalar_t__ cpu_architecture; TYPE_2__* prog; } ;
typedef int s8 ;
struct TYPE_4__ {TYPE_1__* aux; } ;
struct TYPE_3__ {int verifier_zext; } ;


 int VAR_0 ;
 int FUNC_0 (int const,int ,int ) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,struct jit_ctx*) ;
 int FUNC_5 (int ,int ,struct jit_ctx*) ;
 int FUNC_6 (int ,int ,struct jit_ctx*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static inline void FUNC_8(const bool VAR_9, const s8 VAR_10[],
      const s8 VAR_11[],
      struct jit_ctx *VAR_12) {
 if (!VAR_9) {
  FUNC_6(VAR_6, VAR_8, VAR_12);
  if (!VAR_12->prog->aux->verifier_zext)

   FUNC_5(VAR_5, 0, VAR_12);
 } else if (VAR_3 < 6 &&
     VAR_12->cpu_architecture < VAR_1) {

  FUNC_6(VAR_6, VAR_8, VAR_12);
  FUNC_6(VAR_5, VAR_7, VAR_12);
 } else if (FUNC_7(VAR_8) && FUNC_7(VAR_6)) {
  const u8 *VAR_13 = VAR_4[VAR_2];

  FUNC_4(FUNC_0(VAR_13[1], VAR_0, FUNC_3(VAR_8)), VAR_12);
  FUNC_4(FUNC_2(VAR_13[1], VAR_0, FUNC_3(VAR_6)), VAR_12);
 } else if (FUNC_7(VAR_8)) {
  FUNC_4(FUNC_0(VAR_10[1], VAR_0, FUNC_3(VAR_8)), VAR_12);
 } else if (FUNC_7(VAR_6)) {
  FUNC_4(FUNC_2(VAR_11[1], VAR_0, FUNC_3(VAR_6)), VAR_12);
 } else {
  FUNC_4(FUNC_1(VAR_10[0], VAR_11[0]), VAR_12);
  FUNC_4(FUNC_1(VAR_10[1], VAR_11[1]), VAR_12);
 }
}
