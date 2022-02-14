
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (char**,char*,char const*,char const*,char const*,char const*,int ,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (char**,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,char const*) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_0, const char *VAR_1)
{
 uint64_t VAR_2;
 const char *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8;
 char *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_11 = VAR_9 = FUNC_4(VAR_0);
 if (VAR_9 == ((void*)0)) {
  FUNC_7("strdup");
  return (((void*)0));
 }

 VAR_3 = FUNC_6(&VAR_9, ":");
 VAR_4 = FUNC_6(&VAR_9, ":");
 VAR_5 = FUNC_6(&VAR_9, ":");
 VAR_6 = FUNC_6(&VAR_9, "=/");
 VAR_7 = FUNC_6(&VAR_9, "/");
 VAR_8 = VAR_9;

 if (VAR_7 == ((void*)0) || FUNC_5(VAR_7) == 0) {



  FUNC_3(VAR_11);
  VAR_9 = FUNC_4(VAR_0);
  if (VAR_9 == ((void*)0)) {
   FUNC_7("strdup");
   return (((void*)0));
  }
  return (VAR_9);
 }

 FUNC_1(VAR_3 != ((void*)0));
 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));
 FUNC_1(VAR_6 != ((void*)0));

 if (FUNC_2(VAR_7, &VAR_2)) {
  FUNC_8("malformed rule '%s': invalid numeric value '%s'",
      VAR_1, VAR_7);
  FUNC_3(VAR_11);
  return (((void*)0));
 }

 if (VAR_8 == ((void*)0)) {
  VAR_12 = FUNC_0(&VAR_10, "%s:%s:%s:%s=%jd",
      VAR_3, VAR_4, VAR_5, VAR_6, (uintmax_t)VAR_2);
 } else {
  VAR_12 = FUNC_0(&VAR_10, "%s:%s:%s:%s=%jd/%s",
      VAR_3, VAR_4, VAR_5, VAR_6, (uintmax_t)VAR_2, VAR_8);
 }

 if (VAR_12 <= 0) {
  FUNC_7("asprintf");
  FUNC_3(VAR_11);
  return (((void*)0));
 }

 FUNC_3(VAR_11);

 return (VAR_10);
}
