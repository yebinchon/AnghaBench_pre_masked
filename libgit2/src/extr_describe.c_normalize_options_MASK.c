
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max_candidates_tags; } ;
typedef TYPE_1__ git_describe_options ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_0(
 git_describe_options *VAR_2,
 const git_describe_options *VAR_3)
{
 git_describe_options VAR_4 = VAR_1;
 if (!VAR_3) VAR_3 = &VAR_4;

 *VAR_2 = *VAR_3;

 if (VAR_2->max_candidates_tags > VAR_0)
  VAR_2->max_candidates_tags = VAR_0;

 return 0;
}
