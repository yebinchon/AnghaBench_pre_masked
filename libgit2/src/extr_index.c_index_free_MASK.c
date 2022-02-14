
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* index_file_path; int deleted; int reuc; int names; int entries; int entries_map; int readers; } ;
typedef TYPE_1__ git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(git_index *VAR_0)
{



 FUNC_0(!FUNC_3(&VAR_0->readers));

 FUNC_5(VAR_0);
 FUNC_4(VAR_0->entries_map);
 FUNC_6(&VAR_0->entries);
 FUNC_6(&VAR_0->names);
 FUNC_6(&VAR_0->reuc);
 FUNC_6(&VAR_0->deleted);

 FUNC_1(VAR_0->index_file_path);

 FUNC_2(VAR_0, sizeof(*VAR_0));
 FUNC_1(VAR_0);
}
