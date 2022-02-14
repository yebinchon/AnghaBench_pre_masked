
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_config {scalar_t__ mode; int num_hw_channels; scalar_t__ flow; } ;
struct hsi_client {struct hsi_config rx_cfg; } ;
struct hsc_rx_config {scalar_t__ mode; int channels; scalar_t__ flow; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct hsi_client*) ;
 int FUNC_1 (struct hsi_client*) ;

__attribute__((used)) static int FUNC_2(struct hsi_client *VAR_6, struct hsc_rx_config *VAR_7)
{
 struct hsi_config VAR_8;
 int VAR_9;

 if ((VAR_7->mode != VAR_5) && (VAR_7->mode != VAR_4))
  return -VAR_0;
 if ((VAR_7->channels == 0) || (VAR_7->channels > VAR_1))
  return -VAR_0;
 if (VAR_7->channels & (VAR_7->channels - 1))
  return -VAR_0;
 if ((VAR_7->flow != VAR_3) && (VAR_7->flow != VAR_2))
  return -VAR_0;
 VAR_8 = VAR_6->rx_cfg;
 VAR_6->rx_cfg.mode = VAR_7->mode;
 VAR_6->rx_cfg.num_hw_channels = VAR_7->channels;
 VAR_6->rx_cfg.flow = VAR_7->flow;
 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0) {
  VAR_6->rx_cfg = VAR_8;
  return VAR_9;
 }
 if (VAR_7->mode == VAR_4)
  FUNC_0(VAR_6);

 return VAR_9;
}
