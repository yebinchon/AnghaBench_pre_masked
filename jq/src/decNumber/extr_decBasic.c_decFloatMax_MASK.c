
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decFloat ;
typedef int decContext ;
typedef scalar_t__ Int ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int * FUNC_2 (int *,int const*) ;
 int * FUNC_3 (int *,int const*,int const*,int *) ;
 scalar_t__ FUNC_4 (int const*,int const*,int) ;

decFloat * FUNC_5(decFloat *VAR_0,
                       const decFloat *VAR_1, const decFloat *VAR_2,
                       decContext *VAR_3) {
  Int VAR_4;
  if (FUNC_0(VAR_1)) {

    if (FUNC_0(VAR_2) || FUNC_1(VAR_1)) return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    return FUNC_2(VAR_0, VAR_2);
    }
  if (FUNC_0(VAR_2)) {

    if (FUNC_1(VAR_2)) return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
    return FUNC_2(VAR_0, VAR_1);
    }


  VAR_4=FUNC_4(VAR_1, VAR_2, 1);
  if (VAR_4>=0) return FUNC_2(VAR_0, VAR_1);
  return FUNC_2(VAR_0, VAR_2);
  }
