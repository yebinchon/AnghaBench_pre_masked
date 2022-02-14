
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uPD98402_priv {int dummy; } ;
struct k_sonet_stats {int dummy; } ;
struct atm_dev {int dev_data; } ;
struct TYPE_3__ {int rx_cells; int tx_cells; int corr_hcs; } ;
struct TYPE_4__ {TYPE_1__ sonet_stats; int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (struct atm_dev*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct atm_dev*,int *,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(struct atm_dev *VAR_14)
{
 FUNC_0("phy_start\n");
 if (!(VAR_14->dev_data = FUNC_6(sizeof(struct uPD98402_priv),VAR_1)))
  return -VAR_0;
 FUNC_8(&FUNC_2(VAR_14)->lock);
 FUNC_7(&FUNC_2(VAR_14)->sonet_stats,0,sizeof(struct k_sonet_stats));
 (void) FUNC_1(VAR_5);
 FUNC_3(VAR_13,VAR_2);
 (void) FUNC_1(VAR_3);
 FUNC_3(~VAR_12,VAR_4);
 (void) FUNC_1(VAR_6);
 FUNC_3(~(VAR_10 | VAR_8 | VAR_11 |
   VAR_9),VAR_7);
 (void) FUNC_5(VAR_14,((void*)0),1);
 FUNC_4(&FUNC_2(VAR_14)->sonet_stats.corr_hcs,-1);
 FUNC_4(&FUNC_2(VAR_14)->sonet_stats.tx_cells,-1);
 FUNC_4(&FUNC_2(VAR_14)->sonet_stats.rx_cells,-1);
 return 0;
}
