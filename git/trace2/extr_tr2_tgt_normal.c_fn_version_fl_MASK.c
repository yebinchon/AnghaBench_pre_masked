
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,int ) ;
 int FUNC_2 (struct strbuf*) ;

__attribute__((used)) static void FUNC_3(const char *VAR_2, int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;

 FUNC_1(&VAR_4, "version %s", VAR_1);
 FUNC_0(VAR_2, VAR_3, &VAR_4);
 FUNC_2(&VAR_4);
}
