
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef enum rfc2047_type { ____Placeholder_rfc2047_type } rfc2047_type ;


 scalar_t__ FUNC_0 (unsigned char const,int) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (char const**,size_t*,char const*) ;
 int FUNC_3 (struct strbuf*,char const*,...) ;
 int FUNC_4 (struct strbuf*,char*) ;
 int FUNC_5 (struct strbuf*,size_t) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7(struct strbuf *VAR_0, const char *VAR_1, size_t VAR_2,
         const char *VAR_3, enum rfc2047_type VAR_4)
{
 static const int VAR_5 = 76;
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_0);

 FUNC_5(VAR_0, VAR_2 * 3 + FUNC_6(VAR_3) + 100);
 FUNC_3(VAR_0, "=?%s?q?", VAR_3);
 VAR_7 += FUNC_6(VAR_3) + 5;

 while (VAR_2) {







  const unsigned char *VAR_8 = (const unsigned char *)VAR_1;
  int VAR_9 = FUNC_2(&VAR_1, &VAR_2, VAR_3);
  int VAR_10 = (VAR_9 > 1) || FUNC_0(*VAR_8, VAR_4);


  const char *VAR_11 = VAR_10 ? "=%02X" : "%c";
  int VAR_12 = VAR_10 ? 3 * VAR_9 : 1;
  if (VAR_7 + VAR_12 + 2 > VAR_5) {

   FUNC_3(VAR_0, "?=\n =?%s?q?", VAR_3);
   VAR_7 = FUNC_6(VAR_3) + 5 + 1;
  }

  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
   FUNC_3(VAR_0, VAR_11, VAR_8[VAR_6]);
  VAR_7 += VAR_12;
 }
 FUNC_4(VAR_0, "?=");
}
