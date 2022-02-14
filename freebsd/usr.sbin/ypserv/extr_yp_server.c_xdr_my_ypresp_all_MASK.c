
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int val; int key; int stat; } ;
struct TYPE_7__ {TYPE_1__ val; } ;
struct TYPE_8__ {scalar_t__ more; TYPE_2__ ypresp_all_u; } ;
typedef TYPE_3__ ypresp_all ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool_t
FUNC_2(register XDR *VAR_3, ypresp_all *VAR_4)
{
 while (1) {

  if ((VAR_4->ypresp_all_u.val.stat =
   FUNC_1(&VAR_4->ypresp_all_u.val.key,
         &VAR_4->ypresp_all_u.val.val)) == VAR_2) {
   VAR_4->more = VAR_1;
  } else {
   VAR_4->more = VAR_0;
  }


  if (!FUNC_0(VAR_3, VAR_4))
   return(VAR_0);
  if (VAR_4->more == VAR_0)
   return(VAR_1);
 }
}
