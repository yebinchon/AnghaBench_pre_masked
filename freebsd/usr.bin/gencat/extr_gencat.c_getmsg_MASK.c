
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,char) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 (unsigned char) ;
 long FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__* FUNC_7 (char*) ;
 char* FUNC_8 (long) ;
 char* FUNC_9 (char*,long) ;

__attribute__((used)) static char *
FUNC_10(int VAR_0, char *VAR_1, char VAR_2)
{
 static char *VAR_3 = ((void*)0);
 static long VAR_4 = 0;
 long VAR_5, VAR_6;
 char *VAR_7;

 if (VAR_2 && *VAR_1 == VAR_2) {
  ++VAR_1;
 }

 VAR_5 = FUNC_5(VAR_1) + 1;
 if (VAR_5 > VAR_4) {
  if (VAR_4)
   VAR_3 = FUNC_9(VAR_3, VAR_5);
  else
   VAR_3 = FUNC_8(VAR_5);
  VAR_4 = VAR_5;
 }
 VAR_7 = VAR_3;

 while (*VAR_1) {
  if (VAR_2 && *VAR_1 == VAR_2) {
   char *VAR_8;
   VAR_8 = VAR_1 + 1;
   if (*VAR_8 && (!FUNC_4((unsigned char) *VAR_8) || *FUNC_7(VAR_8))) {
    FUNC_6(VAR_1, "unexpected quote character, ignoring");
    *VAR_7++ = *VAR_1++;
   } else {
    *VAR_1 = '\0';
   }
  } else
   if (*VAR_1 == '\\') {
    ++VAR_1;
    switch (*VAR_1) {
    case '\0':
     VAR_1 = FUNC_2(VAR_0);
     if (!VAR_1)
      FUNC_1("premature end of file");
     VAR_4 += FUNC_5(VAR_1);
     VAR_6 = VAR_7 - VAR_3;
     VAR_3 = FUNC_9(VAR_3, VAR_4);
     VAR_7 = VAR_3 + VAR_6;
     break;







    case 'n': *VAR_7++ = '\n'; ++VAR_1; break;;
    case 't': *VAR_7++ = '\t'; ++VAR_1; break;;
    case 'v': *VAR_7++ = '\v'; ++VAR_1; break;;
    case 'b': *VAR_7++ = '\b'; ++VAR_1; break;;
    case 'r': *VAR_7++ = '\r'; ++VAR_1; break;;
    case 'f': *VAR_7++ = '\f'; ++VAR_1; break;;
    case '"': *VAR_7++ = '"'; ++VAR_1; break;;
    case '\\': *VAR_7++ = '\\'; ++VAR_1; break;;

    default:
     if (VAR_2 && *VAR_1 == VAR_2) {
      *VAR_7++ = *VAR_1++;
     } else if (FUNC_3((unsigned char) *VAR_1)) {
      *VAR_7 = 0;
      for (VAR_6 = 0; VAR_6 < 3; ++VAR_6) {
       if (!FUNC_3((unsigned char) *VAR_1))
        break;
       if (*VAR_1 > '7')
        FUNC_6(VAR_1, "octal number greater than 7?!");
       *VAR_7 *= 8;
       *VAR_7 += (*VAR_1 - '0');
       ++VAR_1;
      }
     } else {
      FUNC_6(VAR_1, "unrecognized escape sequence");
     }
     break;
    }
   } else {
    *VAR_7++ = *VAR_1++;
   }
 }
 *VAR_7 = '\0';
 return (VAR_3);
}
