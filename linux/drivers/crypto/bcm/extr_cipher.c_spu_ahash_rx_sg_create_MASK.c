
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct spu_hw {int (* spu_rx_status_len ) () ;} ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {int rx_stat; int rx_stat_pad; int digest; int spu_resp_hdr; } ;
struct iproc_reqctx_s {TYPE_2__ msg_buf; int gfp; struct iproc_ctx_s* ctx; } ;
struct iproc_ctx_s {int spu_resp_hdr_len; } ;
struct TYPE_4__ {struct scatterlist* dst; } ;
struct brcm_message {TYPE_1__ spu; } ;
struct TYPE_6__ {struct spu_hw spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 struct scatterlist* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct scatterlist*,int ) ;
 int FUNC_3 (struct scatterlist*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct brcm_message *VAR_3,
         struct iproc_reqctx_s *VAR_4,
         u8 VAR_5, unsigned int VAR_6,
         u32 VAR_7)
{
 struct spu_hw *VAR_8 = &VAR_2.spu;
 struct scatterlist *VAR_9;
 struct iproc_ctx_s *VAR_10 = VAR_4->ctx;

 VAR_3->spu.dst = FUNC_0(VAR_5, sizeof(struct scatterlist),
    VAR_4->gfp);
 if (!VAR_3->spu.dst)
  return -VAR_0;

 VAR_9 = VAR_3->spu.dst;
 FUNC_2(VAR_9, VAR_5);

 FUNC_3(VAR_9++, VAR_4->msg_buf.spu_resp_hdr, VAR_10->spu_resp_hdr_len);


 FUNC_3(VAR_9++, VAR_4->msg_buf.digest, VAR_6);

 if (VAR_7)
  FUNC_3(VAR_9++, VAR_4->msg_buf.rx_stat_pad, VAR_7);

 FUNC_1(VAR_4->msg_buf.rx_stat, 0, VAR_1);
 FUNC_3(VAR_9, VAR_4->msg_buf.rx_stat, VAR_8->spu_rx_status_len());
 return 0;
}
