
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv_jit_context {int epilogue_offset; int ninsns; } ;



__attribute__((used)) static int FUNC_0(struct rv_jit_context *VAR_0)
{
 int VAR_1 = VAR_0->epilogue_offset, VAR_2 = VAR_0->ninsns;

 return (VAR_1 - VAR_2) << 2;
}
