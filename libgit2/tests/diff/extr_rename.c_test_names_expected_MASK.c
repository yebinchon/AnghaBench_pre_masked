
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rename_expected {size_t idx; size_t len; int * targets; int * sources; int * status; } ;
struct TYPE_6__ {int path; } ;
struct TYPE_5__ {int path; } ;
struct TYPE_7__ {TYPE_2__ new_file; TYPE_1__ old_file; int status; } ;
typedef TYPE_3__ git_diff_delta ;


 int FUNC_0 (float) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(const git_diff_delta *VAR_0, float VAR_1, void *VAR_2)
{
 struct rename_expected *VAR_3 = VAR_2;

 FUNC_0(VAR_1);

 FUNC_1(VAR_3->idx < VAR_3->len);

 FUNC_2(VAR_0->status, VAR_3->status[VAR_3->idx]);

 FUNC_1(FUNC_3(VAR_3->sources[VAR_3->idx],
  VAR_0->old_file.path) == 0);
 FUNC_1(FUNC_3(VAR_3->targets[VAR_3->idx],
  VAR_0->new_file.path) == 0);

 VAR_3->idx++;

 return 0;
}
