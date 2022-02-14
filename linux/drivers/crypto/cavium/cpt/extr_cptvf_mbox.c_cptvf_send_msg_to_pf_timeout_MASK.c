
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpt_vf {int pf_acked; int pf_nacked; int vfid; TYPE_1__* pdev; } ;
struct cpt_mbox {int msg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpt_vf*,struct cpt_mbox*) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cpt_vf *VAR_3,
     struct cpt_mbox *VAR_4)
{
 int VAR_5 = VAR_0;
 int VAR_6 = 10;

 VAR_3->pf_acked = 0;
 VAR_3->pf_nacked = 0;
 FUNC_0(VAR_3, VAR_4);

 while (!VAR_3->pf_acked) {
  if (VAR_3->pf_nacked)
   return -VAR_2;
  FUNC_2(VAR_6);
  if (VAR_3->pf_acked)
   break;
  VAR_5 -= VAR_6;
  if (!VAR_5) {
   FUNC_1(&VAR_3->pdev->dev, "PF didn't ack to mbox msg %llx from VF%u\n",
    (VAR_4->msg & 0xFF), VAR_3->vfid);
   return -VAR_1;
  }
 }

 return 0;
}
