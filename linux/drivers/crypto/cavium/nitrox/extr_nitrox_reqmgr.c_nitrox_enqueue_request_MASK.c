
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nitrox_softreq {int flags; struct nitrox_device* ndev; struct nitrox_cmdq* cmdq; } ;
struct TYPE_2__ {int dropped; } ;
struct nitrox_device {TYPE_1__ stats; int qlen; } ;
struct nitrox_cmdq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nitrox_softreq*,struct nitrox_cmdq*) ;
 int FUNC_2 (struct nitrox_cmdq*,int ) ;
 int FUNC_3 (struct nitrox_cmdq*) ;
 int FUNC_4 (struct nitrox_softreq*,struct nitrox_cmdq*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct nitrox_softreq *VAR_3)
{
 struct nitrox_cmdq *VAR_4 = VAR_3->cmdq;
 struct nitrox_device *VAR_5 = VAR_3->ndev;


 FUNC_3(VAR_4);

 if (FUNC_5(FUNC_2(VAR_4, VAR_5->qlen))) {
  if (!(VAR_3->flags & VAR_0)) {

   FUNC_0(&VAR_5->stats.dropped);
   return -VAR_2;
  }

  FUNC_1(VAR_3, VAR_4);
  return -VAR_1;
 }
 FUNC_4(VAR_3, VAR_4);

 return -VAR_1;
}
