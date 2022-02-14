
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {int len; TYPE_1__* aux; } ;
struct bpf_jit {scalar_t__ prg; scalar_t__ size_prg; scalar_t__ lit; scalar_t__ size; scalar_t__ lit_start; scalar_t__* addrs; } ;
struct TYPE_2__ {int stack_depth; } ;


 int FUNC_0 (struct bpf_jit*,int ) ;
 int FUNC_1 (struct bpf_jit*,struct bpf_prog*,int,int) ;
 int FUNC_2 (struct bpf_jit*,int ) ;

__attribute__((used)) static int FUNC_3(struct bpf_jit *VAR_0, struct bpf_prog *VAR_1,
   bool VAR_2)
{
 int VAR_3, VAR_4;

 VAR_0->lit = VAR_0->lit_start;
 VAR_0->prg = 0;

 FUNC_2(VAR_0, VAR_1->aux->stack_depth);
 for (VAR_3 = 0; VAR_3 < VAR_1->len; VAR_3 += VAR_4) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, VAR_2);
  if (VAR_4 < 0)
   return -1;

  VAR_0->addrs[VAR_3 + VAR_4] = VAR_0->prg;
 }
 FUNC_0(VAR_0, VAR_1->aux->stack_depth);

 VAR_0->lit_start = VAR_0->prg;
 VAR_0->size = VAR_0->lit;
 VAR_0->size_prg = VAR_0->prg;
 return 0;
}
