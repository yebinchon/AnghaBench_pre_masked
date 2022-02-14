
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dbdma_command {int dummy; } ;
struct TYPE_4__ {scalar_t__ sc_slots_pa; } ;
typedef TYPE_1__ dbdma_channel_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;

void
FUNC_1(dbdma_channel_t *VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = VAR_1->sc_slots_pa + VAR_2 * sizeof(struct dbdma_command);
 FUNC_0(VAR_1, VAR_0, VAR_3);
}
