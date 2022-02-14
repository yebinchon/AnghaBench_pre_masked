
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int id; int mode; int path; } ;
typedef TYPE_4__ git_index_entry ;
struct TYPE_11__ {int (* strcomp ) (int ,int ) ;int deltas; } ;
struct TYPE_15__ {TYPE_1__ base; } ;
typedef TYPE_5__ git_diff_generated ;
struct TYPE_13__ {int id; int mode; int path; } ;
struct TYPE_12__ {int id; } ;
struct TYPE_16__ {int status; TYPE_3__ new_file; TYPE_2__ old_file; } ;
typedef TYPE_6__ git_diff_delta ;
 int FUNC_0 (int *,int *) ;
 TYPE_6__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static git_diff_delta *FUNC_3(
 git_diff_generated *VAR_0,
 const git_index_entry *VAR_1)
{
 git_diff_delta *VAR_2 = FUNC_1(&VAR_0->base.deltas);
 if (!VAR_2)
  return ((void*)0);

 switch (VAR_2->status) {
 case 130:
 case 132:
  if (FUNC_0(&VAR_2->old_file.id, &VAR_1->id) == 0)
   return VAR_2;
  break;
 case 133:
  if (FUNC_0(&VAR_2->new_file.id, &VAR_1->id) == 0)
   return VAR_2;
  break;
 case 129:
 case 128:
  if (VAR_0->base.strcomp(VAR_2->new_file.path, VAR_1->path) == 0 &&
   FUNC_0(&VAR_2->new_file.id, &VAR_1->id) == 0)
   return VAR_2;
  break;
 case 131:
  if (FUNC_0(&VAR_2->old_file.id, &VAR_1->id) == 0 ||
      (VAR_2->new_file.mode == VAR_1->mode &&
   FUNC_0(&VAR_2->new_file.id, &VAR_1->id) == 0))
   return VAR_2;
  break;
 default:
  break;
 }

 return ((void*)0);
}
