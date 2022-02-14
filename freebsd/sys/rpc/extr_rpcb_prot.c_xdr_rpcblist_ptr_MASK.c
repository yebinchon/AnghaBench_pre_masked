
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int ;
typedef TYPE_1__* rpcblist_ptr ;
typedef int caddr_t ;
typedef scalar_t__ bool_t ;
struct TYPE_8__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;
struct TYPE_7__ {struct TYPE_7__* rpcb_next; } ;
typedef int RPCBLIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__*) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int ) ;
 scalar_t__ VAR_3 ;

bool_t
FUNC_2(XDR *VAR_4, rpcblist_ptr *VAR_5)
{





 bool_t VAR_6;
 int VAR_7 = (VAR_4->x_op == VAR_2);
 rpcblist_ptr VAR_8;
 rpcblist_ptr VAR_9;

 VAR_8 = ((void*)0);
 for (;;) {
  VAR_6 = (bool_t)(*VAR_5 != ((void*)0));
  if (! FUNC_0(VAR_4, &VAR_6)) {
   return (VAR_0);
  }
  if (! VAR_6) {
   return (VAR_1);
  }





  if (VAR_7 && *VAR_5)
   VAR_8 = (*VAR_5)->rpcb_next;
  if (! FUNC_1(VAR_4, (caddr_t *)VAR_5,
      (u_int)sizeof (RPCBLIST), (xdrproc_t)VAR_3)) {
   return (VAR_0);
  }
  if (VAR_7) {
   VAR_9 = VAR_8;
   VAR_5 = &VAR_9;





  } else if (*VAR_5) {
   VAR_5 = &((*VAR_5)->rpcb_next);
  }
 }

}
