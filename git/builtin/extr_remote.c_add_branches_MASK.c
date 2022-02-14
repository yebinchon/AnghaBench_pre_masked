
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct remote {char* name; int mirror; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,char const*,char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*) ;

__attribute__((used)) static void FUNC_2(struct remote *VAR_1, const char **VAR_2,
    const char *VAR_3)
{
 const char *VAR_4 = VAR_1->name;
 int VAR_5 = VAR_1->mirror;
 struct strbuf VAR_6 = VAR_0;

 for (; *VAR_2; VAR_2++)
  FUNC_0(VAR_3, *VAR_2, VAR_4, VAR_5, &VAR_6);

 FUNC_1(&VAR_6);
}
