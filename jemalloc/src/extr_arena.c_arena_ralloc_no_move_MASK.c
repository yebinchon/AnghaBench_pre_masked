
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
typedef int arena_t ;
struct TYPE_2__ {size_t reg_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;
 size_t FUNC_3 (int *) ;
 int * FUNC_4 (int *,void*) ;
 int FUNC_5 (int *,int *,size_t,size_t,int) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 (size_t) ;
 size_t FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (int) ;

bool
FUNC_10(tsdn_t *VAR_4, void *VAR_5, size_t VAR_6, size_t VAR_7,
    size_t VAR_8, bool VAR_9, size_t *VAR_10) {
 bool VAR_11;

 FUNC_2(VAR_8 == 0 || VAR_7 + VAR_8 <= VAR_0);

 extent_t *VAR_12 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_9(VAR_7 > VAR_0)) {
  VAR_11 = 1;
  goto done;
 }

 size_t VAR_13 = FUNC_7(VAR_7);
 size_t VAR_14 = FUNC_7(VAR_7 + VAR_8);
 if (FUNC_6(VAR_6 <= VAR_2 && VAR_13
     <= VAR_2)) {




  FUNC_2(VAR_3[FUNC_8(VAR_6)].reg_size ==
      VAR_6);
  if ((VAR_14 > VAR_2
      || FUNC_8(VAR_14) != FUNC_8(VAR_6))
      && (VAR_7 > VAR_6 || VAR_14 < VAR_6)) {
   VAR_11 = 1;
   goto done;
  }

  arena_t *VAR_15 = FUNC_1(VAR_12);
  FUNC_0(VAR_4, VAR_15);
  VAR_11 = 0;
 } else if (VAR_6 >= VAR_1
     && VAR_14 >= VAR_1) {
  VAR_11 = FUNC_5(VAR_4, VAR_12, VAR_13, VAR_14,
      VAR_9);
 } else {
  VAR_11 = 1;
 }
done:
 FUNC_2(VAR_12 == FUNC_4(VAR_4, VAR_5));
 *VAR_10 = FUNC_3(VAR_12);

 return VAR_11;
}
