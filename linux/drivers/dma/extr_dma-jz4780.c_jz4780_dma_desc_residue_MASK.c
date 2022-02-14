
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jz4780_dma_dev {int dummy; } ;
struct jz4780_dma_desc {unsigned int count; TYPE_1__* desc; } ;
struct jz4780_dma_chan {unsigned int transfer_shift; int id; } ;
struct TYPE_2__ {unsigned int dtc; } ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct jz4780_dma_dev* FUNC_1 (struct jz4780_dma_chan*) ;
 scalar_t__ FUNC_2 (struct jz4780_dma_dev*,int ,int ) ;

__attribute__((used)) static size_t FUNC_3(struct jz4780_dma_chan *VAR_1,
 struct jz4780_dma_desc *VAR_2, unsigned int VAR_3)
{
 struct jz4780_dma_dev *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;

 for (VAR_6 = VAR_3; VAR_6 < VAR_2->count; VAR_6++)
  VAR_5 += VAR_2->desc[VAR_6].dtc & FUNC_0(23, 0);

 if (VAR_3 != 0)
  VAR_5 += FUNC_2(VAR_4, VAR_1->id,
      VAR_0);

 return VAR_5 << VAR_1->transfer_shift;
}
