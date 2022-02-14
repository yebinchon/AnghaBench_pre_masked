
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 char const* VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 char const* VAR_3 ;

void
FUNC_4(const char *VAR_4[], int VAR_5)
{
 const char *VAR_6;
 const char *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = VAR_4[0];
 VAR_7 = VAR_6;
 while (*VAR_7)
  VAR_7++;
 VAR_7--;
 while (VAR_7 > VAR_6) {
  if (*(VAR_7 - 1) != VAR_0)
   FUNC_0(*VAR_7);
  else {
   switch (*VAR_7) {

   case '#':
    FUNC_1(VAR_5 - 2);
    break;
   case '0':
   case '1':
   case '2':
   case '3':
   case '4':
   case '5':
   case '6':
   case '7':
   case '8':
   case '9':
    if ((VAR_9 = *VAR_7 - '0') < VAR_5 - 1)
     FUNC_2(VAR_4[VAR_9 + 1]);
    break;
   case '*':
    if (VAR_5 > 2) {
     for (VAR_8 = VAR_5 - 1; VAR_8 > 2; VAR_8--) {
      FUNC_2(VAR_4[VAR_8]);
      FUNC_3(VAR_1);
     }
     FUNC_2(VAR_4[2]);
    }
    break;
                        case '@':
    if (VAR_5 > 2) {
     for (VAR_8 = VAR_5 - 1; VAR_8 > 2; VAR_8--) {
      FUNC_2(VAR_3);
      FUNC_2(VAR_4[VAR_8]);
      FUNC_2(VAR_2);
      FUNC_3(VAR_1);
     }
     FUNC_2(VAR_3);
     FUNC_2(VAR_4[2]);
     FUNC_2(VAR_2);
    }
                                break;
   default:
    FUNC_0(*VAR_7);
    FUNC_0('$');
    break;
   }
   VAR_7--;
  }
  VAR_7--;
 }
 if (VAR_7 == VAR_6)
  FUNC_0(*VAR_7);
}
