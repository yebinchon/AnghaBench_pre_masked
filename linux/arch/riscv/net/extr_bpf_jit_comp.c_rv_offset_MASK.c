
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv_jit_context {int* offset; } ;



__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, struct rv_jit_context *VAR_2)
{
 int VAR_3 = VAR_2->offset[VAR_1] - 1, VAR_4 = VAR_2->offset[VAR_0];

 return (VAR_4 - VAR_3) << 2;
}
