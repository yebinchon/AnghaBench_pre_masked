
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int start; } ;
struct TYPE_7__ {int rx_dle_dma; TYPE_2__ rx_dle_q; TYPE_1__* pci; int rx_open; } ;
struct TYPE_5__ {int dev; } ;
typedef TYPE_3__ IADEV ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(IADEV *VAR_1)
{
 FUNC_1(VAR_1->rx_open);
 FUNC_0(&VAR_1->pci->dev, VAR_0, VAR_1->rx_dle_q.start,
     VAR_1->rx_dle_dma);
}
