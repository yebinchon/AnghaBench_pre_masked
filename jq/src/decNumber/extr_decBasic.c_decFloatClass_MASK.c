
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum decClass { ____Placeholder_decClass } decClass ;
typedef int decFloat ;
typedef scalar_t__ Int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;

enum decClass FUNC_7(const decFloat *VAR_11) {
  Int VAR_12;
  if (FUNC_3(VAR_11)) {
    if (FUNC_0(VAR_11)) return VAR_9;
    if (FUNC_2(VAR_11)) return VAR_10;

    if (FUNC_1(VAR_11)) return VAR_1;
    return VAR_5;
    }
  if (FUNC_4(VAR_11)) {
    if (FUNC_1(VAR_11)) return VAR_4;
    return VAR_8;
    }


  VAR_12=FUNC_5(VAR_11)
     +FUNC_6(VAR_11)-1;
  if (VAR_12>=VAR_0) {
    if (FUNC_1(VAR_11)) return VAR_2;
    return VAR_6;
    }

  if (FUNC_1(VAR_11)) return VAR_3;
  return VAR_7;
  }
