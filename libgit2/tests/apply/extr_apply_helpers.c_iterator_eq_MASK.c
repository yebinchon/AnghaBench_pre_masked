
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; int mode; int id; } ;
typedef TYPE_1__ git_index_entry ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(const git_index_entry **VAR_0, void *VAR_1)
{
 FUNC_1(VAR_1);

 if (!VAR_0[0] || !VAR_0[1])
  return -1;

 FUNC_2(FUNC_0(VAR_0[0]), FUNC_0(VAR_0[1]));
 FUNC_3(&VAR_0[0]->id, &VAR_0[1]->id);
 FUNC_2(VAR_0[0]->mode, VAR_0[1]->mode);
 FUNC_4(VAR_0[0]->path, VAR_0[1]->path);

 return 0;
}
