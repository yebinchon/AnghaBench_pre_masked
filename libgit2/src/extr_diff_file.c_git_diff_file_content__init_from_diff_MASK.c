
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int flags; TYPE_1__* file; int repo; int driver; int src; } ;
typedef TYPE_2__ git_diff_file_content ;
struct TYPE_12__ {int path; } ;
struct TYPE_14__ {int status; TYPE_1__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_11__ {int flags; } ;
struct TYPE_15__ {TYPE_10__ opts; int attrsession; int new_src; int old_src; int repo; } ;
typedef TYPE_4__ git_diff ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_10__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

int FUNC_3(
 git_diff_file_content *VAR_2,
 git_diff *VAR_3,
 git_diff_delta *VAR_4,
 bool VAR_5)
{
 bool VAR_6 = 1;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->repo = VAR_3->repo;
 VAR_2->file = VAR_5 ? &VAR_4->old_file : &VAR_4->new_file;
 VAR_2->src = VAR_5 ? VAR_3->old_src : VAR_3->new_src;

 if (FUNC_1(&VAR_2->driver, VAR_2->repo,
      &VAR_3->attrsession, VAR_2->file->path) < 0)
  return -1;

 switch (VAR_4->status) {
 case 134:
  VAR_6 = !VAR_5; break;
 case 132:
  VAR_6 = VAR_5; break;
 case 128:
  VAR_6 = !VAR_5 &&
   (VAR_3->opts.flags & VAR_1) != 0;
  break;
 case 129:
 case 131:
 case 133:
 case 130:
  break;
 default:
  VAR_6 = 0;
  break;
 }

 if (!VAR_6)
  VAR_2->flags |= VAR_0;

 return FUNC_0(VAR_2, &VAR_3->opts);
}
