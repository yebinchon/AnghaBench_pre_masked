
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ib_ah {TYPE_1__* pd; } ;
struct efa_dev {int ibdev; } ;
struct efa_ah {int ah; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct efa_dev*,struct efa_ah*) ;
 int FUNC_1 (int *,char*,...) ;
 struct efa_ah* FUNC_2 (struct ib_ah*) ;
 struct efa_dev* FUNC_3 (int ) ;

void FUNC_4(struct ib_ah *VAR_1, u32 VAR_2)
{
 struct efa_dev *VAR_3 = FUNC_3(VAR_1->pd->device);
 struct efa_ah *VAR_4 = FUNC_2(VAR_1);

 FUNC_1(&VAR_3->ibdev, "Destroy ah[%d]\n", VAR_4->ah);

 if (!(VAR_2 & VAR_0)) {
  FUNC_1(&VAR_3->ibdev,
     "Destroy address handle is not supported in atomic context\n");
  return;
 }

 FUNC_0(VAR_3, VAR_4);
}
