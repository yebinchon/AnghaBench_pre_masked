
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_device {int cmd_q_count; int dev; struct ccp_cmd_queue* cmd_q; } ;
struct ccp_cmd_queue {int lsb; int lsbmask; } ;


 int FUNC_0 (unsigned long*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,int,int) ;
 int FUNC_2 (unsigned long*,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*,int,int) ;
 int FUNC_5 (unsigned long*,int) ;
 unsigned long* VAR_2 ;
 scalar_t__ FUNC_6 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct ccp_device *VAR_3,
     int VAR_4, int VAR_5,
     unsigned long *VAR_6)
{
 FUNC_0(VAR_2, VAR_1);
 int VAR_7;
 int VAR_8;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_3->cmd_q_count; VAR_9++) {
  struct ccp_cmd_queue *VAR_10 = &VAR_3->cmd_q[VAR_9];

  VAR_8 = FUNC_3(VAR_10->lsbmask, VAR_1);

  if (VAR_8 == VAR_4) {
   FUNC_2(VAR_2, VAR_10->lsbmask, VAR_1);

   VAR_7 = FUNC_5(VAR_2, VAR_1);
   while (VAR_7 < VAR_1) {
    if (FUNC_6(VAR_7, VAR_6)) {



     VAR_10->lsb = VAR_7;
     FUNC_1(VAR_6, VAR_7, 1);
     FUNC_4(VAR_3->dev,
       "Queue %d gets LSB %d\n",
       VAR_9, VAR_7);
     break;
    }
    FUNC_1(VAR_2, VAR_7, 1);
    VAR_7 = FUNC_5(VAR_2, VAR_1);
   }
   if (VAR_7 >= VAR_1)
    return -VAR_0;
   VAR_5--;
  }
 }
 return VAR_5;
}
