
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_filter {scalar_t__ match_as_path; int * name_patterns; } ;


 int FUNC_0 (struct ref_filter*,char const*) ;
 int FUNC_1 (struct ref_filter*,char const*) ;

__attribute__((used)) static int FUNC_2(struct ref_filter *VAR_0, const char *VAR_1)
{
 if (!*VAR_0->name_patterns)
  return 1;
 if (VAR_0->match_as_path)
  return FUNC_0(VAR_0, VAR_1);
 return FUNC_1(VAR_0, VAR_1);
}
