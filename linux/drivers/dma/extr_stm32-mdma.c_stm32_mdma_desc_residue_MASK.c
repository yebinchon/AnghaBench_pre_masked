
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct stm32_mdma_hwdesc {int cbndtr; } ;
struct stm32_mdma_device {int dummy; } ;
struct stm32_mdma_desc {int count; TYPE_1__* node; } ;
struct stm32_mdma_chan {int mem_burst; int mem_width; int id; } ;
struct TYPE_2__ {struct stm32_mdma_hwdesc* hwdesc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 struct stm32_mdma_device* FUNC_2 (struct stm32_mdma_chan*) ;
 int FUNC_3 (struct stm32_mdma_device*,int ) ;

__attribute__((used)) static size_t FUNC_4(struct stm32_mdma_chan *VAR_1,
          struct stm32_mdma_desc *VAR_2,
          u32 VAR_3)
{
 struct stm32_mdma_device *VAR_4 = FUNC_2(VAR_1);
 struct stm32_mdma_hwdesc *VAR_5 = VAR_2->node[0].hwdesc;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = 0;
 for (VAR_10 = VAR_3 + 1; VAR_10 < VAR_2->count; VAR_10++) {
  VAR_5 = VAR_2->node[VAR_10].hwdesc;
  VAR_7 += FUNC_1(VAR_5->cbndtr);
 }
 VAR_6 = FUNC_3(VAR_4, FUNC_0(VAR_1->id));
 VAR_7 += VAR_6 & VAR_0;

 if (!VAR_1->mem_burst)
  return VAR_7;

 VAR_9 = VAR_1->mem_burst * VAR_1->mem_width;
 VAR_8 = VAR_7 % VAR_9;
 if (VAR_8)
  VAR_7 = VAR_7 - VAR_8 + VAR_9;

 return VAR_7;
}
