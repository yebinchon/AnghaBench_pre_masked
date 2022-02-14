
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(const char *VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
  const char *VAR_7;

  switch (*VAR_4) {
    case 'A':
    case 'a':
      VAR_7 = "accept";
      *VAR_5 = VAR_3;
      *VAR_6 = VAR_0;
      break;
    case 'D':
    case 'd':
      switch (VAR_4[1]) {
        case 'E':
        case 'e':
          VAR_7 = "deny";
          *VAR_5 = VAR_3;
          *VAR_6 = 0;
          break;
        case 'I':
        case 'i':
          VAR_7 = "disable";
          *VAR_5 = VAR_2;
          *VAR_6 = 0;
          break;
        default:
          return ((void*)0);
      }
      break;
    case 'E':
    case 'e':
      VAR_7 = "enable";
      *VAR_5 = VAR_2;
      *VAR_6 = VAR_1;
      break;
    default:
      return ((void*)0);
  }

  return VAR_7;
}
