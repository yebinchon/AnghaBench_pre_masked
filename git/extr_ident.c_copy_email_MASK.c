
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct passwd {int pw_name; } ;


 int FUNC_0 (struct strbuf*,int*) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,int ) ;

__attribute__((used)) static void FUNC_4(const struct passwd *VAR_0, struct strbuf *VAR_1,
         int *VAR_2)
{




 FUNC_3(VAR_1, VAR_0->pw_name);
 FUNC_2(VAR_1, '@');

 if (!FUNC_1(VAR_1))
  return;
 FUNC_0(VAR_1, VAR_2);
}
