
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int channel; } ;
typedef TYPE_1__ ide_hwif_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u8 FUNC_0(ide_hwif_t *VAR_3)
{
 if ((VAR_2 >> VAR_3->channel) & 1)
  return VAR_1;
 else
  return VAR_0;
}
