
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_jit {scalar_t__* seen_reg; } ;



__attribute__((used)) static int FUNC_0(struct bpf_jit *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1; VAR_2 < 15; VAR_2++) {
  if (!VAR_0->seen_reg[VAR_2] && !VAR_0->seen_reg[VAR_2 + 1])
   return VAR_2 - 1;
 }
 return VAR_0->seen_reg[15] ? 15 : 14;
}
