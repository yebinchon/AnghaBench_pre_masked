
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int tsd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_2 ;

void
FUNC_6(tsd_t *VAR_3) {
 uint64_t VAR_4 = FUNC_1(VAR_3);
 uint64_t VAR_5 = FUNC_2(VAR_3);
 uint64_t VAR_6 = FUNC_5(VAR_3);
 uint64_t VAR_7 = FUNC_4(VAR_3);

 FUNC_0(VAR_5 != VAR_6);
 if (VAR_6 <= VAR_0) {
  FUNC_0(VAR_7 == VAR_6);
 } else {
  FUNC_0(VAR_7 == 0U);
 }


 uint64_t VAR_8 = VAR_6 - VAR_5;


 FUNC_0(VAR_4 - VAR_5 < VAR_8);

 uint64_t VAR_9 = FUNC_3(VAR_3);







 FUNC_0((!VAR_2 && VAR_5 == 0U) ||
     VAR_8 == VAR_9 ||
     (VAR_8 < VAR_9 && VAR_8 == VAR_1));
}
