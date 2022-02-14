
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jit_ctx {int idx; int stack_size; struct bpf_prog* prog; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int stack_depth; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int,int const,int ) ;
 int FUNC_1 (int,int const,int ,int ) ;
 int FUNC_2 (int const,int const,int ) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 size_t VAR_9 ;
 int * VAR_10 ;
 int FUNC_5 (int ,struct jit_ctx*) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static int FUNC_7(struct jit_ctx *VAR_11, bool VAR_12)
{
 const struct bpf_prog *VAR_13 = VAR_11->prog;
 const u8 VAR_14 = VAR_10[VAR_3];
 const u8 VAR_15 = VAR_10[VAR_4];
 const u8 VAR_16 = VAR_10[VAR_5];
 const u8 VAR_17 = VAR_10[VAR_6];
 const u8 VAR_18 = VAR_10[VAR_7];
 const u8 VAR_19 = VAR_10[VAR_9];
 const int VAR_20 = VAR_11->idx;
 int VAR_21;
 FUNC_5(FUNC_2(VAR_0, VAR_1, VAR_2), VAR_11);
 FUNC_5(FUNC_0(1, VAR_0, VAR_2), VAR_11);


 FUNC_5(FUNC_2(VAR_14, VAR_15, VAR_2), VAR_11);
 FUNC_5(FUNC_2(VAR_16, VAR_17, VAR_2), VAR_11);
 FUNC_5(FUNC_2(VAR_18, VAR_19, VAR_2), VAR_11);


 FUNC_5(FUNC_0(1, VAR_18, VAR_2), VAR_11);

 if (!VAR_12) {

  FUNC_5(FUNC_1(1, VAR_19, 0, 0), VAR_11);

  VAR_21 = VAR_11->idx - VAR_20;
  if (VAR_21 != VAR_8) {
   FUNC_6("PROLOGUE_OFFSET = %d, expected %d!\n",
        VAR_21, VAR_8);
   return -1;
  }
 }

 VAR_11->stack_size = FUNC_4(VAR_13->aux->stack_depth);


 FUNC_5(FUNC_3(1, VAR_2, VAR_2, VAR_11->stack_size), VAR_11);
 return 0;
}
