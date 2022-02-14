
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int channels; struct device* dev; int device_terminate_all; int device_config; int device_tx_status; int device_issue_pending; int device_free_chan_resources; int device_alloc_chan_resources; int device_prep_slave_sg; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct dma_device *VAR_7, struct device *VAR_8)
{
 VAR_7->device_prep_slave_sg = VAR_3;
 VAR_7->device_alloc_chan_resources = VAR_0;
 VAR_7->device_free_chan_resources = VAR_1;
 VAR_7->device_issue_pending = VAR_2;
 VAR_7->device_tx_status = VAR_6;
 VAR_7->device_config = VAR_4;
 VAR_7->device_terminate_all = VAR_5;
 VAR_7->dev = VAR_8;

 FUNC_0(&VAR_7->channels);
}
