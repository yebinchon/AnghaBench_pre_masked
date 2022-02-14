
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_cryp {TYPE_1__** sha; } ;
struct TYPE_2__ {int queue_task; int done_task; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mtk_cryp *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(&VAR_1->sha[VAR_2]->done_task);
  FUNC_1(&VAR_1->sha[VAR_2]->queue_task);

  FUNC_0(VAR_1->sha[VAR_2]);
 }
}
