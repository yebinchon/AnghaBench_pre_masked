
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rename_conflict_info {struct rename* ren1; } ;
struct rename {char* branch; TYPE_1__* pair; } ;
struct merge_options {char* branch1; char* branch2; TYPE_3__* repo; TYPE_2__* priv; } ;
struct diff_filespec {int * path; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_5__ {scalar_t__ call_depth; } ;
struct TYPE_4__ {struct diff_filespec* two; struct diff_filespec* one; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct merge_options*,int *,int *,struct diff_filespec const*,struct diff_filespec const*,char const*,char const*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct merge_options*,int *,int *,struct diff_filespec const*,struct diff_filespec const*) ;

__attribute__((used)) static int FUNC_4(struct merge_options *VAR_0,
    struct rename_conflict_info *VAR_1)
{
 const struct rename *VAR_2 = VAR_1->ren1;
 const struct diff_filespec *VAR_3 = VAR_2->pair->one;
 const struct diff_filespec *VAR_4 = VAR_2->pair->two;
 const char *VAR_5 = VAR_2->branch;
 const char *VAR_6 = (VAR_0->branch1 == VAR_2->branch ?
         VAR_0->branch2 : VAR_0->branch1);

 if (FUNC_1(VAR_0,
     VAR_0->priv->call_depth ? VAR_3->path : VAR_4->path,
     VAR_0->priv->call_depth ? ((void*)0) : VAR_3->path,
     VAR_3, VAR_4,
     VAR_5, VAR_6,
     FUNC_0("rename"), FUNC_0("renamed")))
  return -1;

 if (VAR_0->priv->call_depth)
  return FUNC_2(VAR_0->repo->index, VAR_4->path);
 else
  return FUNC_3(VAR_0, VAR_4->path, ((void*)0),
         VAR_5 == VAR_0->branch1 ? VAR_4 : ((void*)0),
         VAR_5 == VAR_0->branch1 ? ((void*)0) : VAR_4);
}
