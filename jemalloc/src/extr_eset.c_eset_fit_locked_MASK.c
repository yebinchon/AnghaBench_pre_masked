
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_5__ {int mtx; } ;
typedef TYPE_1__ eset_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int * FUNC_1 (int *,TYPE_1__*,size_t) ;
 int * FUNC_2 (TYPE_1__*,size_t,size_t,size_t) ;
 int FUNC_3 (int *,int *) ;

extent_t *
FUNC_4(tsdn_t *VAR_1, eset_t *VAR_2, size_t VAR_3, size_t VAR_4) {
 FUNC_3(VAR_1, &VAR_2->mtx);

 size_t VAR_5 = VAR_3 + FUNC_0(VAR_4) - VAR_0;

 if (VAR_5 < VAR_3) {
  return ((void*)0);
 }

 extent_t *VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_5);

 if (VAR_4 > VAR_0 && VAR_6 == ((void*)0)) {





  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_4);
 }

 return VAR_6;
}
