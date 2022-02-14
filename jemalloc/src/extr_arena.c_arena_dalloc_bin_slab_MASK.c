
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_4__ {int curslabs; } ;
struct TYPE_5__ {TYPE_1__ stats; int lock; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4(tsdn_t *VAR_1, arena_t *VAR_2, extent_t *VAR_3,
    bin_t *VAR_4) {
 FUNC_1(VAR_3 != VAR_4->slabcur);

 FUNC_3(VAR_1, &VAR_4->lock);

 FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_1, &VAR_4->lock);
 if (VAR_0) {
  VAR_4->stats.curslabs--;
 }
}
