
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codegen_context {int seen; } ;


 int* VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct codegen_context *VAR_1, int VAR_2)
{
 return (VAR_1->seen & (1 << (31 - VAR_0[VAR_2])));
}
