
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int path; int repo; } ;
typedef TYPE_1__ git_submodule ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(git_submodule *VAR_4)
{
 git_buf VAR_5 = VAR_1;

 if (FUNC_1(&VAR_5, FUNC_4(VAR_4->repo), VAR_4->path) < 0)
  return -1;

 if (FUNC_3(VAR_5.ptr))
  VAR_4->flags |= VAR_3;

 if (FUNC_2(&VAR_5, VAR_0))
  VAR_4->flags |= VAR_2;

 FUNC_0(&VAR_5);
 return 0;
}
