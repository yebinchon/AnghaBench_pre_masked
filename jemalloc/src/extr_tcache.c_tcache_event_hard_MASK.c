
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_16__ {size_t next_gc_bin; int* bin_refilled; int* lg_fill_div; } ;
typedef TYPE_2__ tcache_t ;
typedef size_t szind_t ;
struct TYPE_15__ {int lowbits; } ;
struct TYPE_17__ {TYPE_1__ cur_ptr; int low_water_position; } ;
typedef TYPE_3__ cache_bin_t ;
typedef int cache_bin_sz_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*,size_t,int) ;
 int FUNC_5 (int *,TYPE_2__*,TYPE_3__*,size_t,int) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,size_t) ;
 TYPE_3__* FUNC_7 (TYPE_2__*,size_t) ;

void
FUNC_8(tsd_t *VAR_2, tcache_t *VAR_3) {
 szind_t VAR_4 = VAR_3->next_gc_bin;
 cache_bin_t *VAR_5;
 bool VAR_6;
 if (VAR_4 < VAR_0) {
  VAR_5 = FUNC_7(VAR_3, VAR_4);
  VAR_6 = 1;
 } else {
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  VAR_6 = 0;
 }

 cache_bin_sz_t VAR_7 = FUNC_1(VAR_5, VAR_4);
 cache_bin_sz_t VAR_8 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7 > 0) {



  if (VAR_6) {
   FUNC_0(!VAR_3->bin_refilled[VAR_4]);
   FUNC_5(VAR_2, VAR_3, VAR_5, VAR_4,
       VAR_8 - VAR_7 + (VAR_7 >> 2));




   if ((FUNC_3(VAR_4) >>
        (VAR_3->lg_fill_div[VAR_4] + 1)) >= 1) {
    VAR_3->lg_fill_div[VAR_4]++;
   }
  } else {
   FUNC_4(VAR_2, VAR_3, VAR_5, VAR_4,
        VAR_8 - VAR_7 + (VAR_7 >> 2));
  }
 } else if (VAR_6 && VAR_3->bin_refilled[VAR_4]) {
  FUNC_0(VAR_7 == 0);




  if (VAR_3->lg_fill_div[VAR_4] > 1) {
   VAR_3->lg_fill_div[VAR_4]--;
  }
  VAR_3->bin_refilled[VAR_4] = 0;
 }
 VAR_5->low_water_position = VAR_5->cur_ptr.lowbits;

 VAR_3->next_gc_bin++;
 if (VAR_3->next_gc_bin == VAR_1) {
  VAR_3->next_gc_bin = 0;
 }
}
