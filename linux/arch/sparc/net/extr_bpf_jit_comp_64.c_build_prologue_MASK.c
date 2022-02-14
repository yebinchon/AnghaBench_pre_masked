
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct jit_ctx {scalar_t__ saw_frame_pointer; scalar_t__ saw_tail_call; struct bpf_prog* prog; } ;
struct bpf_prog {TYPE_1__* aux; } ;
typedef int s32 ;
struct TYPE_2__ {int stack_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int VAR_17 ;
 int const VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 int FUNC_3 (int,struct jit_ctx*) ;
 int FUNC_4 (struct jit_ctx*) ;
 int FUNC_5 (int ,int ,struct jit_ctx*) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct jit_ctx *VAR_22)
{
 s32 VAR_23 = VAR_1;

 if (VAR_22->saw_frame_pointer || VAR_22->saw_tail_call) {
  struct bpf_prog *VAR_24 = VAR_22->prog;
  u32 VAR_25;

  VAR_25 = VAR_24->aux->stack_depth;
  VAR_23 += FUNC_6(VAR_25, 16);
 }

 if (VAR_22->saw_tail_call)
  VAR_23 += 8;


 FUNC_3(VAR_17 | VAR_11 | FUNC_1(VAR_18) | FUNC_2(-VAR_23) | FUNC_0(VAR_18), VAR_22);


 if (VAR_22->saw_tail_call) {
  u32 VAR_26 = VAR_3;

  FUNC_3(VAR_19 | VAR_11 | FUNC_1(VAR_18) | FUNC_2(VAR_26) | FUNC_0(VAR_5), VAR_22);
 } else {
  FUNC_4(VAR_22);
 }
 if (VAR_22->saw_frame_pointer) {
  const u8 VAR_27 = VAR_21[VAR_2];

  FUNC_3(VAR_0 | VAR_11 | FUNC_1(VAR_4) | FUNC_2(VAR_20) | FUNC_0(VAR_27), VAR_22);
 } else {
  FUNC_4(VAR_22);
 }

 FUNC_5(VAR_6, VAR_12, VAR_22);
 FUNC_5(VAR_7, VAR_13, VAR_22);
 FUNC_5(VAR_8, VAR_14, VAR_22);
 FUNC_5(VAR_9, VAR_15, VAR_22);
 FUNC_5(VAR_10, VAR_16, VAR_22);

}
