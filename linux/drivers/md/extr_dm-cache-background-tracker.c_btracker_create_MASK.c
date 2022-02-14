
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct background_tracker {unsigned int max_work; int work_cache; int pending; int queued; int issued; int pending_demotes; int pending_writebacks; int pending_promotes; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct background_tracker*) ;
 struct background_tracker* FUNC_5 (int,int ) ;

struct background_tracker *FUNC_6(unsigned VAR_3)
{
 struct background_tracker *VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_0);

 if (!VAR_4) {
  FUNC_0("couldn't create background_tracker");
  return ((void*)0);
 }

 VAR_4->max_work = VAR_3;
 FUNC_3(&VAR_4->pending_promotes, 0);
 FUNC_3(&VAR_4->pending_writebacks, 0);
 FUNC_3(&VAR_4->pending_demotes, 0);

 FUNC_1(&VAR_4->issued);
 FUNC_1(&VAR_4->queued);

 VAR_4->pending = VAR_1;
 VAR_4->work_cache = FUNC_2(VAR_2, 0);
 if (!VAR_4->work_cache) {
  FUNC_0("couldn't create mempool for background work items");
  FUNC_4(VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
