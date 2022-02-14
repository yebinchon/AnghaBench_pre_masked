
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_ctx {int* offsets; int * target; } ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1,
     const struct jit_ctx *VAR_2) {
 int VAR_3, VAR_4;

 if (VAR_2->target == ((void*)0))
  return 0;
 VAR_3 = VAR_2->offsets[VAR_0];
 VAR_4 = VAR_2->offsets[VAR_1];

 return VAR_3 - VAR_4 - 1;
}
