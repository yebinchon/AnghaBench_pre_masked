
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int idx; int * offset; struct bpf_prog* prog; } ;
struct bpf_prog {int len; struct bpf_insn* insnsi; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (struct bpf_insn const*,struct jit_ctx*) ;

__attribute__((used)) static int FUNC_1(struct jit_ctx *VAR_0)
{
 const struct bpf_prog *VAR_1 = VAR_0->prog;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  const struct bpf_insn *VAR_3 = &VAR_1->insnsi[VAR_2];
  int VAR_4;

  VAR_4 = FUNC_0(VAR_3, VAR_0);

  if (VAR_4 > 0) {
   VAR_2++;
   VAR_0->offset[VAR_2] = VAR_0->idx;
   continue;
  }
  VAR_0->offset[VAR_2] = VAR_0->idx;
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
