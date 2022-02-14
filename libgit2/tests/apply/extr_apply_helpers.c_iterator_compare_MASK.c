
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iterator_compare_data {size_t idx; size_t cnt; TYPE_1__* expected; } ;
typedef int git_oid ;
struct TYPE_6__ {int path; int mode; int id; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_5__ {int path; int mode; int oid_str; int stage; } ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(const git_index_entry *VAR_0, void *VAR_1)
{
 git_oid VAR_2;

 struct iterator_compare_data *VAR_3 = (struct iterator_compare_data *)VAR_1;

 FUNC_1(FUNC_0(VAR_0), VAR_3->expected[VAR_3->idx].stage);
 FUNC_4(FUNC_5(&VAR_2, VAR_3->expected[VAR_3->idx].oid_str));
 FUNC_2(&VAR_0->id, &VAR_2);
 FUNC_1(VAR_0->mode, VAR_3->expected[VAR_3->idx].mode);
 FUNC_3(VAR_0->path, VAR_3->expected[VAR_3->idx].path);

 if (VAR_3->idx >= VAR_3->cnt)
  return -1;

 VAR_3->idx++;

 return 0;
}
