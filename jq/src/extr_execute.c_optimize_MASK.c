
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode {int nsubfunctions; struct bytecode** subfunctions; } ;


 struct bytecode* FUNC_0 (struct bytecode*) ;

__attribute__((used)) static struct bytecode *FUNC_1(struct bytecode *VAR_0) {
  for (int VAR_1=0; VAR_1<VAR_0->nsubfunctions; VAR_1++) {
    VAR_0->subfunctions[VAR_1] = FUNC_1(VAR_0->subfunctions[VAR_1]);
  }
  return FUNC_0(VAR_0);
}
