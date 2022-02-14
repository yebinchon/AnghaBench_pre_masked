
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char const**) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,int) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_1, int VAR_2, uint64_t VAR_3,
         int VAR_4, const char *VAR_5, const char **VAR_6)
{
 struct strbuf VAR_7 = VAR_0;

 FUNC_3(&VAR_7, "exec[%d] ", VAR_4);
 if (VAR_5) {
  FUNC_4(&VAR_7, VAR_5);
  FUNC_2(&VAR_7, ' ');
 }
 FUNC_1(&VAR_7, VAR_6);
 FUNC_0(VAR_1, VAR_2, &VAR_7);
 FUNC_5(&VAR_7);
}
