
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {int args_count; scalar_t__* args; } ;
struct of_dma {struct dw_dma* of_dma_data; } ;
struct dw_dma_slave {scalar_t__ src_id; scalar_t__ dst_id; scalar_t__ m_master; scalar_t__ p_master; int dma_dev; } ;
struct TYPE_3__ {int dev; } ;
struct dw_dma {TYPE_2__* pdata; TYPE_1__ dma; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_4__ {scalar_t__ nr_masters; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct dma_chan* FUNC_3 (int ,int ,struct dw_dma_slave*) ;
 int VAR_2 ;

__attribute__((used)) static struct dma_chan *FUNC_4(struct of_phandle_args *VAR_3,
     struct of_dma *VAR_4)
{
 struct dw_dma *VAR_5 = VAR_4->of_dma_data;
 struct dw_dma_slave VAR_6 = {
  .dma_dev = VAR_5->dma.dev,
 };
 dma_cap_mask_t VAR_7;

 if (VAR_3->args_count != 3)
  return ((void*)0);

 VAR_6.src_id = VAR_3->args[0];
 VAR_6.dst_id = VAR_3->args[0];
 VAR_6.m_master = VAR_3->args[1];
 VAR_6.p_master = VAR_3->args[2];

 if (FUNC_0(VAR_6.src_id >= VAR_1 ||
      VAR_6.dst_id >= VAR_1 ||
      VAR_6.m_master >= VAR_5->pdata->nr_masters ||
      VAR_6.p_master >= VAR_5->pdata->nr_masters))
  return ((void*)0);

 FUNC_2(VAR_7);
 FUNC_1(VAR_0, VAR_7);


 return FUNC_3(VAR_7, VAR_2, &VAR_6);
}
