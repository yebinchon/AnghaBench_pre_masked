
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_8, const char *VAR_9)
{
  int VAR_10 = 0;
  const char *VAR_11 = VAR_9;

  switch (*VAR_11++) {
    case 'r':
      VAR_10 |= VAR_4;
      break;
    case 'w':
      VAR_10 |= VAR_7 | VAR_3 | VAR_6;
      break;
    case 'a':
      VAR_10 |= VAR_7 | VAR_1 | VAR_3;
      break;
    default:
      FUNC_0(VAR_8, VAR_0, "illegal access mode %S", FUNC_1(VAR_8, VAR_9));
  }

  while (*VAR_11) {
    switch (*VAR_11++) {
      case 'b':
        VAR_10 |= VAR_2;
        break;
      case '+':
        VAR_10 |= VAR_5;
        break;
      case ':':

      default:
        FUNC_0(VAR_8, VAR_0, "illegal access mode %S", FUNC_1(VAR_8, VAR_9));
    }
  }

  return VAR_10;
}
