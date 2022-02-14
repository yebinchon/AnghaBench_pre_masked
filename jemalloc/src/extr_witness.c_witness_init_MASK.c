
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; void* opaque; int * comp; int rank; } ;
typedef TYPE_1__ witness_t ;
typedef int witness_rank_t ;
typedef int witness_comp_t ;



void
FUNC_0(witness_t *VAR_0, const char *VAR_1, witness_rank_t VAR_2,
    witness_comp_t *VAR_3, void *VAR_4) {
 VAR_0->name = VAR_1;
 VAR_0->rank = VAR_2;
 VAR_0->comp = VAR_3;
 VAR_0->opaque = VAR_4;
}
