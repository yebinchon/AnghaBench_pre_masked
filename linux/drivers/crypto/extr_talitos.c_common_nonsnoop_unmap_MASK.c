
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ptr; } ;
struct talitos_edesc {scalar_t__ dma_len; int dma_link_tbl; TYPE_1__ desc; } ;
struct device {int dummy; } ;
struct ablkcipher_request {int nbytes; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_1 (struct device*,struct talitos_edesc*,int ,int ,int ,int ) ;
 int FUNC_2 (struct device*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_3,
      struct talitos_edesc *VAR_4,
      struct ablkcipher_request *VAR_5)
{
 FUNC_2(VAR_3, &VAR_4->desc.ptr[5], VAR_1);

 FUNC_1(VAR_3, VAR_4, VAR_5->src, VAR_5->dst, VAR_5->nbytes, 0);
 FUNC_2(VAR_3, &VAR_4->desc.ptr[1], VAR_2);

 if (VAR_4->dma_len)
  FUNC_0(VAR_3, VAR_4->dma_link_tbl, VAR_4->dma_len,
     VAR_0);
}
