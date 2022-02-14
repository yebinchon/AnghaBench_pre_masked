
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char const* VAR_1 ;
 int FUNC_2 (char const*,char const*,char const*,char const*) ;
 int FUNC_3 (char const*,char const*,char const*,char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,char*,size_t) ;
 char* FUNC_6 (char const*,size_t,char const*,char const*,size_t*) ;
 int FUNC_7 (struct strbuf*,char*,size_t,size_t) ;
 int FUNC_8 (char*,char const*,char const*,char const*,size_t) ;
 int FUNC_9 (char*,char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*,char const*,size_t,int) ;

__attribute__((used)) static int FUNC_11(const char *VAR_2, const char *VAR_3, size_t VAR_4,
    struct strbuf *VAR_5, const char *VAR_6, int VAR_7)
{
 char *VAR_8;
 size_t VAR_9;
 int VAR_10 = VAR_7 & VAR_0;





 if (!VAR_6 || (VAR_3 && !VAR_4))
  return 0;







 if (!VAR_5 && !VAR_3)
  return 1;

 if (FUNC_10(VAR_2, VAR_6, VAR_3, VAR_4, VAR_10))
  return 0;

 FUNC_8("source", VAR_2, VAR_6, VAR_3, VAR_4);
 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_1, VAR_6,
      &VAR_9);
 if (!VAR_8) {






  const char* VAR_11 = FUNC_0("failed to encode '%s' from %s to %s");
  if (VAR_10)
   FUNC_2(VAR_11, VAR_2, VAR_6, VAR_1);
  else {
   FUNC_3(VAR_11, VAR_2, VAR_6, VAR_1);
   return 0;
  }
 }
 FUNC_8("destination", VAR_2, VAR_1, VAR_8, VAR_9);
 if (VAR_10 && FUNC_1(VAR_6)) {
  char *VAR_12;
  size_t VAR_13;

  VAR_12 = FUNC_6(VAR_8, VAR_9,
          VAR_6, VAR_1,
          &VAR_13);

  FUNC_9("Checking roundtrip encoding for %s...\n", VAR_6);
  FUNC_8("reencoded source", VAR_2, VAR_6,
          VAR_12, VAR_13);

  if (!VAR_12 || VAR_4 != VAR_13 ||
      FUNC_5(VAR_3, VAR_12, VAR_4)) {
   const char* VAR_14 = FUNC_0("encoding '%s' from %s to %s and "
         "back is not the same");
   FUNC_2(VAR_14, VAR_2, VAR_6, VAR_1);
  }

  FUNC_4(VAR_12);
 }

 FUNC_7(VAR_5, VAR_8, VAR_9, VAR_9 + 1);
 return 1;
}
