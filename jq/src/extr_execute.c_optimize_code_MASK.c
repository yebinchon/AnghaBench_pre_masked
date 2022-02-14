
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bytecode {int* code; int codelen; } ;



 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static struct bytecode *FUNC_2(struct bytecode *VAR_0) {
  uint16_t *VAR_1 = VAR_0->code;

  while (VAR_1 < VAR_0->code + VAR_0->codelen) {
    switch (*VAR_1) {
    case 128:
      *VAR_1 = FUNC_1(VAR_1);
      break;



    default: break;
    }
    VAR_1 += FUNC_0(VAR_1);
  }
  return VAR_0;
}
