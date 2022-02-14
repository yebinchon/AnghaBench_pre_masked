
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int off_t ;


 int VAR_0 ;
 char* FUNC_0 (char*,size_t) ;
 int FUNC_1 (char) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;

char *
FUNC_2(char *VAR_4, int VAR_5)
{
    char VAR_6[VAR_0], VAR_7;
    char *VAR_8, *VAR_9;
    int VAR_10 = VAR_5;


    VAR_8 = VAR_6;

    while (*VAR_4 && VAR_8 - VAR_6 < (off_t)(sizeof(VAR_6) - 2 - VAR_10)) {
 VAR_7 = *VAR_4++;
 if (VAR_7 == '^') {
     VAR_7 = *VAR_4++;
     if (VAR_7 == '\0') {
  *VAR_8++ = '^';
  break;
     }
     VAR_7 &= 0x1F;
     if (VAR_7 != 0) {
  *VAR_8++ = VAR_7;
     }
     continue;
 }

 if (VAR_7 != '\\') {
     *VAR_8++ = VAR_7;
     continue;
 }

 VAR_7 = *VAR_4++;
 if (VAR_7 == '\0') {
     if (VAR_5) {
  *VAR_8++ = '\\';
  *VAR_8++ = '\\';
     }
     break;
 }

 switch (VAR_7) {
 case 'b':
     *VAR_8++ = '\b';
     break;

 case 'c':
     if (VAR_5 && *VAR_4 == '\0')
  VAR_10 = 0;
     else
  *VAR_8++ = VAR_7;
     break;

 case '\\':
 case 'K':
 case 'p':
 case 'd':
     if (VAR_5)
  *VAR_8++ = '\\';

     *VAR_8++ = VAR_7;
     break;

 case 'T':
     if (VAR_5 && VAR_1) {
  for ( VAR_9 = VAR_1; *VAR_9 != '\0'; VAR_9++)
      *VAR_8++ = *VAR_9;
     }
     else {
  *VAR_8++ = '\\';
  *VAR_8++ = 'T';
     }
     break;

 case 'U':
     if (VAR_5 && VAR_2) {
  for ( VAR_9 = VAR_2; *VAR_9 != '\0'; VAR_9++)
      *VAR_8++ = *VAR_9;
     }
     else {
  *VAR_8++ = '\\';
  *VAR_8++ = 'U';
     }
     break;

 case 'q':
     VAR_3 = 1;
     break;

 case 'r':
     *VAR_8++ = '\r';
     break;

 case 'n':
     *VAR_8++ = '\n';
     break;

 case 's':
     *VAR_8++ = ' ';
     break;

 case 't':
     *VAR_8++ = '\t';
     break;

 case 'N':
     if (VAR_5) {
  *VAR_8++ = '\\';
  *VAR_8++ = '\0';
     }
     else
  *VAR_8++ = 'N';
     break;

 default:
     if ((((VAR_7) >= '0') && ((VAR_7) <= '7'))) {
  VAR_7 &= 0x07;
  if ((((*VAR_4) >= '0') && ((*VAR_4) <= '7'))) {
      VAR_7 <<= 3;
      VAR_7 |= *VAR_4++ - '0';
      if ((((*VAR_4) >= '0') && ((*VAR_4) <= '7'))) {
   VAR_7 <<= 3;
   VAR_7 |= *VAR_4++ - '0';
      }
  }

  if (VAR_7 != 0 || VAR_5) {
      if (VAR_5 && (VAR_7 == '\\' || VAR_7 == 0))
   *VAR_8++ = '\\';
      *VAR_8++ = VAR_7;
  }
  break;
     }

     if (VAR_5)
  *VAR_8++ = '\\';
     *VAR_8++ = VAR_7;
     break;
 }
    }

    if (VAR_10)
 *VAR_8++ = '\r';

    *VAR_8++ = '\0';
    *VAR_8++ = '\0';
    return FUNC_0 (VAR_6, (size_t) (VAR_8 - VAR_6));
}
