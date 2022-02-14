
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_region_hydration {unsigned long region_nr; int h; int list; scalar_t__ status; int deferred_bios; int * overwrite_bio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_clone_region_hydration *VAR_0, unsigned long VAR_1)
{
 VAR_0->region_nr = VAR_1;
 VAR_0->overwrite_bio = ((void*)0);
 FUNC_2(&VAR_0->deferred_bios);
 VAR_0->status = 0;

 FUNC_1(&VAR_0->list);
 FUNC_0(&VAR_0->h);
}
