
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int tcache_t ;
typedef int extent_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *,int *,void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (void*,size_t,size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (int ,int *,void*,int ,int) ;
 size_t VAR_4 ;
 int FUNC_9 (int *) ;

void
FUNC_10(tsdn_t *VAR_5, void *VAR_6, tcache_t *VAR_7,
    bool VAR_8) {
 FUNC_2(VAR_2);
 FUNC_1(VAR_3);

 extent_t *VAR_9 = FUNC_4(VAR_5, VAR_6);
 size_t VAR_10 = FUNC_3(VAR_9);
 size_t VAR_11 = FUNC_0(VAR_5, VAR_9, VAR_6);
 if (VAR_1 && VAR_10 < VAR_0) {




  FUNC_1(VAR_11 == VAR_0);
  FUNC_6(VAR_6, VAR_10, VAR_11);
 }
 if (VAR_11 <= VAR_4 && VAR_7 != ((void*)0)) {
  FUNC_8(FUNC_9(VAR_5), VAR_7, VAR_6,
      FUNC_7(VAR_11), VAR_8);
 } else {
  FUNC_5(VAR_5, VAR_9);
 }
}
