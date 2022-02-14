
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 (unsigned char) ;

int
FUNC_4(char *VAR_0, char *VAR_1)
{

 while (*VAR_0 != '\0' && *VAR_1 != '\0')
  switch (*VAR_1++) {
  case 'a':
   if (!FUNC_1((unsigned char)*VAR_0++))
    return (0);
   break;
  case 'A':
   if (!FUNC_3((unsigned char)*VAR_0++))
    return (0);
   break;
  case ' ':
   if (*VAR_0++ != ' ')
    return (0);
   break;
  case '0':
   if (!FUNC_0((unsigned char)*VAR_0++))
    return (0);
   break;
  case 'O':
   if (*VAR_0 != ' ' && !FUNC_0((unsigned char)*VAR_0))
    return (0);
   VAR_0++;
   break;
  case 'p':
   if (!FUNC_2((unsigned char)*VAR_0++))
    return (0);
   break;
  case 'P':
   if (*VAR_0 != ' ' && !FUNC_2((unsigned char)*VAR_0))
    return (0);
   VAR_0++;
   break;
  case ':':
   if (*VAR_0++ != ':')
    return (0);
   break;
  case 'N':
   if (*VAR_0++ != '\n')
    return (0);
   break;
  }
 if (*VAR_0 != '\0' || *VAR_1 != '\0')
  return (0);
 return (1);
}
