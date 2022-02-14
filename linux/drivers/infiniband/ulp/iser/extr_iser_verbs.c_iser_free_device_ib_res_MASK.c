
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iser_device {int comps_used; int * pd; struct iser_comp* comps; int event_handler; } ;
struct iser_comp {int * cq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iser_comp*) ;

__attribute__((used)) static void FUNC_4(struct iser_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->comps_used; VAR_1++) {
  struct iser_comp *VAR_2 = &VAR_0->comps[VAR_1];

  FUNC_1(VAR_2->cq);
  VAR_2->cq = ((void*)0);
 }

 FUNC_2(&VAR_0->event_handler);
 FUNC_0(VAR_0->pd);

 FUNC_3(VAR_0->comps);
 VAR_0->comps = ((void*)0);
 VAR_0->pd = ((void*)0);
}
