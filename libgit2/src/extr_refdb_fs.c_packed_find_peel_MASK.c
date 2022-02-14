
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct packref {int flags; int peel; int oid; } ;
struct TYPE_3__ {int repo; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_tag ;
typedef int git_object ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(refdb_fs_backend *VAR_4, struct packref *VAR_5)
{
 git_object *VAR_6;

 if (VAR_5->flags & VAR_3 || VAR_5->flags & VAR_2)
  return 0;




 if (FUNC_1(&VAR_6, VAR_4->repo, &VAR_5->oid, VAR_0) < 0)
  return -1;






 if (FUNC_2(VAR_6) == VAR_1) {
  git_tag *VAR_7 = (git_tag *)VAR_6;




  FUNC_3(&VAR_5->peel, FUNC_4(VAR_7));
  VAR_5->flags |= VAR_3;






 }

 FUNC_0(VAR_6);
 return 0;
}
