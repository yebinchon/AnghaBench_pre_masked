
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const*,size_t) ;
 int FUNC_1 (struct strbuf*,int ) ;
 char* FUNC_2 (char const*,char const*) ;
 size_t FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1, struct strbuf *VAR_2)
{
 const char *VAR_3, *VAR_4 = FUNC_2(VAR_0, VAR_1);
 size_t VAR_5;

 FUNC_1(VAR_2, 0);
 if (!VAR_4)
  return 0;
 VAR_4 += FUNC_4(VAR_1);
 if (*VAR_4 == '"') {
  VAR_4++;
  VAR_3 = "\"";
 }
 else
  VAR_3 = "; \t";
 VAR_5 = FUNC_3(VAR_4, VAR_3);
 FUNC_0(VAR_2, VAR_4, VAR_5);
 return 1;
}
