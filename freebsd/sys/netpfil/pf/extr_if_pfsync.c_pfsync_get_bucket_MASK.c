
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_softc {struct pfsync_bucket* sc_buckets; } ;
struct pfsync_bucket {int dummy; } ;
struct pf_state {int dummy; } ;


 int FUNC_0 (struct pf_state*) ;
 int VAR_0 ;

__attribute__((used)) static struct pfsync_bucket*
FUNC_1(struct pfsync_softc *VAR_1, struct pf_state *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2) % VAR_0;
 return &VAR_1->sc_buckets[VAR_3];
}
