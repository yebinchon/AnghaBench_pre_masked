
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned long dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(ide_drive_t *VAR_0)
{
 ide_hwif_t *VAR_1 = VAR_0->hwif;
 unsigned long VAR_2 = VAR_1->dma_base;
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2+2);

 if (!(VAR_3 & 4))
  FUNC_2(" ide_dma_end dma_stat=%0x err=%x newerr=%x\n",
    VAR_3, ((VAR_3&7)!=4), ((VAR_3&2)==2));

 FUNC_1(VAR_3|0x1b, VAR_2+2);
 FUNC_1(FUNC_0(VAR_2)&~1, VAR_2);

 return (VAR_3 & 7) != 4;
}
