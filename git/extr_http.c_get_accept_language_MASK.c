
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {scalar_t__ len; } ;


 struct strbuf VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_0 (struct strbuf*,int *) ;
 int FUNC_1 (struct strbuf*) ;

__attribute__((used)) static const char *FUNC_2(void)
{
 if (!VAR_1) {
  struct strbuf VAR_2 = VAR_0;
  FUNC_1(&VAR_2);
  if (VAR_2.len > 0)
   VAR_1 = FUNC_0(&VAR_2, ((void*)0));
 }

 return VAR_1;
}
