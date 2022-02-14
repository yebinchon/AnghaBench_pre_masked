
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {unsigned long len; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,int ) ;
 char* FUNC_1 (struct strbuf*,int *) ;

__attribute__((used)) static char *FUNC_2(unsigned long *VAR_1)
{
 static int VAR_2;
 struct strbuf VAR_3 = VAR_0;
 FUNC_0(&VAR_3, "anonymous blob %d", VAR_2++);
 *VAR_1 = VAR_3.len;
 return FUNC_1(&VAR_3, ((void*)0));
}
