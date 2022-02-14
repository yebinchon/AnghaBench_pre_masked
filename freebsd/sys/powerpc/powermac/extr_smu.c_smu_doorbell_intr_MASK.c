
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smu_softc {int sc_mtx; TYPE_2__* sc_cur_cmd; int sc_cmdq; scalar_t__ sc_u3; TYPE_1__* sc_cmd; int sc_cmd_dmamap; int sc_dmatag; } ;
typedef void* device_t ;
struct TYPE_6__ {int data; int len; int cmd; } ;
struct TYPE_5__ {int data; int len; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 struct smu_softc* FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (void*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7)
{
 device_t VAR_8;
 struct smu_softc *VAR_9;
 int VAR_10;

 VAR_8 = VAR_7;
 VAR_10 = FUNC_4(VAR_6);
 VAR_9 = FUNC_3(VAR_8);

 if (VAR_10 != (VAR_2 | VAR_3 | VAR_1))
  return;

 FUNC_6(&VAR_9->sc_mtx);

 if (VAR_9->sc_cur_cmd == ((void*)0))
  goto done;


 __asm __volatile("dcbf 0,%0; sync" :: "r"(VAR_9->sc_cmd) : "memory");

 FUNC_2(VAR_9->sc_dmatag, VAR_9->sc_cmd_dmamap, VAR_0);

 VAR_9->sc_cur_cmd->cmd = VAR_9->sc_cmd->cmd;
 VAR_9->sc_cur_cmd->len = VAR_9->sc_cmd->len;
 FUNC_5(VAR_9->sc_cur_cmd->data, VAR_9->sc_cmd->data,
     sizeof(VAR_9->sc_cmd->data));
 FUNC_9(VAR_9->sc_cur_cmd);
 VAR_9->sc_cur_cmd = ((void*)0);
 if (VAR_9->sc_u3)
  VAR_5 = 1;

    done:

 if (FUNC_0(&VAR_9->sc_cmdq) != ((void*)0)) {
  VAR_9->sc_cur_cmd = FUNC_0(&VAR_9->sc_cmdq);
  FUNC_1(&VAR_9->sc_cmdq, VAR_4);
  FUNC_8(VAR_8, VAR_9->sc_cur_cmd);
 }

 FUNC_7(&VAR_9->sc_mtx);
}
