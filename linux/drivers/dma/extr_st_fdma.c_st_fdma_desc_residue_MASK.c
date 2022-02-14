
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct st_fdma_desc {int n_nodes; TYPE_2__* node; } ;
struct st_fdma_chan {struct st_fdma_desc* fdesc; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* desc; int pdesc; } ;
struct TYPE_3__ {scalar_t__ nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct st_fdma_chan*,int ) ;
 scalar_t__ FUNC_1 (struct st_fdma_chan*,int ) ;

__attribute__((used)) static size_t FUNC_2(struct st_fdma_chan *VAR_3,
       struct virt_dma_desc *VAR_4,
       bool VAR_5)
{
 struct st_fdma_desc *VAR_6 = VAR_3->fdesc;
 size_t VAR_7 = 0;
 dma_addr_t VAR_8 = 0;
 int VAR_9;

 if (VAR_5) {
  VAR_8 = FUNC_0(VAR_3, VAR_1);
  VAR_8 &= VAR_0;
 }

 for (VAR_9 = VAR_3->fdesc->n_nodes - 1 ; VAR_9 >= 0; VAR_9--) {
  if (VAR_8 == VAR_6->node[VAR_9].pdesc) {
   VAR_7 += FUNC_1(VAR_3, VAR_2);
   break;
  }
  VAR_7 += VAR_6->node[VAR_9].desc->nbytes;
 }

 return VAR_7;
}
