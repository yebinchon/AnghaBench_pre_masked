
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_10__ {int dirty; int deleted; int readers; int entries; int tree; } ;
typedef TYPE_2__ git_index ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(git_index *VAR_0, size_t VAR_1)
{
 int VAR_2 = 0;
 git_index_entry *VAR_3 = FUNC_3(&VAR_0->entries, VAR_1);

 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_0->tree, VAR_3->path);
  FUNC_0(VAR_0, VAR_3);
 }

 VAR_2 = FUNC_5(&VAR_0->entries, VAR_1);

 if (!VAR_2) {
  if (FUNC_1(&VAR_0->readers) > 0) {
   VAR_2 = FUNC_4(&VAR_0->deleted, VAR_3);
  } else {
   FUNC_6(VAR_3);
  }

  VAR_0->dirty = 1;
 }

 return VAR_2;
}
