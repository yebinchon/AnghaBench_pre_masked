
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int index_oid; } ;
typedef TYPE_1__ git_submodule ;
struct TYPE_6__ {int id; int mode; } ;
typedef TYPE_2__ git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(
 git_submodule *VAR_4, const git_index_entry *VAR_5)
{
 bool VAR_6 = (VAR_4->flags & VAR_0) != 0;

 if (!FUNC_0(VAR_5->mode)) {
  if (!VAR_6)
   VAR_4->flags |= VAR_2;
 } else {
  if (VAR_6)
   VAR_4->flags |= VAR_1;
  else
   FUNC_1(&VAR_4->index_oid, &VAR_5->id);

  VAR_4->flags |= VAR_0 |
   VAR_3;
 }
}
