
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ dma_base; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(ide_hwif_t *VAR_0, u8 VAR_1, u8 VAR_2)
{
 FUNC_1(VAR_1, VAR_0->dma_base + 1);
 FUNC_1(VAR_2, VAR_0->dma_base + 3);
 FUNC_0("index[%02X] value[%02X]\n", VAR_1, VAR_2);
}
