
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int channels; int copy_align; int device_issue_pending; int device_prep_dma_interrupt; int device_prep_dma_imm_data; int device_prep_dma_memcpy; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int cap_mask; } ;
struct mic_dma_device {int start_ch; TYPE_2__ dma_dev; TYPE_1__* mic_ch; } ;
typedef enum mic_dma_chan_owner { ____Placeholder_mic_dma_chan_owner } mic_dma_chan_owner ;
struct TYPE_6__ {int device_node; TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_3__ api_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct mic_dma_device *VAR_12,
           enum mic_dma_chan_owner VAR_13)
{
 int VAR_14, VAR_15 = VAR_12->start_ch;

 FUNC_2(VAR_12->dma_dev.cap_mask);




 FUNC_1(VAR_0, VAR_12->dma_dev.cap_mask);

 if (VAR_3 == VAR_13)
  FUNC_1(VAR_1, VAR_12->dma_dev.cap_mask);
 VAR_12->dma_dev.device_alloc_chan_resources =
  VAR_5;
 VAR_12->dma_dev.device_free_chan_resources =
  VAR_6;
 VAR_12->dma_dev.device_tx_status = VAR_11;
 VAR_12->dma_dev.device_prep_dma_memcpy = VAR_9;
 VAR_12->dma_dev.device_prep_dma_imm_data =
  VAR_10;
 VAR_12->dma_dev.device_prep_dma_interrupt =
  VAR_8;
 VAR_12->dma_dev.device_issue_pending = VAR_7;
 VAR_12->dma_dev.copy_align = VAR_2;
 FUNC_0(&VAR_12->dma_dev.channels);
 for (VAR_14 = VAR_15; VAR_14 < VAR_15 + VAR_4; VAR_14++) {
  VAR_12->mic_ch[VAR_14].api_ch.device = &VAR_12->dma_dev;
  FUNC_3(&VAR_12->mic_ch[VAR_14].api_ch);
  FUNC_5(&VAR_12->mic_ch[VAR_14].api_ch.device_node,
         &VAR_12->dma_dev.channels);
 }
 return FUNC_4(&VAR_12->dma_dev);
}
