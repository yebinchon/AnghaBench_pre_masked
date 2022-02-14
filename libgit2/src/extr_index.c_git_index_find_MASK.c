
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_6__ {scalar_t__ (* entries_cmp_path ) (int ,char const*) ;int entries; int entries_search_path; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 scalar_t__ FUNC_2 (size_t*,int *,int ,char const*) ;
 TYPE_1__* FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

int FUNC_5(size_t *VAR_2, git_index *VAR_3, const char *VAR_4)
{
 size_t VAR_5;

 FUNC_0(VAR_3 && VAR_4);

 if (FUNC_2(
   &VAR_5, &VAR_3->entries, VAR_3->entries_search_path, VAR_4) < 0) {
  FUNC_1(VAR_1, "index does not contain %s", VAR_4);
  return VAR_0;
 }




 for (; VAR_5 > 0; --VAR_5) {
  const git_index_entry *VAR_6 = FUNC_3(&VAR_3->entries, VAR_5 - 1);

  if (VAR_3->entries_cmp_path(VAR_6->path, VAR_4) != 0)
   break;
 }

 if (VAR_2)
  *VAR_2 = VAR_5;

 return 0;
}
