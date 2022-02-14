
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct talitos_private {int dummy; } ;
struct talitos_desc {scalar_t__ next_desc; TYPE_1__* ptr; } ;
struct talitos_edesc {struct talitos_desc desc; scalar_t__ dma_len; int dma_link_tbl; scalar_t__ buf; } ;
struct talitos_ahash_req_ctx {scalar_t__ nbuf; scalar_t__ psrc; } ;
struct device {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_3__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct talitos_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (scalar_t__) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (struct talitos_private*) ;
 int FUNC_6 (struct device*,struct talitos_edesc*,scalar_t__,int *,int ,int ) ;
 int FUNC_7 (struct device*,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_4,
           struct talitos_edesc *VAR_5,
           struct ahash_request *VAR_6)
{
 struct talitos_ahash_req_ctx *VAR_7 = FUNC_0(VAR_6);
 struct talitos_private *VAR_8 = FUNC_2(VAR_4);
 bool VAR_9 = FUNC_5(VAR_8);
 struct talitos_desc *VAR_10 = &VAR_5->desc;
 struct talitos_desc *VAR_11 = (struct talitos_desc *)
         (VAR_5->buf + VAR_5->dma_len);

 FUNC_7(VAR_4, &VAR_5->desc.ptr[5], VAR_1);
 if (VAR_10->next_desc &&
     VAR_10->ptr[5].ptr != VAR_11->ptr[5].ptr)
  FUNC_7(VAR_4, &VAR_11->ptr[5], VAR_1);

 if (VAR_7->psrc)
  FUNC_6(VAR_4, VAR_5, VAR_7->psrc, ((void*)0), 0, 0);


 if (FUNC_4(&VAR_5->desc.ptr[1], VAR_9))
  FUNC_7(VAR_4, &VAR_5->desc.ptr[1],
      VAR_2);
 else if (VAR_10->next_desc)
  FUNC_7(VAR_4, &VAR_11->ptr[1],
      VAR_2);

 if (VAR_9 && VAR_7->nbuf)
  FUNC_7(VAR_4, &VAR_10->ptr[3],
      VAR_2);

 if (VAR_5->dma_len)
  FUNC_3(VAR_4, VAR_5->dma_link_tbl, VAR_5->dma_len,
     VAR_0);

 if (VAR_5->desc.next_desc)
  FUNC_3(VAR_4, FUNC_1(VAR_5->desc.next_desc),
     VAR_3, VAR_0);
}
