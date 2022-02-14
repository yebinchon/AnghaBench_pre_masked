
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char const*,int) ;
 int FUNC_1 (struct strbuf*) ;
 char* FUNC_2 (char const*,int) ;
 int FUNC_3 (struct strbuf*,char const*,char const**) ;

__attribute__((used)) static const char *FUNC_4(const char *VAR_0,
           int VAR_1,
           struct strbuf *VAR_2)
{
 const char *VAR_3;

 FUNC_1(VAR_2);

 if (*VAR_0 == '#') {

  VAR_3 = FUNC_2(VAR_0, VAR_1);
 } else if (*VAR_0 == '"' && !FUNC_3(VAR_2, VAR_0, &VAR_3)) {






 } else {

  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_2, VAR_0, VAR_3 - VAR_0);
 }

 if (*VAR_3)
  VAR_3++;
 return VAR_3;
}
