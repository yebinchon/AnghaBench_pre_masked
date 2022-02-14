
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct svc_callout {struct svc_callout* sc_netid; } ;
typedef int rpcvers_t ;
typedef int rpcprog_t ;
struct TYPE_4__ {int sp_lock; int sp_callouts; } ;
typedef TYPE_1__ SVCPOOL ;


 int FUNC_0 (int *,struct svc_callout*,int ) ;
 int FUNC_1 (struct svc_callout*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int const,int *) ;
 int VAR_0 ;
 struct svc_callout* FUNC_5 (TYPE_1__*,int const,int const,int *) ;

void
FUNC_6(SVCPOOL *VAR_1, const rpcprog_t VAR_2, const rpcvers_t VAR_3)
{
 struct svc_callout *VAR_4;


 (void) FUNC_4(VAR_2, VAR_3, ((void*)0));
 FUNC_2(&VAR_1->sp_lock);
 while ((VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3, ((void*)0))) != ((void*)0)) {
  FUNC_0(&VAR_1->sp_callouts, VAR_4, VAR_0);
  if (VAR_4->sc_netid)
   FUNC_1(VAR_4->sc_netid, sizeof (VAR_4->sc_netid) + 1);
  FUNC_1(VAR_4, sizeof (struct svc_callout));
 }
 FUNC_3(&VAR_1->sp_lock);
}
