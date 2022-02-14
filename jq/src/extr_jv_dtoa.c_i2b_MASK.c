
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dtoa_context {int dummy; } ;
struct TYPE_4__ {int* x; int wds; } ;
typedef TYPE_1__ Bigint ;


 TYPE_1__* FUNC_0 (struct dtoa_context*,int) ;

__attribute__((used)) static Bigint *
FUNC_1
 (struct dtoa_context* VAR_0, int VAR_1)
{
 Bigint *VAR_2;

 VAR_2 = FUNC_0(VAR_0, 1);
 VAR_2->x[0] = VAR_1;
 VAR_2->wds = 1;
 return VAR_2;
 }
