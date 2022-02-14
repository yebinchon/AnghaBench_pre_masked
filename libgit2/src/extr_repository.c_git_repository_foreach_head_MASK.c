
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {size_t count; int * strings; } ;
typedef TYPE_1__ git_strarray ;
typedef int (* git_repository_foreach_head_cb ) (TYPE_2__*,int ,void*) ;
struct TYPE_17__ {int commondir; } ;
typedef TYPE_2__ git_repository ;
struct TYPE_18__ {int ptr; } ;
typedef TYPE_4__ git_buf ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

int FUNC_5(git_repository *VAR_5,
    git_repository_foreach_head_cb VAR_6,
    int VAR_7, void *VAR_8)
{
 git_strarray VAR_9 = VAR_4;
 git_buf VAR_10 = VAR_0;
 int VAR_11 = 0;
 size_t VAR_12;


 if (!(VAR_7 & VAR_2)) {

  if ((VAR_11 = FUNC_2(&VAR_10, VAR_5->commondir, VAR_1)) < 0 ||
      (VAR_11 = VAR_6(VAR_5, VAR_10.ptr, VAR_8) != 0))
   goto out;
 }

 if (!(VAR_7 & VAR_3)) {
  if ((VAR_11 = FUNC_4(&VAR_9, VAR_5)) < 0) {
   VAR_11 = 0;
   goto out;
  }


  for (VAR_12 = 0; VAR_12 < VAR_9.count; VAR_12++) {
   if (FUNC_0(&VAR_10, VAR_5, VAR_9.strings[VAR_12], VAR_1) < 0)
    continue;

   if ((VAR_11 = VAR_6(VAR_5, VAR_10.ptr, VAR_8)) != 0)
    goto out;
  }
 }

out:
 FUNC_1(&VAR_10);
 FUNC_3(&VAR_9);
 return VAR_11;
}
