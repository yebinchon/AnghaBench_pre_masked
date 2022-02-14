
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_tdma_desc {int dummy; } ;
struct mv_cesa_op_ctx {int dummy; } ;
struct mv_cesa_dev_dma {void* padding_pool; void* cache_pool; void* op_pool; void* tdma_desc_pool; } ;
struct mv_cesa_dev {struct mv_cesa_dev_dma* dma; TYPE_1__* caps; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int has_tdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mv_cesa_dev_dma* FUNC_0 (struct device*,int,int ) ;
 void* FUNC_1 (char*,struct device*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mv_cesa_dev *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct mv_cesa_dev_dma *VAR_5;

 if (!VAR_3->caps->has_tdma)
  return 0;

 VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->tdma_desc_pool = FUNC_1("tdma_desc", VAR_4,
     sizeof(struct mv_cesa_tdma_desc),
     16, 0);
 if (!VAR_5->tdma_desc_pool)
  return -VAR_1;

 VAR_5->op_pool = FUNC_1("cesa_op", VAR_4,
     sizeof(struct mv_cesa_op_ctx), 16, 0);
 if (!VAR_5->op_pool)
  return -VAR_1;

 VAR_5->cache_pool = FUNC_1("cesa_cache", VAR_4,
        VAR_0, 1, 0);
 if (!VAR_5->cache_pool)
  return -VAR_1;

 VAR_5->padding_pool = FUNC_1("cesa_padding", VAR_4, 72, 1, 0);
 if (!VAR_5->padding_pool)
  return -VAR_1;

 VAR_3->dma = VAR_5;

 return 0;
}
