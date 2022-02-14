
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ mode; int id; } ;
struct TYPE_6__ {scalar_t__ mode; int id; } ;
struct TYPE_7__ {TYPE_1__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(const git_diff_delta *VAR_1)
{
 if (FUNC_1(&VAR_1->old_file.id) &&
  FUNC_1(&VAR_1->new_file.id))
  return 1;

 if (VAR_1->old_file.mode == VAR_0 ||
  VAR_1->new_file.mode == VAR_0)
  return 0;

 if (FUNC_0(&VAR_1->old_file.id, &VAR_1->new_file.id))
  return 1;

 return 0;
}
