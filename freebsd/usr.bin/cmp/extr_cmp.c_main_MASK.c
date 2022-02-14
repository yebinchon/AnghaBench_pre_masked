
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ,char const*,int ) ;
 int FUNC_2 (int,char const*,int ,scalar_t__,int,char const*,int ,scalar_t__) ;
 int FUNC_3 (int,char const*,int ,int,char const*,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,struct stat*) ;
 int FUNC_10 (int,char**,char*,int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char const*,int,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_12 (char*,char const*,char const*) ;
 int VAR_14 ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 int FUNC_14 (char*,int *,int ) ;
 int FUNC_15 () ;
 int VAR_15 ;
 int VAR_16 ;

int
FUNC_16(int VAR_17, char *VAR_18[])
{
 struct stat VAR_19, VAR_20;
 off_t VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 const char *VAR_28, *VAR_29;

 VAR_26 = VAR_6;
 while ((VAR_23 = FUNC_10(VAR_17, VAR_18, "+hlsxz", VAR_12, ((void*)0))) != -1)
  switch (VAR_23) {
  case 'h':
   VAR_26 |= VAR_5;
   break;
  case 'l':
   VAR_11 = 1;
   break;
  case 's':
   VAR_14 = 1;
   VAR_16 = 1;
   break;
  case 'x':
   VAR_11 = 1;
   VAR_15 = 1;
   break;
  case 'z':
   VAR_16 = 1;
   break;
  case '?':
  default:
   FUNC_15();
  }
 VAR_18 += VAR_13;
 VAR_17 -= VAR_13;

 if (VAR_11 && VAR_14)
  FUNC_7(VAR_4, "specifying -s with -l or -x is not permitted");

 if (VAR_17 < 2 || VAR_17 > 4)
  FUNC_15();


 if (FUNC_5(VAR_9, VAR_1 | VAR_0))
  FUNC_6(VAR_4, "unable to limit rights on stdout");
 if (FUNC_5(VAR_7, VAR_1 | VAR_0))
  FUNC_6(VAR_4, "unable to limit rights on stderr");


 VAR_27 = 0;
 if (FUNC_13(VAR_28 = VAR_18[0], "-") == 0) {
  VAR_27 = 1;
  VAR_24 = VAR_8;
  VAR_28 = "stdin";
 } else if ((VAR_24 = FUNC_11(VAR_28, VAR_26, 0)) < 0 && VAR_10 != VAR_3) {
  if (!VAR_14)
   FUNC_6(VAR_4, "%s", VAR_28);
  else
   FUNC_8(VAR_4);
 }
 if (FUNC_13(VAR_29 = VAR_18[1], "-") == 0) {
  if (VAR_27)
   FUNC_7(VAR_4,
    "standard input may only be specified once");
  VAR_27 = 1;
  VAR_25 = VAR_8;
  VAR_29 = "stdin";
 } else if ((VAR_25 = FUNC_11(VAR_29, VAR_26, 0)) < 0 && VAR_10 != VAR_3) {
  if (!VAR_14)
   FUNC_6(VAR_4, "%s", VAR_29);
  else
   FUNC_8(VAR_4);
 }

 VAR_21 = VAR_17 > 2 ? FUNC_14(VAR_18[2], ((void*)0), 0) : 0;
 VAR_22 = VAR_17 == 4 ? FUNC_14(VAR_18[3], ((void*)0), 0) : 0;

 if (VAR_24 == -1) {
  if (VAR_25 == -1) {
   FUNC_1(VAR_28, VAR_21, VAR_29, VAR_22);
   FUNC_8(0);
  } else if (!VAR_14)
   FUNC_7(VAR_4, "%s: Not a symbolic link", VAR_29);
  else
   FUNC_8(VAR_4);
 } else if (VAR_25 == -1) {
  if (!VAR_14)
   FUNC_7(VAR_4, "%s: Not a symbolic link", VAR_28);
  else
   FUNC_8(VAR_4);
 }


 FUNC_4();

 if (!VAR_27) {
  if (FUNC_9(VAR_24, &VAR_19)) {
   if (!VAR_14)
    FUNC_6(VAR_4, "%s", VAR_28);
   else
    FUNC_8(VAR_4);
  }
  if (!FUNC_0(VAR_19))
   VAR_27 = 1;
  else {
   if (FUNC_9(VAR_25, &VAR_20)) {
    if (!VAR_14)
     FUNC_6(VAR_4, "%s", VAR_29);
    else
     FUNC_8(VAR_4);
   }
   if (!FUNC_0(VAR_20))
    VAR_27 = 1;
  }
 }

 if (VAR_27)
  FUNC_3(VAR_24, VAR_28, VAR_21, VAR_25, VAR_29, VAR_22);
 else {
  if (VAR_16 && VAR_19 != VAR_20) {
   if (!VAR_14)
    (void) FUNC_12("%s %s differ: size\n",
        VAR_28, VAR_29);
   FUNC_8(VAR_2);
  }
  FUNC_2(VAR_24, VAR_28, VAR_21, VAR_19,
      VAR_25, VAR_29, VAR_22, VAR_20);
 }
 FUNC_8(0);
}
