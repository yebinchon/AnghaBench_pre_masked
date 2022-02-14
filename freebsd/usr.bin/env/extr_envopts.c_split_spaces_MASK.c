
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char const,...) ;
 char* FUNC_1 (int,char**,char**,char const**) ;
 int FUNC_2 (int ,char*,char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 void* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (char const*) ;

void
FUNC_6(const char *VAR_2, int *VAR_3, int *VAR_4, char ***VAR_5)
{
 static const char *VAR_6 = "";
 const char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10, **VAR_11, *VAR_12, **VAR_13, **VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;






 while (FUNC_3(*VAR_2))
  VAR_2++;
 if (*VAR_2 == '\0')
  return;
 VAR_12 = FUNC_4(FUNC_5(VAR_2) + 1);






 VAR_11 = FUNC_4((*VAR_4 + (FUNC_5(VAR_2) / 2) + 2) * sizeof(char *));
 VAR_13 = VAR_11;
 *VAR_13++ = **VAR_5;


 VAR_15 = 0;
 VAR_16 = VAR_19 = VAR_20 = VAR_21 = 0;
 VAR_7 = ((void*)0);
 for (VAR_9 = VAR_2, VAR_10 = VAR_12; *VAR_9 != '\0'; VAR_9++) {






  VAR_17 = VAR_18 = 0;
  VAR_8 = ((void*)0);
  switch (*VAR_9) {
  case '"':
   if (VAR_21)
    VAR_17 = *VAR_9;
   else if (VAR_20)
    VAR_20 = 0;
   else {





    VAR_8 = VAR_6;
    VAR_20 = 1;
    VAR_16 = VAR_10 - *(VAR_13 - 1);
    VAR_7 = VAR_9;
   }
   break;
  case '$':
   if (VAR_21)
    VAR_17 = *VAR_9;
   else {
    VAR_8 = FUNC_1(VAR_19, (VAR_13 - 1),
        &VAR_10, &VAR_9);
   }
   break;
  case '\'':
   if (VAR_20)
    VAR_17 = *VAR_9;
   else if (VAR_21)
    VAR_21 = 0;
   else {





    VAR_8 = VAR_6;
    VAR_21 = 1;
    VAR_16 = VAR_10 - *(VAR_13 - 1);
    VAR_7 = VAR_9;
   }
   break;
  case '\\':
   if (VAR_21) {





    VAR_17 = *(VAR_9 + 1);
    if (VAR_17 == '\'' || VAR_17 == '\\')
     VAR_9++;
    else
     VAR_17 = *VAR_9;
    break;
   }
   VAR_9++;
   switch (*VAR_9) {
   case '"':
   case '#':
   case '$':
   case '\'':
   case '\\':
    VAR_17 = *VAR_9;
    break;
   case '_':





    if (VAR_20)
     VAR_17 = ' ';
    else {
     VAR_18 = 1;
     VAR_9++;
    }
    break;
   case 'c':





    if (VAR_20)
     FUNC_0(1, "Sequence '\\%c' is not allowed"
         " in quoted strings", *VAR_9);
    goto str_done;
   case 'f':
    VAR_17 = '\f';
    break;
   case 'n':
    VAR_17 = '\n';
    break;
   case 'r':
    VAR_17 = '\r';
    break;
   case 't':
    VAR_17 = '\t';
    break;
   case 'v':
    VAR_17 = '\v';
    break;
   default:
    if (FUNC_3(*VAR_9))
     VAR_17 = *VAR_9;
    else
     FUNC_0(1, "Invalid sequence '\\%c' in -S",
         *VAR_9);
   }
   break;
  default:
   if ((VAR_20 || VAR_21) && VAR_19)
    VAR_17 = *VAR_9;
   else if (FUNC_3(*VAR_9))
    VAR_18 = 1;
   else {




    if (!VAR_19 && *VAR_9 == '#')
     goto str_done;
    VAR_17 = *VAR_9;
   }
  }




  if (VAR_17 || VAR_8 != ((void*)0)) {
   if (!VAR_19) {

    *VAR_13++ = VAR_10;
    VAR_15++;
    VAR_19 = 1;
   }
   if (VAR_17)
    *VAR_10++ = (char)VAR_17;
   else if (VAR_8 != ((void*)0))
    while (*VAR_8 != '\0')
     *VAR_10++ = *VAR_8++;
  } else if (VAR_18) {
   *VAR_10++ = '\0';
   while (FUNC_3(*VAR_9))
    VAR_9++;
   --VAR_9;
   VAR_19 = 0;
  }
 }
str_done:
 *VAR_10 = '\0';
 *VAR_13 = ((void*)0);
 if (VAR_20 || VAR_21) {
  FUNC_0(1, "No terminating quote for string: %.*s%s",
      VAR_16, *(VAR_13 - 1), VAR_7);
 }
 if (VAR_0 > 1) {
  FUNC_2(VAR_1, "#env  split -S:\t'%s'\n", VAR_2);
  VAR_14 = VAR_11 + 1;
  FUNC_2(VAR_1, "#env      into:\t'%s'\n", *VAR_14);
  for (VAR_14++; *VAR_14; VAR_14++)
   FUNC_2(VAR_1, "#env          &\t'%s'\n", *VAR_14);
 }


 for (VAR_14 = *VAR_5 + *VAR_3; *VAR_14; VAR_14++)
  *VAR_13++ = *VAR_14;
 *VAR_13 = ((void*)0);


 *VAR_4 += VAR_15 - *VAR_3 + 1;
 *VAR_5 = VAR_11;
 *VAR_3 = 1;
}
