
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct pasid_state {int lock; TYPE_1__* pri; int pasid; } ;
struct device_state {int pdev; } ;
struct TYPE_2__ {int finish; int status; int inflight; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,size_t) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct device_state *VAR_1,
      struct pasid_state *VAR_2,
      u16 VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 if (FUNC_1(&VAR_2->pri[VAR_3].inflight) &&
     VAR_2->pri[VAR_3].finish) {
  FUNC_0(VAR_1->pdev, VAR_2->pasid,
           VAR_2->pri[VAR_3].status, VAR_3);
  VAR_2->pri[VAR_3].finish = 0;
  VAR_2->pri[VAR_3].status = VAR_0;
 }
 FUNC_3(&VAR_2->lock, VAR_4);
}
