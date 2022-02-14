
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arb_mode; int speed; int num_hw_channels; int mode; } ;
struct hsi_client {TYPE_1__ tx_cfg; } ;
struct hsc_tx_config {int arb_mode; int speed; int channels; int mode; } ;



__attribute__((used)) static inline void FUNC_0(struct hsi_client *VAR_0, struct hsc_tx_config *VAR_1)
{
 VAR_1->mode = VAR_0->tx_cfg.mode;
 VAR_1->channels = VAR_0->tx_cfg.num_hw_channels;
 VAR_1->speed = VAR_0->tx_cfg.speed;
 VAR_1->arb_mode = VAR_0->tx_cfg.arb_mode;
}
