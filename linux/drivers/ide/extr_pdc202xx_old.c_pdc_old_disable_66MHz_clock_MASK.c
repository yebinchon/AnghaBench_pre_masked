
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int extra_base; scalar_t__ channel; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_0)
{
 unsigned long VAR_1 = VAR_0->extra_base + 0x01;
 u8 VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2 & ~(VAR_0->channel ? 0x08 : 0x02), VAR_1);
}
