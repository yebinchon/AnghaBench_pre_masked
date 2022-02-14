
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int client_count; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ privatecnt; int cap_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dma_chan*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct dma_chan *VAR_2)
{
 FUNC_3(&VAR_1);
 FUNC_0(VAR_2->client_count != 1,
    "chan reference count %d != 1\n", VAR_2->client_count);
 FUNC_2(VAR_2);

 if (--VAR_2->device->privatecnt == 0)
  FUNC_1(VAR_0, VAR_2->device->cap_mask);
 FUNC_4(&VAR_1);
}
