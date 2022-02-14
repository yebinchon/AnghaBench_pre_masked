
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target {int * t_redirection; int t_name; } ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int ) ;

int
FUNC_2(struct target *VAR_0, const char *VAR_1)
{

 if (VAR_0->t_redirection != ((void*)0)) {
  FUNC_1("cannot set redirection to \"%s\" for "
      "target \"%s\"; already defined",
      VAR_1, VAR_0->t_name);
  return (1);
 }

 VAR_0->t_redirection = FUNC_0(VAR_1);

 return (0);
}
