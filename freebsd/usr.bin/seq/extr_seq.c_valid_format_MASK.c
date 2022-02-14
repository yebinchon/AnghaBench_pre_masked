
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 unsigned VAR_1 = 0;

 while (*VAR_0 != '\0') {

  if (*VAR_0 != '%') {
   VAR_0++;
   continue;
  }
  VAR_0++;


  if (*VAR_0 == '%') {
   VAR_0++;
   continue;
  }


  while (*VAR_0 != '\0' && FUNC_0("#0- +'", *VAR_0)) {
   VAR_0++;
  }


  while (*VAR_0 != '\0' && FUNC_0("0123456789", *VAR_0)) {
   VAR_0++;
  }


  if (*VAR_0 == '.') {
   VAR_0++;
   while (*VAR_0 != '\0' && FUNC_0("0123456789", *VAR_0)) {
    VAR_0++;
   }
  }


  switch (*VAR_0) {
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'F':
      case 'f':
      case 'G':
      case 'g':

   VAR_1++;
   break;
      default:

   return 0;
  }
 }


 return (VAR_1 == 1);
}
