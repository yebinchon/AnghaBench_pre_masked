
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int,char const*,int *,int *,int *,int *,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,char const*,char const*) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_1, int VAR_2, const char *VAR_3,
   const char *VAR_4)
{
 const char *VAR_5 = "def_param";
 struct strbuf VAR_6 = VAR_0;

 FUNC_1(&VAR_6, "%s:%s", VAR_3, VAR_4);

 FUNC_0(VAR_1, VAR_2, VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
    &VAR_6);
 FUNC_2(&VAR_6);
}
