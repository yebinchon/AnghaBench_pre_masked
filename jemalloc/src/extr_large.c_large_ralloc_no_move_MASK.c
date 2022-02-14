
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,size_t,int) ;
 int FUNC_5 (int *,int *,size_t) ;

bool
FUNC_6(tsdn_t *VAR_2, extent_t *VAR_3, size_t VAR_4,
    size_t VAR_5, bool VAR_6) {
 size_t VAR_7 = FUNC_3(VAR_3);


 FUNC_2(VAR_4 > 0 && VAR_5 <= VAR_0);

 FUNC_2(VAR_7 >= VAR_1
     && VAR_5 >= VAR_1);

 if (VAR_5 > VAR_7) {

  if (!FUNC_4(VAR_2, VAR_3, VAR_5,
      VAR_6)) {
   FUNC_0(VAR_2, FUNC_1(VAR_3));
   return 0;
  }

  if (VAR_4 < VAR_5 && VAR_4 > VAR_7 &&
      FUNC_4(VAR_2, VAR_3, VAR_4,
      VAR_6)) {
   FUNC_0(VAR_2, FUNC_1(VAR_3));
   return 0;
  }
 }





 if (VAR_7 >= VAR_4 && VAR_7 <= VAR_5) {
  FUNC_0(VAR_2, FUNC_1(VAR_3));
  return 0;
 }


 if (VAR_7 > VAR_5) {
  if (!FUNC_5(VAR_2, VAR_3, VAR_5)) {
   FUNC_0(VAR_2, FUNC_1(VAR_3));
   return 0;
  }
 }
 return 1;
}
