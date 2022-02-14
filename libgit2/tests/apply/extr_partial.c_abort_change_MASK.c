
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ new_lines; scalar_t__ old_lines; } ;
typedef TYPE_1__ git_diff_hunk ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(
 const git_diff_hunk *VAR_1,
 void *VAR_2)
{
 FUNC_0(VAR_2);

 return (VAR_1->new_lines == VAR_1->old_lines) ? VAR_0 : 0;
}
