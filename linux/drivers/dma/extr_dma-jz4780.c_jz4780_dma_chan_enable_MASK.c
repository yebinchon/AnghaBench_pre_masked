
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jz4780_dma_dev {TYPE_1__* soc_data; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct jz4780_dma_dev*,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct jz4780_dma_dev *VAR_4,
 unsigned int VAR_5)
{
 if (VAR_4->soc_data->flags & VAR_3) {
  unsigned int VAR_6;

  if (VAR_4->soc_data->flags & VAR_2)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_1;

  FUNC_1(VAR_4, VAR_6, FUNC_0(VAR_5));
 }
}
