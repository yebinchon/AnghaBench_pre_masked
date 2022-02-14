
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdar {char* progname; int options; char* filename; char mode; int argc; char** argv; int * posarg; } ;


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

 int FUNC_0 (struct bsdar*) ;
 int FUNC_1 (struct bsdar*) ;
 int FUNC_2 (struct bsdar*) ;
 int FUNC_3 (struct bsdar*) ;
 int FUNC_4 (struct bsdar*) ;
 int FUNC_5 (struct bsdar*) ;
 int FUNC_6 (struct bsdar*) ;
 int FUNC_7 (struct bsdar*) ;
 int FUNC_8 (struct bsdar*) ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (struct bsdar*,int ,int ,char*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct bsdar*,int ,char*,char*) ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,char**,char*,int ,int *) ;
 char* FUNC_16 () ;
 int VAR_17 ;
 char* FUNC_17 (size_t) ;
 int FUNC_18 (struct bsdar*,int ,int) ;
 int FUNC_19 (struct bsdar*,char*,char*) ;
 scalar_t__ VAR_18 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 (struct bsdar*,int) ;
 scalar_t__ FUNC_23 (char*,char) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,char*,size_t) ;
 int FUNC_26 (char*) ;

int
FUNC_27(int VAR_19, char **VAR_20)
{
 struct bsdar *VAR_21, VAR_22;
 char *VAR_23;
 size_t VAR_24;
 int VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_21 = &VAR_22;
 FUNC_18(VAR_21, 0, sizeof(*VAR_21));
 VAR_27 = 0;
 VAR_28 = 0;

 if ((VAR_21->progname = FUNC_16()) == ((void*)0))
  VAR_21->progname = "ar";



 VAR_24 = FUNC_26(VAR_21->progname);
 if (VAR_24 >= FUNC_26("ranlib") &&
     FUNC_24(VAR_21->progname + VAR_24 - FUNC_26("ranlib"), "ranlib") == 0) {
  while ((VAR_26 = FUNC_15(VAR_19, VAR_20, "tDUV", VAR_17,
      ((void*)0))) != -1) {
   switch(VAR_26) {
   case 't':

    break;
   case 'D':
    VAR_27 = 1;
    VAR_28 = 0;
    break;
   case 'U':
    VAR_28 = 1;
    VAR_27 = 0;
    break;
   case 'V':
    FUNC_21();
    break;
   case 128:
    FUNC_20();
   default:
    FUNC_20();
   }
  }
  VAR_20 += VAR_18;
  VAR_19 -= VAR_18;

  if (*VAR_20 == ((void*)0))
   FUNC_20();


  if (VAR_28 == 0)
   VAR_21->options |= VAR_4;
  VAR_21->options |= VAR_7;
  while ((VAR_21->filename = *VAR_20++) != ((void*)0))
   FUNC_5(VAR_21);

  FUNC_14(VAR_13);
 } else {
  if (VAR_19 < 2)
   FUNC_11();

  if (*VAR_20[1] != '-') {
   VAR_24 = FUNC_26(VAR_20[1]) + 2;
   if ((VAR_23 = FUNC_17(VAR_24)) == ((void*)0))
    FUNC_10(VAR_21, VAR_14, VAR_16,
        "malloc failed");
   *VAR_23 = '-';
   (void)FUNC_25(VAR_23 + 1, VAR_20[1], VAR_24 - 1);
   VAR_20[1] = VAR_23;
  }
 }

 while ((VAR_26 = FUNC_15(VAR_19, VAR_20, "abCcdDfijlMmopqrSsTtUuVvxz",
     VAR_17, ((void*)0))) != -1) {
  switch(VAR_26) {
  case 'a':
   VAR_21->options |= VAR_0;
   break;
  case 'b':
  case 'i':
   VAR_21->options |= VAR_1;
   break;
  case 'C':
   VAR_21->options |= VAR_3;
   break;
  case 'c':
   VAR_21->options |= VAR_2;
   break;
  case 'd':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'D':
   VAR_27 = 1;
   VAR_28 = 0;
   break;
  case 'f':
  case 'T':
   VAR_21->options |= VAR_9;
   break;
  case 'j':

   break;
  case 'l':

   break;
  case 'M':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'm':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'o':
   VAR_21->options |= VAR_6;
   break;
  case 'p':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'q':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'r':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'S':
   VAR_21->options |= VAR_8;
   break;
  case 's':
   VAR_21->options |= VAR_7;
   break;
  case 't':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'U':
   VAR_28 = 1;
   VAR_27 = 0;
   break;
  case 'u':
   VAR_21->options |= VAR_10;
   break;
  case 'V':
   FUNC_12();
   break;
  case 'v':
   VAR_21->options |= VAR_11;
   break;
  case 'x':
   FUNC_22(VAR_21, VAR_26);
   break;
  case 'z':

   break;
  case 128:
   FUNC_11();
  default:
   FUNC_11();
  }
 }

 VAR_20 += VAR_18;
 VAR_19 -= VAR_18;

 if (*VAR_20 == ((void*)0) && VAR_21->mode != 'M')
  FUNC_11();

 if (VAR_21->options & VAR_0 && VAR_21->options & VAR_1)
  FUNC_10(VAR_21, VAR_15, 0,
      "only one of -a and -[bi] options allowed");

 if (VAR_21->options & VAR_5 && VAR_21->options & VAR_12)
  FUNC_10(VAR_21, VAR_15, 0,
      "only one of -j and -z options allowed");

 if (VAR_21->options & VAR_7 && VAR_21->options & VAR_8)
  FUNC_10(VAR_21, VAR_15, 0,
      "only one of -s and -S options allowed");

 if (VAR_21->options & (VAR_0 | VAR_1)) {
  if (*VAR_20 == ((void*)0))
   FUNC_10(VAR_21, VAR_15, 0,
       "no position operand specified");
  if ((VAR_21->posarg = FUNC_9(*VAR_20)) == ((void*)0))
   FUNC_10(VAR_21, VAR_14, VAR_16,
       "basename failed");
  VAR_19--;
  VAR_20++;
 }


 if (VAR_27 || (VAR_28 == 0 && (VAR_21->mode == 'q' || VAR_21->mode == 'r' ||
     (VAR_21->mode == '\0' && VAR_21->options & VAR_7))))
  VAR_21->options |= VAR_4;

 if (VAR_21->options & VAR_0)
  FUNC_19(VAR_21, "-a", "mqr");
 if (VAR_21->options & VAR_1)
  FUNC_19(VAR_21, "-b", "mqr");
 if (VAR_21->options & VAR_2)
  FUNC_19(VAR_21, "-c", "qr");
 if (VAR_21->options & VAR_3)
  FUNC_19(VAR_21, "-C", "x");
 if (VAR_27)
  FUNC_19(VAR_21, "-D", "qr");
 if (VAR_28)
  FUNC_19(VAR_21, "-U", "qr");
 if (VAR_21->options & VAR_6)
  FUNC_19(VAR_21, "-o", "x");
 if (VAR_21->options & VAR_8)
  FUNC_19(VAR_21, "-S", "mqr");
 if (VAR_21->options & VAR_10)
  FUNC_19(VAR_21, "-u", "qrx");

 if (VAR_21->mode == 'M') {
  FUNC_6(VAR_21);
  FUNC_14(VAR_13);
 }

 if ((VAR_21->filename = *VAR_20) == ((void*)0))
  FUNC_11();

 VAR_21->argc = --VAR_19;
 VAR_21->argv = ++VAR_20;

 if ((!VAR_21->mode || FUNC_23("ptx", VAR_21->mode)) &&
     VAR_21->options & VAR_7) {
  FUNC_5(VAR_21);
  if (!VAR_21->mode)
   FUNC_14(VAR_13);
 }

 switch(VAR_21->mode) {
 case 'd':
  FUNC_0(VAR_21);
  break;
 case 'm':
  FUNC_1(VAR_21);
  break;
 case 'p':
  FUNC_2(VAR_21);
  break;
 case 'q':
  FUNC_3(VAR_21);
  break;
 case 'r':
  FUNC_4(VAR_21);
  break;
 case 't':
  FUNC_7(VAR_21);
  break;
 case 'x':
  FUNC_8(VAR_21);
  break;
 default:
  FUNC_11();

 }

 for (VAR_25 = 0; VAR_25 < VAR_21->argc; VAR_25++)
  if (VAR_21->argv[VAR_25] != ((void*)0))
   FUNC_13(VAR_21, 0, "%s: not found in archive",
       VAR_21->argv[VAR_25]);

 FUNC_14(VAR_13);
}
