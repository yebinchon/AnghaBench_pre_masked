
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsu_dma_desc {int active; int nents; TYPE_1__* sg; } ;
struct hsu_dma_chan {struct hsu_dma_desc* desc; } ;
struct TYPE_2__ {scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct hsu_dma_chan*,int ) ;

__attribute__((used)) static size_t FUNC_2(struct hsu_dma_chan *VAR_1)
{
 struct hsu_dma_desc *VAR_2 = VAR_1->desc;
 size_t VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = VAR_2->active; VAR_4 < VAR_2->nents; VAR_4++)
  VAR_3 += VAR_2->sg[VAR_4].len;

 VAR_4 = VAR_0 - 1;
 do {
  VAR_3 += FUNC_1(VAR_1, FUNC_0(VAR_4));
 } while (--VAR_4 >= 0);

 return VAR_3;
}
