
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct dw_dma_chan {TYPE_1__ active_list; } ;
struct dw_desc {int dummy; } ;


 struct dw_desc* FUNC_0 (int ) ;

__attribute__((used)) static struct dw_desc *FUNC_1(struct dw_dma_chan *VAR_0)
{
 return FUNC_0(VAR_0->active_list.next);
}
