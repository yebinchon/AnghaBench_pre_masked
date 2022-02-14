
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfsync_bucket {TYPE_2__* b_sc; } ;
struct TYPE_4__ {TYPE_1__* sc_ifp; } ;
struct TYPE_3__ {int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pfsync_bucket*) ;
 int FUNC_3 (struct pfsync_bucket*) ;
 int FUNC_4 (struct pfsync_bucket*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 struct pfsync_bucket *VAR_1 = VAR_0;

 FUNC_1(VAR_1->b_sc->sc_ifp->if_vnet);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0();
}
