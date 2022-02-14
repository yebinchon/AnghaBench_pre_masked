
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_device {int comps_used; struct isert_comp* comps; } ;
struct isert_comp {scalar_t__ cq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct isert_comp*) ;

__attribute__((used)) static void
FUNC_2(struct isert_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->comps_used; VAR_1++) {
  struct isert_comp *VAR_2 = &VAR_0->comps[VAR_1];

  if (VAR_2->cq)
   FUNC_0(VAR_2->cq);
 }
 FUNC_1(VAR_0->comps);
}
