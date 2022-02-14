
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_6__ {int reslabs; } ;
struct TYPE_7__ {TYPE_1__ stats; int * slabcur; } ;
typedef TYPE_2__ bin_t ;
typedef int arena_t ;


 int FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_1, arena_t *VAR_2, extent_t *VAR_3,
    bin_t *VAR_4) {
 FUNC_2(FUNC_3(VAR_3) > 0);







 if (VAR_4->slabcur != ((void*)0) && FUNC_4(VAR_4->slabcur, VAR_3) > 0) {

  if (FUNC_3(VAR_4->slabcur) > 0) {
   FUNC_1(VAR_4, VAR_4->slabcur);
  } else {
   FUNC_0(VAR_2, VAR_4, VAR_4->slabcur);
  }
  VAR_4->slabcur = VAR_3;
  if (VAR_0) {
   VAR_4->stats.reslabs++;
  }
 } else {
  FUNC_1(VAR_4, VAR_3);
 }
}
