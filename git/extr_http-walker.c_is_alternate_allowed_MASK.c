
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char const*,char const*,char const**) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2)
{
 const char *VAR_3[] = {
  "http", "https", "ftp", "ftps"
 };
 int VAR_4;

 if (VAR_1 != VAR_0) {
  FUNC_4("alternate disabled by http.followRedirects: %s", VAR_2);
  return 0;
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  const char *VAR_5;
  if (FUNC_2(VAR_2, VAR_3[VAR_4], &VAR_5) &&
      FUNC_3(VAR_5, "://"))
   break;
 }

 if (VAR_4 >= FUNC_0(VAR_3)) {
  FUNC_4("ignoring alternate with unknown protocol: %s", VAR_2);
  return 0;
 }
 if (!FUNC_1(VAR_3[VAR_4], 0)) {
  FUNC_4("ignoring alternate with restricted protocol: %s", VAR_2);
  return 0;
 }

 return 1;
}
