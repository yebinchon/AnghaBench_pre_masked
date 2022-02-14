
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct submodule_cache {int initialized; int for_name; int for_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct submodule_cache *VAR_2)
{
 FUNC_0(&VAR_2->for_path, VAR_1, ((void*)0), 0);
 FUNC_0(&VAR_2->for_name, VAR_0, ((void*)0), 0);
 VAR_2->initialized = 1;
}
