
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct url_info {scalar_t__ url_len; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,struct url_info*) ;

int FUNC_4(int VAR_0, const char **VAR_1)
{
 const char VAR_2[] = "test-tool urlmatch-normalization [-p | -l] <url1> | <url1> <url2>";
 char *VAR_3, *VAR_4;
 int VAR_5 = 0, VAR_6 = 0;
 if (VAR_0 > 1 && !FUNC_2(VAR_1[1], "-p")) {
  VAR_5 = 1;
  VAR_0--;
  VAR_1++;
 } else if (VAR_0 > 1 && !FUNC_2(VAR_1[1], "-l")) {
  VAR_6 = 1;
  VAR_0--;
  VAR_1++;
 }

 if (VAR_0 < 2 || VAR_0 > 3)
  FUNC_0("%s", VAR_2);

 if (VAR_0 == 2) {
  struct url_info VAR_7;
  VAR_3 = FUNC_3(VAR_1[1], &VAR_7);
  if (!VAR_3)
   return 1;
  if (VAR_5)
   FUNC_1("%s\n", VAR_3);
  if (VAR_6)
   FUNC_1("%u\n", (unsigned)VAR_7.url_len);
  return 0;
 }

 if (VAR_5 || VAR_6)
  FUNC_0("%s", VAR_2);

 VAR_3 = FUNC_3(VAR_1[1], ((void*)0));
 VAR_4 = FUNC_3(VAR_1[2], ((void*)0));
 return (VAR_3 && VAR_4 && !FUNC_2(VAR_3, VAR_4)) ? 0 : 1;
}
