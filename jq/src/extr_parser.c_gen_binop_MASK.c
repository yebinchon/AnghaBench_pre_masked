
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block ;


 int FUNC_0 (int ,int ) ;




 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static block FUNC_6(block VAR_0, block VAR_1, int VAR_2) {
  block VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
  if (!FUNC_2(VAR_3))
    return VAR_3;

  const char* VAR_4 = 0;
  switch (VAR_2) {
  case '+': VAR_4 = "_plus"; break;
  case '-': VAR_4 = "_minus"; break;
  case '*': VAR_4 = "_multiply"; break;
  case '/': VAR_4 = "_divide"; break;
  case '%': VAR_4 = "_mod"; break;
  case 131: VAR_4 = "_equal"; break;
  case 128: VAR_4 = "_notequal"; break;
  case '<': VAR_4 = "_less"; break;
  case '>': VAR_4 = "_greater"; break;
  case 129: VAR_4 = "_lesseq"; break;
  case 130: VAR_4 = "_greatereq"; break;
  }
  FUNC_1(VAR_4);

  return FUNC_4(VAR_4, FUNC_0(FUNC_5(VAR_0), FUNC_5(VAR_1)));
}
