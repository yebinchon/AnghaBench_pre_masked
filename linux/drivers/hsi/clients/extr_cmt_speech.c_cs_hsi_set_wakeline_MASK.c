
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {int wakeline_state; TYPE_1__* cl; int master; int lock; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 (int *,char*,int,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct cs_hsi_iface *VAR_0, bool VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_0->lock);
 if (VAR_0->wakeline_state != VAR_1) {
  VAR_0->wakeline_state = VAR_1;
  VAR_2 = 1;
  FUNC_0(&VAR_0->cl->device, "setting wake line to %d (%p)\n",
   VAR_1, VAR_0->cl);
 }
 FUNC_2(&VAR_0->lock);

 if (VAR_2) {
  if (VAR_1)
   FUNC_3(VAR_0->master);
  else
   FUNC_4(VAR_0->master);
 }

 FUNC_0(&VAR_0->cl->device, "wake line set to %d (%p)\n",
  VAR_1, VAR_0->cl);
}
