
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(char *VAR_0)
{
 char *VAR_1;


 for (VAR_1 = VAR_0;; VAR_0++, VAR_1++) {
  if (*VAR_0 == '\\') {
   VAR_0++;
   switch(*VAR_0) {
   case '\0':
    *VAR_1 = '\\';
    *++VAR_1 = '\0';
    return;
   case 'a':

    *VAR_1 = '\007';
    break;
   case 'b':
    *VAR_1 = '\b';
    break;
   case 'f':
    *VAR_1 = '\f';
    break;
   case 'n':
    *VAR_1 = '\n';
    break;
   case 'r':
    *VAR_1 = '\r';
    break;
   case 't':
    *VAR_1 = '\t';
    break;
   case 'v':
    *VAR_1 = '\v';
    break;
   default:
    *VAR_1 = *VAR_0;
    break;
   }
  } else {
   *VAR_1 = *VAR_0;
   if (*VAR_0 == '\0')
    return;
  }
 }
}
