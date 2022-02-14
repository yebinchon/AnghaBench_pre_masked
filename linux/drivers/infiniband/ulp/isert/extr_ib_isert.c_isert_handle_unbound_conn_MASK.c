
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_np {int mutex; } ;
struct isert_conn {int release_work; int node; TYPE_1__* cm_id; } ;
struct TYPE_2__ {struct isert_np* context; } ;


 int FUNC_0 (struct isert_conn*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct isert_conn *VAR_1)
{
 struct isert_np *VAR_2 = VAR_1->cm_id->context;

 FUNC_3(&VAR_2->mutex);
 if (!FUNC_2(&VAR_1->node)) {




  FUNC_1(&VAR_1->node);
  FUNC_0(VAR_1);
  FUNC_5(VAR_0, &VAR_1->release_work);
 }
 FUNC_4(&VAR_2->mutex);
}
