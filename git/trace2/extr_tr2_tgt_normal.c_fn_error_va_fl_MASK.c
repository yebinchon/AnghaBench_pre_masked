
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char const*,int ) ;
 int FUNC_1 (char const*,int,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_1, int VAR_2, const char *VAR_3,
      va_list VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 FUNC_3(&VAR_5, "error");
 if (VAR_3 && *VAR_3) {
  FUNC_2(&VAR_5, ' ');
  FUNC_0(&VAR_5, VAR_3, VAR_4);
 }
 FUNC_1(VAR_1, VAR_2, &VAR_5);
 FUNC_4(&VAR_5);
}
