
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_softc {TYPE_1__* sc_ifp; struct pfsync_bucket* sc_buckets; } ;
struct pfsync_bucket {scalar_t__ b_len; size_t b_pluslen; int b_id; void* b_plus; } ;
struct TYPE_2__ {scalar_t__ if_mtu; } ;


 int FUNC_0 (struct pfsync_bucket*) ;
 int FUNC_1 (struct pfsync_bucket*) ;
 struct pfsync_softc* VAR_0 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, size_t VAR_2)
{
 struct pfsync_softc *VAR_3 = VAR_0;
 struct pfsync_bucket *VAR_4 = &VAR_3->sc_buckets[0];

 FUNC_0(VAR_4);

 if (VAR_4->b_len + VAR_2 > VAR_3->sc_ifp->if_mtu)
  FUNC_2(1, VAR_4->b_id);

 VAR_4->b_plus = VAR_1;
 VAR_4->b_len += (VAR_4->b_pluslen = VAR_2);

 FUNC_2(1, VAR_4->b_id);
 FUNC_1(VAR_4);
}
