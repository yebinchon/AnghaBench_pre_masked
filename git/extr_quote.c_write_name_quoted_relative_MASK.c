
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 char* FUNC_0 (char const*,char const*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*) ;
 int FUNC_2 (char const*,int *,int) ;

void FUNC_3(const char *VAR_1, const char *VAR_2,
    FILE *VAR_3, int VAR_4)
{
 struct strbuf VAR_5 = VAR_0;

 VAR_1 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 FUNC_2(VAR_1, VAR_3, VAR_4);

 FUNC_1(&VAR_5);
}
