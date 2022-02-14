
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_4__ {int * owner; } ;
struct TYPE_5__ {int do_fsync; TYPE_1__ rc; } ;
typedef TYPE_2__ git_odb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int *,int ) ;

int FUNC_2(git_odb *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_2) {
  git_repository *VAR_5 = VAR_3->rc.owner;
  int VAR_6;

  if (!VAR_5) {
   FUNC_0(VAR_1, "cannot access repository to set odb caps");
   return -1;
  }

  if (!FUNC_1(&VAR_6, VAR_5, VAR_0))
   VAR_3->do_fsync = !!VAR_6;
 }

 return 0;
}
