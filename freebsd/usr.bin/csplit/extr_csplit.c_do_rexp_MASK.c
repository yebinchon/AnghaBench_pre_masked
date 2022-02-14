
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;
typedef scalar_t__ intmax_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,char*,char const*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 () ;
 int * FUNC_7 () ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,char*,int) ;
 scalar_t__ FUNC_10 (int *,char*,int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 char* FUNC_12 (char const*) ;
 char* FUNC_13 (char*,char const) ;
 long FUNC_14 (char*,char**,int) ;
 int * FUNC_15 () ;
 int FUNC_16 (int *,long) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_17(const char *VAR_7)
{
 regex_t VAR_8;
 intmax_t VAR_9;
 long VAR_10;
 int VAR_11;
 char *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 FILE *VAR_17;

 if ((VAR_12 = FUNC_12(VAR_7)) == ((void*)0))
  FUNC_0(1, "strdup");

 VAR_16 = VAR_12 + 1;
 if ((VAR_15 = FUNC_13(VAR_12, *VAR_7)) == ((void*)0) || VAR_15[-1] == '\\')
  FUNC_1(1, "%s: missing trailing %c", VAR_7, *VAR_7);
 *VAR_15++ = '\0';

 if (*VAR_15 != '\0') {
  VAR_4 = 0;
  VAR_10 = FUNC_14(VAR_15, &VAR_13, 10);
  if (*VAR_13 != '\0' || VAR_4 != 0)
   FUNC_1(1, "%s: bad offset", VAR_15);
 } else
  VAR_10 = 0;

 if (FUNC_9(&VAR_8, VAR_16, VAR_1|VAR_2) != 0)
  FUNC_1(1, "%s: bad regular expression", VAR_16);

 if (*VAR_7 == '/')

  VAR_17 = FUNC_7();
 else {

  if ((VAR_17 = FUNC_15()) == ((void*)0))
   FUNC_0(1, "tmpfile");
 }


 VAR_11 = 1;
 while ((VAR_14 = FUNC_6()) != ((void*)0)) {
  if (FUNC_3(VAR_14, VAR_17) == VAR_0)
   break;
  if (!VAR_11 && FUNC_10(&VAR_8, VAR_14, 0, ((void*)0), 0) == 0)
   break;
  VAR_11 = 0;
 }

 if (VAR_14 == ((void*)0)) {
  FUNC_16(((void*)0), 0);
  FUNC_1(1, "%s: no match", VAR_16);
 }

 if (VAR_10 <= 0) {




  if (VAR_14 != ((void*)0)) {
   FUNC_16(VAR_17, -VAR_10 + 1);
   VAR_9 = (intmax_t)VAR_6;
  } else
   VAR_9 = (intmax_t)FUNC_5(VAR_17);
 } else {




  while (--VAR_10 > 0 && (VAR_14 = FUNC_6()) != ((void*)0))
   FUNC_3(VAR_14, VAR_17);
  FUNC_16(((void*)0), 0);
  VAR_9 = (intmax_t)FUNC_5(VAR_17);
  if (FUNC_2(VAR_17) != 0)
   FUNC_0(1, "%s", VAR_3);
 }

 if (!VAR_5 && *VAR_7 == '/')
  FUNC_8("%jd\n", VAR_9);

 FUNC_11(&VAR_8);
 FUNC_4(VAR_12);
}
