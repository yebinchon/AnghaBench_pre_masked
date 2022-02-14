
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dma_channel_params {scalar_t__ write_prio; scalar_t__ read_prio; int dst_fi; int dst_ei; int dst_start; int dst_amode; int dst_port; int src_fi; int src_ei; int src_start; int src_amode; int src_port; int src_or_dst_synch; int trigger; int sync_mode; int frame_count; int elem_count; int data_type; } ;


 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int,int ,int ,int ,int ,int ,int ) ;

void FUNC_4(int VAR_0, struct omap_dma_channel_params *VAR_1)
{
 FUNC_3(VAR_0, VAR_1->data_type,
         VAR_1->elem_count, VAR_1->frame_count,
         VAR_1->sync_mode, VAR_1->trigger,
         VAR_1->src_or_dst_synch);
 FUNC_2(VAR_0, VAR_1->src_port,
    VAR_1->src_amode, VAR_1->src_start,
    VAR_1->src_ei, VAR_1->src_fi);

 FUNC_1(VAR_0, VAR_1->dst_port,
     VAR_1->dst_amode, VAR_1->dst_start,
     VAR_1->dst_ei, VAR_1->dst_fi);
 if (VAR_1->read_prio || VAR_1->write_prio)
  FUNC_0(VAR_0, VAR_1->read_prio,
          VAR_1->write_prio);
}
