
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 unsigned long long FUNC_1 (char const*,char**,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static unsigned long long
FUNC_4(const char *VAR_4)
{

 if (VAR_4 == ((void*)0))
  return (VAR_1);
 else {
  char *VAR_5;
  unsigned long long VAR_6;

  VAR_5 = ((void*)0);
  VAR_2 = 0;
  VAR_6 = FUNC_1(VAR_4, &VAR_5, 10);

  if (VAR_2 != 0) {
   FUNC_2("%s",FUNC_0(4));
   VAR_6 = VAR_1;
  } else {
   switch (*VAR_5){
   case 'Y':
    VAR_6 *= 1024;

   case 'Z':
    VAR_6 *= 1024;

   case 'E':
    VAR_6 *= 1024;

   case 'P':
    VAR_6 *= 1024;

   case 'T':
    VAR_6 *= 1024;

   case 'G':
    VAR_6 *= 1024;

   case 'M':
    VAR_6 *= 1024;

   case '\0':
   case 'K':
    VAR_6 *= 1024;

   case 'b':
    break;
   case '%':
    VAR_6 = (VAR_1 * VAR_6) /
        100;
    break;
   default:
    FUNC_3(VAR_0, "%s", VAR_3);
    VAR_6 = VAR_1;
   }
  }
  return (VAR_6);
 }
}
