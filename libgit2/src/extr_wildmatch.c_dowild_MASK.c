
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar ;


 int FUNC_0 (char const*,int,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char) ;
 int FUNC_9 (char) ;
 int FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;
 int FUNC_12 (char) ;
 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_13 (char const) ;
 char* FUNC_14 (char*,char) ;
 char FUNC_15 (char) ;
 char FUNC_16 (char) ;

__attribute__((used)) static int FUNC_17(const uchar *VAR_8, const uchar *VAR_9, unsigned int VAR_10)
{
 uchar VAR_11;
 const uchar *VAR_12 = VAR_8;

 for ( ; (VAR_11 = *VAR_8) != '\0'; VAR_9++, VAR_8++) {
  int VAR_13, VAR_14, VAR_15;
  uchar VAR_16, VAR_17;
  if ((VAR_16 = *VAR_9) == '\0' && VAR_11 != '*')
   return VAR_2;
  if ((VAR_10 & VAR_4) && FUNC_11(VAR_16))
   VAR_16 = FUNC_15(VAR_16);
  if ((VAR_10 & VAR_4) && FUNC_11(VAR_11))
   VAR_11 = FUNC_15(VAR_11);
  switch (VAR_11) {
  case '\\':


   VAR_11 = *++VAR_8;

  default:
   if (VAR_16 != VAR_11)
    return VAR_6;
   continue;
  case '?':

   if ((VAR_10 & VAR_7) && VAR_16 == '/')
    return VAR_6;
   continue;
  case '*':
   if (*++VAR_8 == '*') {
    const uchar *VAR_18 = VAR_8 - 2;
    while (*++VAR_8 == '*') {}
    if (!(VAR_10 & VAR_7))

     VAR_14 = 1;
    else if ((VAR_18 < VAR_12 || *VAR_18 == '/') &&
        (*VAR_8 == '\0' || *VAR_8 == '/' ||
         (VAR_8[0] == '\\' && VAR_8[1] == '/'))) {
     if (VAR_8[0] == '/' &&
         FUNC_17(VAR_8 + 1, VAR_9, VAR_10) == VAR_5)
      return VAR_5;
     VAR_14 = 1;
    } else
     VAR_14 = 0;
   } else

    VAR_14 = VAR_10 & VAR_7 ? 0 : 1;
   if (*VAR_8 == '\0') {


    if (!VAR_14) {
     if (FUNC_14((char*)VAR_9, '/') != ((void*)0))
      return VAR_6;
    }
    return VAR_5;
   } else if (!VAR_14 && *VAR_8 == '/') {





    const char *VAR_19 = FUNC_14((char*)VAR_9, '/');
    if (!VAR_19)
     return VAR_6;
    VAR_9 = (const uchar*)VAR_19;

    break;
   }
   while (1) {
    if (VAR_16 == '\0')
     break;
    if (!FUNC_13(*VAR_8)) {
     VAR_11 = *VAR_8;
     if ((VAR_10 & VAR_4) && FUNC_11(VAR_11))
      VAR_11 = FUNC_15(VAR_11);
     while ((VAR_16 = *VAR_9) != '\0' &&
            (VAR_14 || VAR_16 != '/')) {
      if ((VAR_10 & VAR_4) && FUNC_11(VAR_16))
       VAR_16 = FUNC_15(VAR_16);
      if (VAR_16 == VAR_11)
       break;
      VAR_9++;
     }
     if (VAR_16 != VAR_11)
      return VAR_6;
    }
    if ((VAR_13 = FUNC_17(VAR_8, VAR_9, VAR_10)) != VAR_6) {
     if (!VAR_14 || VAR_13 != VAR_3)
      return VAR_13;
    } else if (!VAR_14 && VAR_16 == '/')
     return VAR_3;
    VAR_16 = *++VAR_9;
   }
   return VAR_2;
  case '[':
   VAR_11 = *++VAR_8;





   VAR_15 = VAR_11 == VAR_0 ? 1 : 0;
   if (VAR_15) {

    VAR_11 = *++VAR_8;
   }
   VAR_17 = 0;
   VAR_13 = 0;
   do {
    if (!VAR_11)
     return VAR_2;
    if (VAR_11 == '\\') {
     VAR_11 = *++VAR_8;
     if (!VAR_11)
      return VAR_2;
     if (VAR_16 == VAR_11)
      VAR_13 = 1;
    } else if (VAR_11 == '-' && VAR_17 && VAR_8[1] && VAR_8[1] != ']') {
     VAR_11 = *++VAR_8;
     if (VAR_11 == '\\') {
      VAR_11 = *++VAR_8;
      if (!VAR_11)
       return VAR_2;
     }
     if (VAR_16 <= VAR_11 && VAR_16 >= VAR_17)
      VAR_13 = 1;
     else if ((VAR_10 & VAR_4) && FUNC_7(VAR_16)) {
      uchar VAR_20 = FUNC_16(VAR_16);
      if (VAR_20 <= VAR_11 && VAR_20 >= VAR_17)
       VAR_13 = 1;
     }
     VAR_11 = 0;
    } else if (VAR_11 == '[' && VAR_8[1] == ':') {
     const uchar *VAR_21;
     int VAR_22;
     for (VAR_21 = VAR_8 += 2; (VAR_11 = *VAR_8) && VAR_11 != ']'; VAR_8++) {}
     if (!VAR_11)
      return VAR_2;
     VAR_22 = (int)(VAR_8 - VAR_21 - 1);
     if (VAR_22 < 0 || VAR_8[-1] != ':') {

      VAR_8 = VAR_21 - 2;
      VAR_11 = '[';
      if (VAR_16 == VAR_11)
       VAR_13 = 1;
      continue;
     }
     if (FUNC_0(VAR_21,VAR_22, "alnum")) {
      if (FUNC_1(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "alpha")) {
      if (FUNC_2(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "blank")) {
      if (FUNC_3(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "cntrl")) {
      if (FUNC_4(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "digit")) {
      if (FUNC_5(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "graph")) {
      if (FUNC_6(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "lower")) {
      if (FUNC_7(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "print")) {
      if (FUNC_8(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "punct")) {
      if (FUNC_9(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "space")) {
      if (FUNC_10(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "upper")) {
      if (FUNC_11(VAR_16))
       VAR_13 = 1;
      else if ((VAR_10 & VAR_4) && FUNC_7(VAR_16))
       VAR_13 = 1;
     } else if (FUNC_0(VAR_21,VAR_22, "xdigit")) {
      if (FUNC_12(VAR_16))
       VAR_13 = 1;
     } else
      return VAR_2;
     VAR_11 = 0;
    } else if (VAR_16 == VAR_11)
     VAR_13 = 1;
   } while (VAR_17 = VAR_11, (VAR_11 = *++VAR_8) != ']');
   if (VAR_13 == VAR_15 ||
       ((VAR_10 & VAR_7) && VAR_16 == '/'))
    return VAR_6;
   continue;
  }
 }

 return *VAR_9 ? VAR_6 : VAR_5;
}
