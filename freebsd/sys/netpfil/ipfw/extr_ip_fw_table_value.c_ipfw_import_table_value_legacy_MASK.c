
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct table_value {void* limit; void* dscp; void* nh4; void* nat; void* fib; void* netgraph; void* skipto; void* divert; void* pipe; void* tag; } ;


 int FUNC_0 (struct table_value*,int ,int) ;

void
FUNC_1(uint32_t VAR_0, struct table_value *VAR_1)
{

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->tag = VAR_0;
 VAR_1->pipe = VAR_0;
 VAR_1->divert = VAR_0;
 VAR_1->skipto = VAR_0;
 VAR_1->netgraph = VAR_0;
 VAR_1->fib = VAR_0;
 VAR_1->nat = VAR_0;
 VAR_1->nh4 = VAR_0;
 VAR_1->dscp = VAR_0;
 VAR_1->limit = VAR_0;
}
