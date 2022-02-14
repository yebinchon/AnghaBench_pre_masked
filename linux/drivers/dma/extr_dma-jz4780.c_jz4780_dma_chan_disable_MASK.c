
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jz4780_dma_dev {TYPE_1__* soc_data; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct jz4780_dma_dev*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct jz4780_dma_dev *VAR_3,
 unsigned int VAR_4)
{
 if ((VAR_3->soc_data->flags & VAR_2) &&
   !(VAR_3->soc_data->flags & VAR_1))
  FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_4));
}
