
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_5__ {int curslabs; int nslabs; } ;
struct TYPE_6__ {TYPE_1__ stats; int lock; } ;
typedef TYPE_2__ bin_t ;
typedef int bin_info_t ;
typedef int arena_t ;


 int * FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *,int *,size_t,unsigned int,int const*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static extent_t *
FUNC_4(tsdn_t *VAR_2, arena_t *VAR_3, bin_t *VAR_4,
    szind_t VAR_5, unsigned VAR_6) {
 extent_t *VAR_7;
 const bin_info_t *VAR_8;


 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 != ((void*)0)) {
  return VAR_7;
 }


 VAR_8 = &VAR_0[VAR_5];


 FUNC_3(VAR_2, &VAR_4->lock);

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6, VAR_8);

 FUNC_2(VAR_2, &VAR_4->lock);
 if (VAR_7 != ((void*)0)) {
  if (VAR_1) {
   VAR_4->stats.nslabs++;
   VAR_4->stats.curslabs++;
  }
  return VAR_7;
 }






 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 != ((void*)0)) {
  return VAR_7;
 }

 return ((void*)0);
}
