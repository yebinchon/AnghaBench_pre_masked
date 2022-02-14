
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_softc {struct pfsync_bucket* sc_buckets; } ;
struct pfsync_bucket {int dummy; } ;


 int FUNC_0 (struct pfsync_bucket*) ;
 int FUNC_1 (struct pfsync_bucket*) ;
 int VAR_0 ;
 int FUNC_2 (struct pfsync_bucket*) ;

__attribute__((used)) static void
FUNC_3(struct pfsync_softc *VAR_1)
{
 int VAR_2;
 struct pfsync_bucket *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = &VAR_1->sc_buckets[VAR_2];

  FUNC_0(VAR_3);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
 }
}
