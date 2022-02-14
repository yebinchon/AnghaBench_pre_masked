
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct parser_exec_state {int * ip_va; } ;



__attribute__((used)) static inline u32 *FUNC_0(struct parser_exec_state *VAR_0, int VAR_1)
{
 return VAR_0->ip_va + (VAR_1 << 2);
}
