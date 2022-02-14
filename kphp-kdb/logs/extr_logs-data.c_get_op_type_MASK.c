
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val_type ;
typedef int token_type ;


 scalar_t__ FUNC_0 (int ) ;





 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int* VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

inline val_type FUNC_1 (val_type VAR_11, token_type VAR_12) {
  switch (VAR_12) {
    case 138:
    case 136:
    case 139:
      if (VAR_11 != VAR_9 && VAR_11 != VAR_10) {
        return VAR_8;
      }
    case 133:
    case 135:
      return VAR_9;
    case 134:
      return VAR_10;
    case 137:
      return VAR_7;
    case 132:
      return VAR_6;
    default:
      break;
  }

  if (FUNC_0(VAR_11)) {
    if (VAR_3[VAR_12] == 129 || VAR_12 == VAR_2 || VAR_12 == VAR_0 || VAR_12 == VAR_4) {
      return VAR_9;
    }
    if (VAR_3[VAR_12] == VAR_5) {
      return VAR_6;
    }
    return VAR_8;
  }

  switch (VAR_3[VAR_12]) {
    case 131:
      if (VAR_12 == VAR_1 && VAR_11 == VAR_7) {
        return VAR_8;
      }
      return VAR_11;
    case 128:
      if (VAR_11 == VAR_7) {
        return VAR_8;
      }
      return VAR_9;
    case 130:
      if (VAR_11 == VAR_7) {
        return VAR_8;
      }
      return VAR_11;
    case 129:
      return VAR_9;
    default:
      return VAR_8;
  }
  return VAR_8;
}
