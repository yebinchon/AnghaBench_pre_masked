
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ioatdma_chan {scalar_t__ reg_base; TYPE_1__* ioat_dma; } ;
struct TYPE_2__ {int version; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ioatdma_chan *VAR_1)
{
 u8 VAR_2 = VAR_1->ioat_dma->version;

 FUNC_1(VAR_0,
        VAR_1->reg_base + FUNC_0(VAR_2));
}
