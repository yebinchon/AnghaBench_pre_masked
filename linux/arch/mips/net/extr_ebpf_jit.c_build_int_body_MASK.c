
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int* reg_val_types; int* offsets; int idx; int * target; struct bpf_prog* skf; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bpf_insn const*,struct jit_ctx*,int,int) ;

__attribute__((used)) static int FUNC_1(struct jit_ctx *VAR_4)
{
 const struct bpf_prog *VAR_5 = VAR_4->skf;
 const struct bpf_insn *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->len; ) {
  VAR_6 = VAR_5->insnsi + VAR_7;
  if ((VAR_4->reg_val_types[VAR_7] & VAR_3) == 0) {

   VAR_7++;
   continue;
  }

  if (VAR_4->target == ((void*)0))
   VAR_4->offsets[VAR_7] = (VAR_4->offsets[VAR_7] & VAR_2) | (VAR_4->idx * 4);

  VAR_8 = FUNC_0(VAR_6, VAR_4, VAR_7, VAR_5->len);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_7 += VAR_8;
 }

 if (VAR_4->target == ((void*)0))
  VAR_4->offsets[VAR_7] = VAR_4->idx * 4;






 if (VAR_4->target == ((void*)0))
  for (VAR_7 = 0; VAR_7 < VAR_5->len; VAR_7++) {
   VAR_6 = VAR_5->insnsi + VAR_7;
   if (VAR_6->code == (VAR_1 | VAR_0))
    VAR_4->offsets[VAR_7] = VAR_4->idx * 4;
  }
 return 0;
}
