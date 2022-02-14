
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct strbuf*,char const*,size_t) ;
 int FUNC_3 (struct strbuf*,char const*) ;
 char* FUNC_4 (struct strbuf*,int *) ;
 size_t FUNC_5 (char const*) ;

char *FUNC_6(const char *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 size_t VAR_4 = VAR_1 ? FUNC_5(VAR_1) : 0;

 if (!VAR_4)
  ;
 else if (FUNC_1(VAR_2))
  VAR_4 = 0;
 else
  FUNC_2(&VAR_3, VAR_1, VAR_4);

 FUNC_3(&VAR_3, VAR_2);



 return FUNC_4(&VAR_3, ((void*)0));
}
