
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_14__ {int * arena; } ;
typedef TYPE_2__ tcache_t ;
struct TYPE_13__ {scalar_t__ nrequests; } ;
struct TYPE_15__ {TYPE_1__ tstats; } ;
typedef TYPE_3__ cache_bin_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_3__*,unsigned int,int ) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__*,unsigned int,int ) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,unsigned int) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(tsd_t *VAR_3, tcache_t *VAR_4) {
 FUNC_0(VAR_4->arena != ((void*)0));

 for (unsigned VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  cache_bin_t *VAR_6 = FUNC_4(VAR_4, VAR_5);
  FUNC_2(VAR_3, VAR_4, VAR_6, VAR_5, 0);

  if (VAR_1) {
   FUNC_0(VAR_6->tstats.nrequests == 0);
  }
 }
 for (unsigned VAR_7 = VAR_0; VAR_7 < VAR_2; VAR_7++) {
  cache_bin_t *VAR_8 = FUNC_3(VAR_4, VAR_7);
  FUNC_1(VAR_3, VAR_4, VAR_8, VAR_7, 0);

  if (VAR_1) {
   FUNC_0(VAR_8->tstats.nrequests == 0);
  }
 }
}
