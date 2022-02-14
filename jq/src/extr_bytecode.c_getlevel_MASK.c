
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecode {struct bytecode* parent; } ;



__attribute__((used)) static struct bytecode* FUNC_0(struct bytecode* VAR_0, int VAR_1) {
  while (VAR_1 > 0) {
    VAR_0 = VAR_0->parent;
    VAR_1--;
  }
  return VAR_0;
}
