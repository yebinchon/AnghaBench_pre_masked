
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu_softc {int sc_cmd_phys; int sc_mailbox; int sc_bt; int sc_cmd_dmamap; int sc_dmatag; TYPE_1__* sc_cmd; struct smu_cmd* sc_cur_cmd; scalar_t__ sc_u3; int sc_mtx; } ;
struct smu_cmd {int data; int len; int cmd; } ;
typedef int device_t ;
struct TYPE_2__ {int data; int len; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct smu_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(device_t VAR_5, struct smu_cmd *VAR_6)
{
 struct smu_softc *VAR_7;

 VAR_7 = FUNC_2(VAR_5);

 FUNC_5(&VAR_7->sc_mtx, VAR_2);

 if (VAR_7->sc_u3)
  VAR_3 = 0;

 VAR_7->sc_cur_cmd = VAR_6;


 VAR_7->sc_cmd->cmd = VAR_6->cmd;
 VAR_7->sc_cmd->len = VAR_6->len;
 FUNC_4(VAR_7->sc_cmd->data, VAR_6->data, sizeof(VAR_6->data));
 FUNC_0(VAR_7->sc_dmatag, VAR_7->sc_cmd_dmamap, VAR_0);
 FUNC_1(VAR_7->sc_bt, VAR_7->sc_mailbox, 0, VAR_7->sc_cmd_phys);


 __asm __volatile("sync; dcbf 0,%0; sync" :: "r"(VAR_7->sc_cmd): "memory");


 FUNC_3(VAR_4, VAR_1);
}
