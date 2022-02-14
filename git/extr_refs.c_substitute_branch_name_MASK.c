
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct repository {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct repository*,char const*,int,struct strbuf*,int ) ;
 char* FUNC_1 (struct strbuf*,size_t*) ;

__attribute__((used)) static char *FUNC_2(struct repository *VAR_1,
        const char **VAR_2, int *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 int VAR_5 = FUNC_0(VAR_1, *VAR_2, *VAR_3, &VAR_4, 0);

 if (VAR_5 == *VAR_3) {
  size_t VAR_6;
  *VAR_2 = FUNC_1(&VAR_4, &VAR_6);
  *VAR_3 = VAR_6;
  return (char *)*VAR_2;
 }

 return ((void*)0);
}
