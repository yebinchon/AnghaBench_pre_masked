
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* MCI_RSPR; } ;
typedef int AT91PS_MciDevice ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

int FUNC_1 (AT91PS_MciDevice VAR_5, unsigned int *VAR_6)
{
  if(FUNC_0(VAR_5,
       VAR_0,
       VAR_4) != VAR_3)
  return VAR_2;

    VAR_6[0] = VAR_1->MCI_RSPR[0];
    VAR_6[1] = VAR_1->MCI_RSPR[1];
    VAR_6[2] = VAR_1->MCI_RSPR[2];
    VAR_6[3] = VAR_1->MCI_RSPR[3];

    return VAR_3;
}
