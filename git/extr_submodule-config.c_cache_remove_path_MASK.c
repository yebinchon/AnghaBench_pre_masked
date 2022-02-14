
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_entry {struct submodule* config; int ent; } ;
struct submodule_cache {int for_path; } ;
struct submodule {int path; int gitmodules_oid; } ;


 int VAR_0 ;
 int FUNC_0 (struct submodule_entry*) ;
 unsigned int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned int) ;
 struct submodule_entry* FUNC_3 (int *,struct submodule_entry*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct submodule_cache *VAR_1,
         struct submodule *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(&VAR_2->gitmodules_oid,
         VAR_2->path);
 struct submodule_entry VAR_4;
 struct submodule_entry *VAR_5;
 FUNC_2(&VAR_4.ent, VAR_3);
 VAR_4.config = VAR_2;
 VAR_5 = FUNC_3(&VAR_1->for_path, &VAR_4, VAR_0, ((void*)0));
 FUNC_0(VAR_5);
}
