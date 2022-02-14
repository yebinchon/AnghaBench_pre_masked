
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** sc_saved_regs; } ;
typedef TYPE_1__ dbdma_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(dbdma_channel_t *VAR_5)
{

 VAR_5->sc_saved_regs[0] = FUNC_0(VAR_5, VAR_1);
 VAR_5->sc_saved_regs[1] = FUNC_0(VAR_5, VAR_2);
 VAR_5->sc_saved_regs[2] = FUNC_0(VAR_5, VAR_3);
 VAR_5->sc_saved_regs[3] = FUNC_0(VAR_5, VAR_0);
 VAR_5->sc_saved_regs[4] = FUNC_0(VAR_5, VAR_4);

 FUNC_1(VAR_5);
}
