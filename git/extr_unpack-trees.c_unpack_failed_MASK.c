
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpack_trees_options {int exiting_early; int quiet; int result; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct unpack_trees_options *VAR_0, const char *VAR_1)
{
 FUNC_0(&VAR_0->result);
 if (!VAR_0->quiet && !VAR_0->exiting_early) {
  if (VAR_1)
   return FUNC_1("%s", VAR_1);
  return -1;
 }
 return -1;
}
