
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_stack {int dummy; } ;


 int FUNC_0 (struct attr_stack*,char const*,char*,int,int) ;
 struct attr_stack* FUNC_1 (int,int) ;

__attribute__((used)) static struct attr_stack *FUNC_2(const char **VAR_0)
{
 struct attr_stack *VAR_1;
 const char *VAR_2;
 int VAR_3 = 0;

 VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 while ((VAR_2 = *(VAR_0++)) != ((void*)0))
  FUNC_0(VAR_1, VAR_2, "[builtin]", ++VAR_3, 1);
 return VAR_1;
}
