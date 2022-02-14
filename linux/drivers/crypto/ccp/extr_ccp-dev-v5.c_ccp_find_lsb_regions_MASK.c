
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ccp_cmd_queue {int id; TYPE_1__* ccp; int lsbmask; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ccp_cmd_queue *VAR_3, u64 VAR_4)
{
 int VAR_5 = 1 << VAR_3->id;
 int VAR_6 = 0;
 int VAR_7;




 for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_4 & VAR_5)
   FUNC_0(VAR_3->lsbmask, VAR_7, 1);
  VAR_4 >>= VAR_1;
 }
 VAR_6 = FUNC_1(VAR_3->lsbmask, VAR_2);
 FUNC_2(VAR_3->ccp->dev, "Queue %d can access %d LSB regions\n",
   VAR_3->id, VAR_6);

 return VAR_6 ? 0 : -VAR_0;
}
