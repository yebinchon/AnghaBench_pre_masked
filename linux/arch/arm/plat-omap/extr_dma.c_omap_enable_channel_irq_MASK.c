
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int enabled_irqs; } ;
struct TYPE_3__ {int (* dma_write ) (int ,int ,int) ;int (* dma_read ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_4(int VAR_5)
{

 if (FUNC_0())
  VAR_4->dma_read(VAR_1, VAR_5);
 else
  VAR_4->dma_write(VAR_2, VAR_1, VAR_5);


 VAR_4->dma_write(VAR_3[VAR_5].enabled_irqs, VAR_0, VAR_5);
}
