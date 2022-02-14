
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs_hsi_iface {int iface_state; TYPE_1__* cl; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct cs_hsi_iface *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  FUNC_0(&VAR_2->cl->device,
   "closing data channel with slot size 0\n");
  VAR_2->iface_state = VAR_1;
 }
}
