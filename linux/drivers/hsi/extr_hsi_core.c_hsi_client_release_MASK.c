
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct hsi_client* channels; } ;
struct TYPE_3__ {struct hsi_client* channels; } ;
struct hsi_client {TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct hsi_client*) ;
 struct hsi_client* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct hsi_client *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tx_cfg.channels);
 FUNC_0(VAR_1->rx_cfg.channels);
 FUNC_0(VAR_1);
}
