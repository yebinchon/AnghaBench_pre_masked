
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int idx; int * offset; int * image; struct bpf_prog* prog; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (struct bpf_insn const*,struct jit_ctx*,int) ;

__attribute__((used)) static int FUNC_1(struct jit_ctx *VAR_0, bool VAR_1)
{
 const struct bpf_prog *VAR_2 = VAR_0->prog;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++) {
  const struct bpf_insn *VAR_4 = &VAR_2->insnsi[VAR_3];
  int VAR_5;

  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1);
  if (VAR_5 > 0) {
   VAR_3++;
   if (VAR_0->image == ((void*)0))
    VAR_0->offset[VAR_3] = VAR_0->idx;
   continue;
  }
  if (VAR_0->image == ((void*)0))
   VAR_0->offset[VAR_3] = VAR_0->idx;
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
