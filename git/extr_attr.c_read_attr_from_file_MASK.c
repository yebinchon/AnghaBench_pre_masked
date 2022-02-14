
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_stack {int dummy; } ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct attr_stack*,char*,char const*,int,int) ;
 int FUNC_4 (char**,int ) ;
 int FUNC_5 (char*) ;
 struct attr_stack* FUNC_6 (int,int) ;

__attribute__((used)) static struct attr_stack *FUNC_7(const char *VAR_0, int VAR_1)
{
 FILE *VAR_2 = FUNC_2(VAR_0, "r");
 struct attr_stack *VAR_3;
 char VAR_4[2048];
 int VAR_5 = 0;

 if (!VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_6(1, sizeof(*VAR_3));
 while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_2)) {
  char *VAR_6 = VAR_4;
  if (!VAR_5)
   FUNC_4(&VAR_6, FUNC_5(VAR_6));
  FUNC_3(VAR_3, VAR_6, VAR_0, ++VAR_5, VAR_1);
 }
 FUNC_0(VAR_2);
 return VAR_3;
}
