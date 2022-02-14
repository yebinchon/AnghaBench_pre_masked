
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_cryp {TYPE_1__** aes; } ;
struct TYPE_2__ {scalar_t__ buf; int queue_task; int done_task; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mtk_cryp *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_2(&VAR_1->aes[VAR_2]->done_task);
  FUNC_2(&VAR_1->aes[VAR_2]->queue_task);

  FUNC_0((unsigned long)VAR_1->aes[VAR_2]->buf);
  FUNC_1(VAR_1->aes[VAR_2]);
 }
}
