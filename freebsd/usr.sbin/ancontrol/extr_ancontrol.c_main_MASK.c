
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;

 int VAR_16 ;

 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,void*) ;
 int FUNC_8 (char const*,void*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int,void*) ;
 int FUNC_11 (char const*,int,void*) ;
 int FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (char const*,int,void*) ;
 int FUNC_14 (char const*,int,void*) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int,char**,char*) ;
 int FUNC_20 (char) ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_21 (char*) ;

int
FUNC_22(int VAR_21, char *VAR_22[])
{
 int VAR_23;
 int VAR_24 = 0;
 const char *VAR_25 = ((void*)0);
 int VAR_26 = 0;
 char *VAR_27 = ((void*)0);
 void *VAR_28 = ((void*)0);
 char *VAR_29 = VAR_22[0];


 VAR_18 = 0;
 VAR_23 = FUNC_19(VAR_21, VAR_22, "i:");
 if (VAR_23 == 'i') {
  VAR_25 = VAR_17;
 } else {
  if (VAR_21 > 1 && *VAR_22[1] != '-') {
   VAR_25 = VAR_22[1];
   VAR_19 = 2;
  } else {
   VAR_25 = "an0";
   VAR_19 = 1;
  }
  VAR_20 = 1;
 }
 VAR_18 = 1;

 while ((VAR_23 = FUNC_19(VAR_21, VAR_22,
     "ANISCTRht:a:e:o:s:n:v:d:j:b:c:f:r:p:w:m:l:k:K:W:QZM:L:")) != -1) {
  switch(VAR_23) {
  case 'Z':



   FUNC_17(1, "ANCACHE not available");

   break;
  case 'Q':



   FUNC_17(1, "ANCACHE not available");

   break;
  case 'A':
   VAR_24 = 145;
   break;
  case 'N':
   VAR_24 = 140;
   break;
  case 'S':
   VAR_24 = 138;
   break;
  case 'I':
   VAR_24 = 143;
   break;
  case 'T':
   VAR_24 = 139;
   break;
  case 'C':
   VAR_24 = 142;
   break;
  case 'R':
   VAR_24 = 141;
   break;
  case 't':
   VAR_24 = 129;
   VAR_28 = VAR_17;
   break;
  case 's':
   VAR_24 = VAR_12;
   VAR_28 = VAR_17;
   break;
  case 'p':
   VAR_24 = VAR_15;
   VAR_28 = VAR_17;
   break;
  case 'v':
   VAR_26 = FUNC_16(VAR_17);
   break;
  case 'a':
   switch(VAR_26) {
   case 0:
   case 1:
    VAR_24 = 136;
    break;
   case 2:
    VAR_24 = 135;
    break;
   case 3:
    VAR_24 = 134;
    break;
   case 4:
    VAR_24 = 133;
    break;
   default:
    FUNC_17(1, "bad modifier %d: there "
        "are only 4 access point settings",
        VAR_26);
    FUNC_21(VAR_29);
    break;
   }
   VAR_28 = VAR_17;
   break;
  case 'b':
   VAR_24 = VAR_1;
   VAR_28 = VAR_17;
   break;
  case 'd':
   switch(VAR_26) {
   case 0:
    VAR_24 = VAR_2;
    break;
   case 1:
    VAR_24 = VAR_3;
    break;
   default:
    FUNC_17(1, "must specify RX or TX diversity");
    break;
   }
   if (!FUNC_20(*VAR_17)) {
    FUNC_17(1, "%s is not numeric", VAR_17);
    FUNC_18(1);
   }
   VAR_28 = VAR_17;
   break;
  case 'j':
   VAR_24 = VAR_10;
   VAR_28 = VAR_17;
   break;
  case 'l':
   VAR_24 = VAR_9;
   VAR_28 = VAR_17;
   break;
  case 'm':
   VAR_24 = VAR_7;
   VAR_28 = VAR_17;
   break;
  case 'n':
   if (VAR_26 == 0)
    VAR_26 = 1;
   VAR_24 = 130;
   VAR_28 = VAR_17;
   break;
  case 'o':
   VAR_24 = VAR_11;
   VAR_28 = VAR_17;
   break;
  case 'c':
   VAR_24 = VAR_5;
   VAR_28 = VAR_17;
   break;
  case 'f':
   VAR_24 = VAR_4;
   VAR_28 = VAR_17;
   break;
  case 'W':
   VAR_24 = VAR_0;
   VAR_28 = VAR_17;
   break;
  case 'K':
   VAR_24 = VAR_6;
   VAR_28 = VAR_17;
   break;
  case 'k':
   VAR_24 = 132;
   VAR_27 = VAR_17;
   break;
  case 'e':
   VAR_24 = 137;
   VAR_28 = VAR_17;
   break;
  case 'q':
   VAR_24 = VAR_13;
   VAR_28 = VAR_17;
   break;
  case 'r':
   VAR_24 = VAR_14;
   VAR_28 = VAR_17;
   break;
  case 'w':
   VAR_24 = VAR_16;
   VAR_28 = VAR_17;
   break;
  case 'M':
   VAR_24 = VAR_8;
   VAR_28 = VAR_17;
   break;
  case 'L':
   VAR_24 = 131;
   VAR_28 = VAR_17;
   break;
  case 'h':
  default:
   FUNC_21(VAR_29);
  }
 }

 if (VAR_25 == ((void*)0) || (!VAR_24 && !VAR_27))
  FUNC_21(VAR_29);

 switch(VAR_24) {
 case 138:
  FUNC_6(VAR_25);
  break;
 case 143:
  FUNC_1(VAR_25);
  break;
 case 139:
  FUNC_5(VAR_25);
  break;
 case 142:
  FUNC_2(VAR_25);
  break;
 case 140:
  FUNC_4(VAR_25);
  break;
 case 145:
  FUNC_0(VAR_25);
  break;
 case 141:
  FUNC_3(VAR_25);
  break;
 case 130:
  FUNC_14(VAR_25, VAR_26, VAR_28);
  break;
 case 136:
 case 135:
 case 134:
 case 133:
  FUNC_10(VAR_25, VAR_24, VAR_28);
  break;
 case 129:
  FUNC_13(VAR_25, VAR_24, VAR_28);
  break;
 case 132:
  FUNC_12(VAR_25, VAR_27, VAR_26);
  break;
 case 137:
  FUNC_8(VAR_25, VAR_28);
  break;
 case 131:
  FUNC_7(VAR_25, VAR_28);
  break;
 default:
  FUNC_11(VAR_25, VAR_24, VAR_28);
  break;
 }

 FUNC_18(0);
}
