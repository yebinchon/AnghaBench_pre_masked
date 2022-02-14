
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct passwd {char* pw_dir; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 () ;
 scalar_t__ VAR_10 ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,int,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;
 struct passwd* FUNC_5 (char*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 char* FUNC_7 (char*,char*,size_t) ;
 char* FUNC_8 (char*,char*,size_t) ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (char*,int,int) ;
 char* VAR_15 ;
 int * VAR_16 ;
 scalar_t__ VAR_17 ;
 void* FUNC_10 (char*) ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 char* FUNC_11 (char*,char) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 size_t FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char*,char*,int) ;
 char* FUNC_15 (char*,char) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,int ,char*) ;
 int FUNC_19 (int ,char*,int ,char*) ;
 int FUNC_20 (char*,int ) ;

__attribute__((used)) static int
FUNC_21(void)
{
 int VAR_20, VAR_21, VAR_22;
 size_t VAR_23, VAR_24;
 char *VAR_25, *VAR_26;
 void *VAR_27;
 struct passwd *VAR_28;
 struct stat VAR_29;
 char VAR_30[VAR_4 + 1];

 VAR_9 = 0;

 for (;;) {
  if (FUNC_2(VAR_30, sizeof(VAR_30), VAR_13) == ((void*)0))
   return (VAR_3);
  VAR_25 = VAR_30;
  if (FUNC_14(VAR_25, "begin-base64 ", 13) == 0) {
   VAR_9 = 1;
   VAR_25 += 13;
  } else if (FUNC_14(VAR_25, "begin ", 6) == 0)
   VAR_25 += 6;
  else
   continue;

  VAR_26 = FUNC_11(VAR_25, ' ');
  if (VAR_26 == ((void*)0))
   continue;
  *VAR_26++ = '\0';

  VAR_23 = FUNC_13(VAR_26);
  while (VAR_23 > 0 && (VAR_26[VAR_23-1] == '\n' || VAR_26[VAR_23-1] == '\r'))
   VAR_26[--VAR_23] = '\0';

  if (VAR_23 > 0)
   break;
 }

 VAR_27 = FUNC_10(VAR_25);
 if (VAR_27 == ((void*)0)) {
  FUNC_20("%s: unable to parse file mode", VAR_12);
  return (1);
 }
 VAR_22 = FUNC_4(VAR_27, 0) & 0666;
 FUNC_3(VAR_27);

 if (VAR_18) {

  VAR_25 = ((void*)0);
  VAR_28 = ((void*)0);
  if (*VAR_26 == '~')
   VAR_25 = FUNC_11(VAR_26, '/');
  if (VAR_25 != ((void*)0)) {
   *VAR_25 = '\0';
   VAR_28 = FUNC_5(VAR_26 + 1);
   *VAR_25 = '/';
  }
  if (VAR_28 != ((void*)0)) {
   VAR_23 = FUNC_13(VAR_28->pw_dir);
   if (VAR_30 + VAR_23 > VAR_25) {

    VAR_24 = FUNC_13(VAR_25);
    if (sizeof(VAR_30) < VAR_23 + VAR_24) {
     FUNC_20("%s: bad output filename",
         VAR_12);
     return (1);
    }
    VAR_25 = FUNC_8(VAR_30 + VAR_23, VAR_25, VAR_24);
   }
   VAR_26 = FUNC_7(VAR_25 - VAR_23, VAR_28->pw_dir, VAR_23);
  }
 } else {

  VAR_25 = FUNC_15(VAR_26, '/');
  if (VAR_25 != ((void*)0))
   VAR_26 = VAR_25 + 1;
 }
 if (!VAR_14)
  VAR_15 = VAR_26;


 if (VAR_17 || FUNC_12(VAR_15, "/dev/stdout") == 0)
  VAR_16 = VAR_19;
 else {
  VAR_20 = VAR_7 | VAR_5 | VAR_6;
  if (FUNC_6(VAR_15, &VAR_29) == 0) {
   if (VAR_11) {
    FUNC_19(VAR_0, "%s: %s", VAR_12, VAR_15);
    return (0);
   }
   switch (VAR_29.st_mode & VAR_8) {
   case 128:
   case 129:

    if (FUNC_16(VAR_15) == 0 || VAR_10 == VAR_2)
     break;
    FUNC_18("%s: unlink %s", VAR_12, VAR_15);
    return (1);
   case 130:
    FUNC_19(VAR_1, "%s: %s", VAR_12, VAR_15);
    return (1);
   default:
    if (VAR_14) {

     VAR_20 &= ~VAR_6;
     break;
    }
    FUNC_19(VAR_0, "%s: %s", VAR_12, VAR_15);
    return (1);
   }
  } else if (VAR_10 != VAR_2) {
   FUNC_18("%s: %s", VAR_12, VAR_15);
   return (1);
  }
  if ((VAR_21 = FUNC_9(VAR_15, VAR_20, VAR_22)) < 0 ||
      (VAR_16 = FUNC_1(VAR_21, "w")) == ((void*)0)) {
   FUNC_18("%s: %s", VAR_12, VAR_15);
   return (1);
  }
 }

 if (VAR_9)
  return (FUNC_0());
 else
  return (FUNC_17());
}
