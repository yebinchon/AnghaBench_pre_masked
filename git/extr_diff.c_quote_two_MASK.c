
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,struct strbuf*,int *,int) ;
 int FUNC_1 (struct strbuf*,char) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 char* FUNC_3 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, ((void*)0), ((void*)0), 1);
 int VAR_4 = FUNC_0(VAR_2, ((void*)0), ((void*)0), 1);
 struct strbuf VAR_5 = VAR_0;

 if (VAR_3 + VAR_4) {
  FUNC_1(&VAR_5, '"');
  FUNC_0(VAR_1, &VAR_5, ((void*)0), 1);
  FUNC_0(VAR_2, &VAR_5, ((void*)0), 1);
  FUNC_1(&VAR_5, '"');
 } else {
  FUNC_2(&VAR_5, VAR_1);
  FUNC_2(&VAR_5, VAR_2);
 }
 return FUNC_3(&VAR_5, ((void*)0));
}
