
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yyscan_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_4, int VAR_5, yyscan_t VAR_6) {
  int VAR_7 = 0;
  switch (VAR_4) {
  case '(': VAR_7 = VAR_2; break;
  case '[': VAR_7 = VAR_1; break;
  case '{': VAR_7 = VAR_0; break;
  case 128: VAR_7 = VAR_3; break;
  }
  FUNC_0(VAR_7);
  FUNC_1(VAR_7, VAR_6);
  return VAR_4;
}
