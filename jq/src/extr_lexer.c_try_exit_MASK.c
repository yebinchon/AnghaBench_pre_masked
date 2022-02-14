
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yyscan_t ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3, yyscan_t VAR_4) {
  char VAR_5 = 0;
  int VAR_6;
  switch (VAR_3) {
  case 129: VAR_5 = VAR_6 = ')'; break;
  case 130: VAR_5 = VAR_6 = ']'; break;
  case 131: VAR_5 = VAR_6 = '}'; break;

  case 128:
    VAR_5 = ')';
    VAR_6 = VAR_1;
    break;

  default:

    return VAR_0;
  }
  FUNC_0(VAR_5);
  if (VAR_5 == VAR_2) {
    FUNC_1(VAR_4);
    return VAR_6;
  } else {

    return VAR_0;
  }
}
