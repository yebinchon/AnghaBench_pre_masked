
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef int decFloat ;
typedef int decContext ;
typedef int Int ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int) ;
 int* VAR_0 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int const*) ;
 int * FUNC_7 (int *,int *,scalar_t__) ;
 int * FUNC_8 (int *,int const*) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int const*,int const*,int *) ;

decFloat * FUNC_11(decFloat *VAR_2,
                          const decFloat *VAR_3, const decFloat *VAR_4,
                          decContext *VAR_5) {
  uInt VAR_6;
  Int VAR_7;

  if (FUNC_2(VAR_3)||FUNC_2(VAR_4)) return FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);
  if (!FUNC_1(VAR_4)) return FUNC_9(VAR_2, VAR_5);
  VAR_6=FUNC_6(VAR_4);
  if (VAR_7>VAR_1) return FUNC_9(VAR_2, VAR_5);

  if (FUNC_0(VAR_3)) return FUNC_8(VAR_2, VAR_3);
  if (FUNC_3(VAR_4)) VAR_7=-VAR_7;

  *VAR_2=*VAR_3;
  return FUNC_7(VAR_2, VAR_5, FUNC_5(VAR_2)+VAR_7);
  }
