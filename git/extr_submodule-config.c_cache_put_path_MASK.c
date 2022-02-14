
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_entry {int ent; struct submodule* config; } ;
struct submodule_cache {int for_path; } ;
struct submodule {int path; int gitmodules_oid; } ;


 unsigned int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int *) ;
 struct submodule_entry* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct submodule_cache *VAR_0,
      struct submodule *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(&VAR_1->gitmodules_oid,
         VAR_1->path);
 struct submodule_entry *VAR_3 = FUNC_3(sizeof(*VAR_3));
 FUNC_1(&VAR_3->ent, VAR_2);
 VAR_3->config = VAR_1;
 FUNC_2(&VAR_0->for_path, &VAR_3->ent);
}
