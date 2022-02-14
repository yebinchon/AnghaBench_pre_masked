
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct diff_data {int new_id; int old_id; void* new_path; void* old_path; } ;
struct TYPE_5__ {int id; scalar_t__ path; } ;
struct TYPE_6__ {int id; scalar_t__ path; } ;
struct TYPE_7__ {TYPE_1__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;


 int FUNC_0 (float) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(
 const git_diff_delta *VAR_0,
 float VAR_1,
 void *VAR_2)
{
 struct diff_data *VAR_3 = VAR_2;

 FUNC_0(VAR_1);

 if (VAR_0->old_file.path)
  VAR_3->old_path = FUNC_1(VAR_0->old_file.path);

 if (VAR_0->new_file.path)
  VAR_3->new_path = FUNC_1(VAR_0->new_file.path);

 FUNC_2(&VAR_3->old_id, &VAR_0->old_file.id);
 FUNC_2(&VAR_3->new_id, &VAR_0->new_file.id);

 return 0;
}
