
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdma_desc {int num_bd; struct sdma_channel* sdmac; scalar_t__ buf_ptail; scalar_t__ buf_tail; scalar_t__ chn_real_count; scalar_t__ chn_count; } ;
struct sdma_channel {int direction; scalar_t__ flags; int status; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdma_desc*) ;
 struct sdma_desc* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sdma_desc*) ;
 int FUNC_3 (struct sdma_channel*,int,int,int) ;
 scalar_t__ FUNC_4 (struct sdma_channel*) ;

__attribute__((used)) static struct sdma_desc *FUNC_5(struct sdma_channel *VAR_3,
    enum dma_transfer_direction VAR_4, u32 VAR_5)
{
 struct sdma_desc *VAR_6;

 VAR_6 = FUNC_1((sizeof(*VAR_6)), VAR_2);
 if (!VAR_6)
  goto err_out;

 VAR_3->status = VAR_0;
 VAR_3->direction = VAR_4;
 VAR_3->flags = 0;

 VAR_6->chn_count = 0;
 VAR_6->chn_real_count = 0;
 VAR_6->buf_tail = 0;
 VAR_6->buf_ptail = 0;
 VAR_6->sdmac = VAR_3;
 VAR_6->num_bd = VAR_5;

 if (FUNC_2(VAR_6))
  goto err_desc_out;


 if (VAR_4 == VAR_1)
  FUNC_3(VAR_3, 0, 1, 0);

 if (FUNC_4(VAR_3))
  goto err_desc_out;

 return VAR_6;

err_desc_out:
 FUNC_0(VAR_6);
err_out:
 return ((void*)0);
}
