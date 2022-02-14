
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_9__ {scalar_t__ (* entries_cmp_path ) (int ,char const*) ;int entries; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (size_t*,TYPE_2__*,char const*) ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

__attribute__((used)) static int FUNC_5(git_index *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = 0;
 git_index_entry *VAR_4;
 int VAR_5 = 0;

 if (VAR_2 != ((void*)0) && FUNC_1(&VAR_3, VAR_1, VAR_2) < 0)
  return VAR_0;

 while ((VAR_4 = FUNC_2(&VAR_1->entries, VAR_3)) != ((void*)0)) {

  if (VAR_2 != ((void*)0) &&
   VAR_1->entries_cmp_path(VAR_4->path, VAR_2) != 0)
   break;

  if (FUNC_0(VAR_4) == 0) {
   VAR_3++;
   continue;
  }

  if ((VAR_5 = FUNC_3(VAR_1, VAR_3)) < 0)
   break;
 }

 return VAR_5;
}
