
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct via82cxxx_dev {int via_80w; TYPE_1__* via_config; } ;
struct TYPE_2__ {int udma_mask; } ;






__attribute__((used)) static void FUNC_0(struct via82cxxx_dev *VAR_0, u32 VAR_1)
{
 int VAR_2;

 switch (VAR_0->via_config->udma_mask) {
  case 130:
   for (VAR_2 = 24; VAR_2 >= 0; VAR_2 -= 8)
    if (((VAR_1 >> (VAR_2 & 16)) & 8) &&
        ((VAR_1 >> VAR_2) & 0x20) &&
         (((VAR_1 >> VAR_2) & 7) < 2)) {




     VAR_0->via_80w |= (1 << (1 - (VAR_2 >> 4)));
    }
   break;

  case 129:
   for (VAR_2 = 24; VAR_2 >= 0; VAR_2 -= 8)
    if (((VAR_1 >> VAR_2) & 0x10) ||
        (((VAR_1 >> VAR_2) & 0x20) &&
         (((VAR_1 >> VAR_2) & 7) < 4))) {



     VAR_0->via_80w |= (1 << (1 - (VAR_2 >> 4)));
    }
   break;

  case 128:
   for (VAR_2 = 24; VAR_2 >= 0; VAR_2 -= 8)
    if (((VAR_1 >> VAR_2) & 0x10) ||
        (((VAR_1 >> VAR_2) & 0x20) &&
         (((VAR_1 >> VAR_2) & 7) < 6))) {



     VAR_0->via_80w |= (1 << (1 - (VAR_2 >> 4)));
    }
   break;
 }
}
