
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dbdma_command {int dummy; } ;
struct TYPE_3__ {int sc_nslots; } ;
typedef TYPE_1__ dbdma_channel_t ;


 int VAR_0 ;

int
FUNC_0(dbdma_channel_t *VAR_1, int VAR_2)
{

 if (VAR_2 > (VAR_0 / sizeof(struct dbdma_command)))
  return (-1);

 VAR_1->sc_nslots = VAR_2;
 return (0);
}
