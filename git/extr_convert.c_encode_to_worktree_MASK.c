
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (int ,char const*,char*,char const*) ;
 char* FUNC_2 (char const*,size_t,char const*,char*,size_t*) ;
 int FUNC_3 (struct strbuf*,char*,size_t,size_t) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, const char *VAR_2, size_t VAR_3,
         struct strbuf *VAR_4, const char *VAR_5)
{
 char *VAR_6;
 size_t VAR_7;





 if (!VAR_5 || (VAR_2 && !VAR_3))
  return 0;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_0,
      &VAR_7);
 if (!VAR_6) {
  FUNC_1(FUNC_0("failed to encode '%s' from %s to %s"),
        VAR_1, VAR_0, VAR_5);
  return 0;
 }

 FUNC_3(VAR_4, VAR_6, VAR_7, VAR_7 + 1);
 return 1;
}
