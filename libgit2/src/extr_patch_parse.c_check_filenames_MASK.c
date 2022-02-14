
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* delta; } ;
struct TYPE_12__ {char* old_path; char* new_path; char* header_old_path; char* header_new_path; char const* rename_old_path; char const* rename_new_path; TYPE_4__ base; int new_prefix; int old_prefix; } ;
typedef TYPE_5__ git_patch_parsed ;
struct TYPE_9__ {char const* path; } ;
struct TYPE_8__ {char const* path; } ;
struct TYPE_10__ {scalar_t__ status; TYPE_2__ new_file; TYPE_1__ old_file; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,char*,char*,int) ;
 scalar_t__ FUNC_1 (int *,size_t*,TYPE_5__*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(git_patch_parsed *VAR_2)
{
 const char *VAR_3, *VAR_4;
 size_t VAR_5 = 0, VAR_6 = 0;
 bool VAR_7 = (VAR_2->base.delta->status == VAR_0);
 bool VAR_8 = (VAR_2->base.delta->status == VAR_1);

 if (VAR_2->old_path && !VAR_2->new_path)
  return FUNC_2("missing new path");

 if (!VAR_2->old_path && VAR_2->new_path)
  return FUNC_2("missing old path");


 if (FUNC_0(VAR_2->header_old_path, VAR_2->old_path, "old", VAR_7) < 0 ||
     FUNC_0(VAR_2->header_new_path, VAR_2->new_path, "new", VAR_8) < 0)
  return -1;

 VAR_4 = (!VAR_7 && VAR_2->old_path) ? VAR_2->old_path : VAR_2->header_old_path;
 VAR_3 = (!VAR_8 && VAR_2->new_path) ? VAR_2->new_path : VAR_2->header_new_path;

 if ((VAR_4 && FUNC_1(&VAR_2->old_prefix, &VAR_5, VAR_2, VAR_4) < 0) ||
     (VAR_3 && FUNC_1(&VAR_2->new_prefix, &VAR_6, VAR_2, VAR_3) < 0))
  return -1;


 if (VAR_2->rename_old_path)
  VAR_2->base.delta->old_file.path = VAR_2->rename_old_path;
 else
  VAR_2->base.delta->old_file.path = VAR_4 + VAR_5;

 if (VAR_2->rename_new_path)
  VAR_2->base.delta->new_file.path = VAR_2->rename_new_path;
 else
  VAR_2->base.delta->new_file.path = VAR_3 + VAR_6;

 if (!VAR_2->base.delta->old_file.path &&
     !VAR_2->base.delta->new_file.path)
  return FUNC_2("git diff header lacks old / new paths");

 return 0;
}
