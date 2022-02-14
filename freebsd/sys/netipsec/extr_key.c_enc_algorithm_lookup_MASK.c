
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct enc_xform {int dummy; } ;
struct TYPE_3__ {int sadb_alg; struct enc_xform const* xform; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

const struct enc_xform *
FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_1 == VAR_0[VAR_2].sadb_alg)
   return (VAR_0[VAR_2].xform);
 return (((void*)0));
}
