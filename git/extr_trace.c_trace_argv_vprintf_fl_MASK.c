
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,int *,struct strbuf*) ;
 int FUNC_1 (int *,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char const**) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(const char *VAR_2, int VAR_3,
      const char **VAR_4, const char *VAR_5,
      va_list VAR_6)
{
 struct strbuf VAR_7 = VAR_0;

 if (!FUNC_0(VAR_2, VAR_3, &VAR_1, &VAR_7))
  return;

 FUNC_4(&VAR_7, VAR_5, VAR_6);

 FUNC_2(&VAR_7, VAR_4);
 FUNC_1(&VAR_1, &VAR_7);
 FUNC_3(&VAR_7);
}
