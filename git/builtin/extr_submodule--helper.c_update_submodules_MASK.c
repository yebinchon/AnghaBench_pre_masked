
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_update_clone {int update_clone_nr; int * update_clone; scalar_t__ quickstop; int max_jobs; } ;


 int FUNC_0 (int ,int ,int ,int ,struct submodule_update_clone*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct submodule_update_clone *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->max_jobs, VAR_0,
       VAR_1,
       VAR_2, VAR_3, "submodule",
       "parallel/update");
 if (VAR_3->quickstop)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3->update_clone_nr; VAR_4++)
  FUNC_1(&VAR_3->update_clone[VAR_4]);

 return 0;
}
