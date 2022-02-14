
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char const*,int ,struct strbuf*,int *,int ) ;
 char* FUNC_1 (char const*,char const*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (char const*) ;

char *FUNC_5(const char *VAR_1, const char *VAR_2,
     struct strbuf *VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 const char *VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);
 FUNC_3(VAR_3);
 FUNC_0(VAR_5, FUNC_4(VAR_5), VAR_3, ((void*)0), 0);
 FUNC_2(&VAR_4);

 return VAR_3->buf;
}
