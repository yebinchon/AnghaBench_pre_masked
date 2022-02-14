
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 void* FUNC_0 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int,char**,char*) ;
 char* VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_2 (int ) ;
 int VAR_25 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (char*,int *) ;
 char* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (unsigned char) ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 char* FUNC_7 (int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ VAR_43 ;
 int * VAR_44 ;
 int VAR_45 ;
 int FUNC_9 (int ) ;
 int VAR_46 ;
 int * FUNC_10 () ;

int
FUNC_11(int VAR_47, char *VAR_48[])
{
 int VAR_49;
 int VAR_50;
 int VAR_51 = 0;
 int VAR_52 = 0;
 int VAR_53 = 0;
 int VAR_54 = 0;
 char *VAR_55 = ((void*)0);

 if (FUNC_5(FUNC_2(VAR_45))) {



  if ((VAR_24 = FUNC_10()) == ((void*)0)) {
         VAR_24 = VAR_44;
         (void)FUNC_4("Cannot defer diagnostic messages\n",VAR_44);
         return(1);
  }
 } else
  VAR_24 = VAR_44;
 while ((VAR_49 = FUNC_1(VAR_47, VAR_48, "#adFfmrte?h:i?L:l:n?o:ps?w:")) != -1) {
  switch (VAR_49) {
  case '+':
   if ((VAR_40 = FUNC_0(VAR_22)) < 1) {
       (void)FUNC_4("pr: +page number must be 1 or more\n",
    VAR_24);
       return(1);
   }
   break;
  case '-':
   if ((VAR_19 = FUNC_0(VAR_22)) < 1) {
       (void)FUNC_4("pr: -columns must be 1 or more\n",VAR_24);
       return(1);
   }
   if (VAR_19 > 1)
    ++VAR_54;
   break;
  case 'a':
   ++VAR_17;
   break;
  case 'd':
   ++VAR_21;
   break;
  case 'e':
   ++VAR_51;
   if ((VAR_22 != ((void*)0)) && !FUNC_6((unsigned char)*VAR_22))
    VAR_27 = *VAR_22++;
   else
    VAR_27 = VAR_3;
   if ((VAR_22 != ((void*)0)) && FUNC_6((unsigned char)*VAR_22)) {
    if ((VAR_28 = FUNC_0(VAR_22)) < 0) {
     (void)FUNC_4(
     "pr: -e gap must be 0 or more\n", VAR_24);
     return(1);
    }
    if (VAR_28 == 0)
     VAR_28 = VAR_4;
   } else if ((VAR_22 != ((void*)0)) && (*VAR_22 != '\0')) {
    (void)FUNC_3(VAR_24,
          "pr: invalid value for -e %s\n", VAR_22);
    return(1);
   } else
    VAR_28 = VAR_4;
   break;
  case 'f':
   ++VAR_39;

  case 'F':
   ++VAR_25;
   break;
  case 'h':
   VAR_26 = VAR_22;
   break;
  case 'i':
   ++VAR_52;
   if ((VAR_22 != ((void*)0)) && !FUNC_6((unsigned char)*VAR_22))
    VAR_35 = *VAR_22++;
   else
    VAR_35 = VAR_9;
   if ((VAR_22 != ((void*)0)) && FUNC_6((unsigned char)*VAR_22)) {
    if ((VAR_37 = FUNC_0(VAR_22)) < 0) {
     (void)FUNC_4(
     "pr: -i gap must be 0 or more\n", VAR_24);
     return(1);
    }
    if (VAR_37 == 0)
     VAR_37 = VAR_10;
   } else if ((VAR_22 != ((void*)0)) && (*VAR_22 != '\0')) {
    (void)FUNC_3(VAR_24,
          "pr: invalid value for -i %s\n", VAR_22);
    return(1);
   } else
    VAR_37 = VAR_10;
   break;
  case 'L':
   VAR_55 = VAR_22;
   break;
  case 'l':
   if (!FUNC_6((unsigned char)*VAR_22) || ((VAR_29=FUNC_0(VAR_22)) < 1)) {
    (void)FUNC_4(
     "pr: number of lines must be 1 or more\n",VAR_24);
    return(1);
   }
   break;
  case 'm':
   ++VAR_30;
   break;
  case 'n':
   if ((VAR_22 != ((void*)0)) && !FUNC_6((unsigned char)*VAR_22))
    VAR_31 = *VAR_22++;
   else
    VAR_31 = VAR_7;
   if ((VAR_22 != ((void*)0)) && FUNC_6((unsigned char)*VAR_22)) {
    if ((VAR_32 = FUNC_0(VAR_22)) < 1) {
     (void)FUNC_4(
     "pr: -n width must be 1 or more\n",VAR_24);
     return(1);
    }
   } else if ((VAR_22 != ((void*)0)) && (*VAR_22 != '\0')) {
    (void)FUNC_3(VAR_24,
          "pr: invalid value for -n %s\n", VAR_22);
    return(1);
   } else
    VAR_32 = VAR_8;
   break;
  case 'o':
   if (!FUNC_6((unsigned char)*VAR_22) || ((VAR_36 = FUNC_0(VAR_22))< 1)){
    (void)FUNC_4("pr: -o offset must be 1 or more\n",
     VAR_24);
    return(1);
   }
   break;
  case 'p':
   ++VAR_38;
   break;
  case 'r':
   ++VAR_33;
   break;
  case 's':
   ++VAR_43;
   if (VAR_22 == ((void*)0))
    VAR_42 = VAR_12;
   else {
    VAR_42 = *VAR_22++;
    if (*VAR_22 != '\0') {
     (void)FUNC_3(VAR_24,
         "pr: invalid value for -s %s\n",
         VAR_22);
     return(1);
    }
   }
   break;
  case 't':
   ++VAR_34;
   break;
  case 'w':
   ++VAR_53;
   if ((VAR_22 == ((void*)0) ) ||
       !FUNC_6((unsigned char)*VAR_22) ||
       ((VAR_41 = FUNC_0(VAR_22)) < 1)){
    (void)FUNC_4(
       "pr: -w width must be 1 or more \n",VAR_24);
    return(1);
   }
   break;
  case '?':
  default:
   return(1);
  }
 }




 if (!VAR_19) {
  if (VAR_30) {
   if ((VAR_19 = VAR_47 - VAR_23) <= 1) {
    VAR_19 = VAR_0;
    VAR_30 = 0;
   }
  } else
   VAR_19 = VAR_0;
 }
 if (VAR_17) {
  if (VAR_19 == 1) {
   (void)FUNC_4("pr: -a flag requires multiple columns\n",
    VAR_24);
   return(1);
  }
  if (VAR_30) {
   (void)FUNC_4("pr: -m cannot be used with -a\n", VAR_24);
   return(1);
  }
 }
 if (!VAR_53) {
  if (VAR_43)
   VAR_41 = VAR_13;
  else
   VAR_41 = VAR_11;
 }
 if (VAR_54 || VAR_30) {
  if (!VAR_51) {
   VAR_27 = VAR_3;
   VAR_28 = VAR_4;
  }
  if (!VAR_52) {
   VAR_35 = VAR_9;
   VAR_37 = VAR_10;
  }
 }
 if (VAR_54) {
  if (VAR_30) {
   (void)FUNC_4(
     "pr: -m cannot be used with multiple columns\n", VAR_24);
   return(1);
  }
  if (VAR_32) {
   VAR_20 = (VAR_41 + 1 - (VAR_19 * (VAR_32 + 2)))/VAR_19;
   VAR_41 = ((VAR_20 + VAR_32 + 2) * VAR_19) - 1;
  } else {
   VAR_20 = (VAR_41 + 1 - VAR_19)/VAR_19;
   VAR_41 = ((VAR_20 + 1) * VAR_19) - 1;
  }
  if (VAR_20 < 1) {
   (void)FUNC_3(VAR_24,
     "pr: page width is too small for %d columns\n",VAR_19);
   return(1);
  }
 }
 if (!VAR_29)
  VAR_29 = VAR_6;




 if (VAR_29 <= VAR_2 + VAR_14)
  ++VAR_34;
 else if (!VAR_34)
  VAR_29 -= VAR_2 + VAR_14;




 if (VAR_21) {
  if (VAR_29 == 1)
   VAR_21 = 0;
  else {
   if (VAR_29 & 1)
    ++VAR_18;
   VAR_29 /= 2;
  }
 }

 (void) FUNC_8(VAR_5, (VAR_55 != ((void*)0)) ? VAR_55 : "");

 VAR_50 = (*FUNC_7(VAR_1) == 'd');
 VAR_46 = FUNC_9(VAR_50 ? VAR_15 : VAR_16);

 return(0);
}
