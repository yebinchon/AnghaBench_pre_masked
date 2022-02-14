
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*) ;
 long FUNC_2 (char const*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,struct stat*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char*,char*) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*,int,char*) ;
 int FUNC_11 (char*,char const*,...) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_10)
{
 struct stat VAR_11;
 long VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 char *VAR_17, *VAR_18, *VAR_19;

 if ((VAR_19 = FUNC_6(VAR_10)) == ((void*)0))
  FUNC_0(1, "strdup");

 VAR_18 = VAR_19;

 if (VAR_3 && *VAR_18 == '\0') {
  FUNC_11("%s: empty pathname", VAR_10);
  goto bad;
 }
 if ((VAR_3 || VAR_9) && (*VAR_18 == '-' || FUNC_9(VAR_18, "/-") != ((void*)0))) {
  FUNC_11("%s: contains a component starting with '-'", VAR_10);
  goto bad;
 }

 if (!VAR_9) {
  VAR_8 = 0;
  VAR_13 = FUNC_2(*VAR_18 == '/' ? "/" : ".", VAR_4);
  if (VAR_13 == -1 && VAR_8 != 0)
   VAR_13 = VAR_1;
 } else
  VAR_13 = VAR_6;

 for (;;) {
  VAR_18 += FUNC_8(VAR_18, "/");
  VAR_12 = (long)FUNC_5(VAR_18, "/");
  VAR_17 = VAR_18 + VAR_12;
  VAR_16 = *VAR_17 == '\0';
  *VAR_17 = '\0';

  if (VAR_13 != -1 && VAR_12 > VAR_13) {
   FUNC_11("%s: %s: component too long (limit %ld)", VAR_10,
       VAR_18, VAR_13);
   goto bad;
  }

  if (!VAR_9 && FUNC_4(VAR_19, &VAR_11) == -1 && VAR_8 != VAR_0) {
   FUNC_10("%s: %.*s", VAR_10, (int)(FUNC_7(VAR_19) -
       VAR_12 - 1), VAR_19);
   goto bad;
  }

  if (VAR_9 && !FUNC_3(VAR_18)) {
   FUNC_11("%s: %s: component contains non-portable "
       "character", VAR_10, VAR_18);
   goto bad;
  }

  if (VAR_16)
   break;

  if (!VAR_9) {
   VAR_8 = 0;
   VAR_15 = VAR_13;
   VAR_13 = FUNC_2(VAR_19, VAR_4);
   if (VAR_13 == -1 && VAR_8 != 0)
    VAR_13 = VAR_15;
  }

  *VAR_17 = '/';
  VAR_18 = VAR_17 + 1;
 }

 if (!VAR_9) {
  VAR_8 = 0;
  VAR_14 = FUNC_2(VAR_10, VAR_5);
  if (VAR_14 == -1 && VAR_8 != 0)
   VAR_14 = VAR_2;
 } else
  VAR_14 = VAR_7;
 if (VAR_14 != -1 && FUNC_7(VAR_10) >= (size_t)VAR_14) {
  FUNC_11("%s: path too long (limit %ld)", VAR_10, VAR_14 - 1);
  goto bad;
 }

 FUNC_1(VAR_19);
 return (0);

bad: FUNC_1(VAR_19);
 return (1);
}
