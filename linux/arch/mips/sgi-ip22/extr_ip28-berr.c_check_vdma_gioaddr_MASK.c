
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int gio_dma_trans; int gmaddronly; int gio_dma_sbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_0(void)
{
 if (VAR_2 & VAR_0) {
  u32 VAR_4 = VAR_3->gio_dma_trans;
  VAR_4 = (VAR_3->gmaddronly & ~VAR_4) | (VAR_3->gio_dma_sbits & VAR_4);
  return VAR_1 == VAR_4;
 }
 return 0;
}
