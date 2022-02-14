
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,char*,int ) ;
 void* FUNC_1 (struct strbuf*,size_t*) ;

__attribute__((used)) static void *FUNC_2(const void *VAR_1, size_t *VAR_2)
{
 static int VAR_3;
 struct strbuf VAR_4 = VAR_0;
 FUNC_0(&VAR_4, "ref%d", VAR_3++);
 return FUNC_1(&VAR_4, VAR_2);
}
