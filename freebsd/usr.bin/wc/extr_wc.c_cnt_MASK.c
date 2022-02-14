
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ uintmax_t ;
typedef char u_char ;
struct stat {scalar_t__ st_size; int st_mode; } ;
typedef int mbstate_t ;
typedef int mbs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (int) ;
 size_t FUNC_5 (int*,char*,int,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (char*,char const*) ;

__attribute__((used)) static int
FUNC_11(const char *VAR_16)
{
 struct stat VAR_17;
 uintmax_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;
 size_t VAR_26;
 short VAR_27;
 u_char *VAR_28;
 u_char VAR_29[VAR_1];
 wchar_t VAR_30;
 mbstate_t VAR_31;

 VAR_18 = VAR_19 = VAR_20 = VAR_21 = VAR_22 = 0;
 if (VAR_16 == ((void*)0))
  VAR_23 = VAR_3;
 else if ((VAR_23 = FUNC_2(VAR_10, VAR_16)) < 0) {
  FUNC_10("%s: open", VAR_16);
  return (1);
 }
 if (VAR_8 || (VAR_7 && VAR_2 != 1))
  goto word;




 if (VAR_5 == 0 && VAR_6 == 0) {
  if (FUNC_3(VAR_23, &VAR_17)) {
   FUNC_10("%s: fstat", VAR_16);
   (void)FUNC_1(VAR_23);
   return (1);
  }
  if (FUNC_0(VAR_17.st_mode)) {
   FUNC_8();
   VAR_20 = VAR_17.st_size;
   FUNC_9(VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
   VAR_12 += VAR_20;
   (void)FUNC_1(VAR_23);
   return (0);
  }
 }






 while ((VAR_24 = FUNC_7(VAR_23, VAR_29, VAR_1))) {
  if (VAR_24 == -1) {
   FUNC_10("%s: read", VAR_16);
   (void)FUNC_1(VAR_23);
   return (1);
  }
  if (VAR_11)
   FUNC_9(VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
  VAR_20 += VAR_24;
  if (VAR_5 || VAR_6) {
   for (VAR_28 = VAR_29; VAR_24--; ++VAR_28)
    if (*VAR_28 == '\n') {
     if (VAR_22 > VAR_21)
      VAR_21 = VAR_22;
     VAR_22 = 0;
     ++VAR_18;
    } else
     VAR_22++;
  }
 }
 FUNC_8();
 if (VAR_5)
  VAR_13 += VAR_18;
 if (VAR_4)
  VAR_12 += VAR_20;
 if (VAR_6 && VAR_21 > VAR_14)
  VAR_14 = VAR_21;
 FUNC_9(VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
 (void)FUNC_1(VAR_23);
 return (0);


word: VAR_27 = 1;
 VAR_25 = 0;
 FUNC_6(&VAR_31, 0, sizeof(VAR_31));
 while ((VAR_24 = FUNC_7(VAR_23, VAR_29, VAR_1)) != 0) {
  if (VAR_24 == -1) {
   FUNC_10("%s: read", VAR_16 != ((void*)0) ? VAR_16 : "stdin");
   (void)FUNC_1(VAR_23);
   return (1);
  }
  VAR_28 = VAR_29;
  while (VAR_24 > 0) {
   if (VAR_11)
    FUNC_9(VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
   if (!VAR_7 || VAR_2 == 1) {
    VAR_26 = 1;
    VAR_30 = (unsigned char)*VAR_28;
   } else if ((VAR_26 = FUNC_5(&VAR_30, VAR_28, VAR_24, &VAR_31)) ==
       (size_t)-1) {
    if (!VAR_25) {
     VAR_9 = VAR_0;
     FUNC_10("%s",
         VAR_16 != ((void*)0) ? VAR_16 : "stdin");
     VAR_25 = 1;
    }
    FUNC_6(&VAR_31, 0, sizeof(VAR_31));
    VAR_26 = 1;
    VAR_30 = (unsigned char)*VAR_28;
   } else if (VAR_26 == (size_t)-2)
    break;
   else if (VAR_26 == 0)
    VAR_26 = 1;
   VAR_20++;
   if (VAR_30 != L'\n')
    VAR_22++;
   VAR_24 -= VAR_26;
   VAR_28 += VAR_26;
   if (VAR_30 == L'\n') {
    if (VAR_22 > VAR_21)
     VAR_21 = VAR_22;
    VAR_22 = 0;
    ++VAR_18;
   }
   if (FUNC_4(VAR_30))
    VAR_27 = 1;
   else if (VAR_27) {
    VAR_27 = 0;
    ++VAR_19;
   }
  }
 }
 FUNC_8();
 if (VAR_7 && VAR_2 > 1)
  if (FUNC_5(((void*)0), ((void*)0), 0, &VAR_31) == (size_t)-1 && !VAR_25)
   FUNC_10("%s", VAR_16 != ((void*)0) ? VAR_16 : "stdin");
 if (VAR_5)
  VAR_13 += VAR_18;
 if (VAR_8)
  VAR_15 += VAR_19;
 if (VAR_4 || VAR_7)
  VAR_12 += VAR_20;
 if (VAR_6 && VAR_21 > VAR_14)
  VAR_14 = VAR_21;
 FUNC_9(VAR_16, VAR_18, VAR_19, VAR_20, VAR_21);
 (void)FUNC_1(VAR_23);
 return (0);
}
