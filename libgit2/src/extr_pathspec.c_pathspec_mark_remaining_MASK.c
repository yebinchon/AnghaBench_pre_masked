
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pathspec_match_context {int dummy; } ;
struct TYPE_4__ {size_t length; } ;
typedef TYPE_1__ git_vector ;
typedef int git_bitvec ;
typedef int git_attr_fnmatch ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int * FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (int *,size_t) ;
 scalar_t__ FUNC_3 (int const*,struct pathspec_match_context*,char const*) ;

__attribute__((used)) static size_t FUNC_4(
 git_bitvec *VAR_0,
 git_vector *VAR_1,
 struct pathspec_match_context *VAR_2,
 size_t VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 size_t VAR_6 = 0;

 if (VAR_5 == VAR_4)
  VAR_5 = ((void*)0);

 for (; VAR_3 < VAR_1->length; ++VAR_3) {
  const git_attr_fnmatch *VAR_7 = FUNC_1(VAR_1, VAR_3);

  if (FUNC_0(VAR_0, VAR_3))
   continue;

  if (VAR_4 && FUNC_3(VAR_7, VAR_2, VAR_4) > 0)
   VAR_6 += FUNC_2(VAR_0, VAR_3);
  else if (VAR_5 && FUNC_3(VAR_7, VAR_2, VAR_5) > 0)
   VAR_6 += FUNC_2(VAR_0, VAR_3);
 }

 return VAR_6;
}
