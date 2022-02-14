
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
struct TYPE_3__ {int maxwds; int k; } ;
typedef TYPE_1__ Bigint ;


 int FUNC_0 (struct dtoa_context*,TYPE_1__*) ;

void
FUNC_1(struct dtoa_context* VAR_0, char *VAR_1)
{
 Bigint *VAR_2 = (Bigint *)((int *)VAR_1 - 1);
 VAR_2->maxwds = 1 << (VAR_2->k = *(int*)VAR_2);
 FUNC_0(VAR_0, VAR_2);
 }
