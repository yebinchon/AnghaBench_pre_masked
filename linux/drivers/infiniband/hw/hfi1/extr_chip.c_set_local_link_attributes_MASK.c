
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct hfi1_pportdata {int local_tx_rate; int link_speed_enabled; int link_width_enabled; int port_crc_mode_enabled; struct hfi1_devdata* dd; } ;
struct hfi1_devdata {scalar_t__ dc8051_ver; int minrev; TYPE_1__* pcidev; int vl15_init; int vcu; int vau; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct hfi1_devdata*,char*,int) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hfi1_devdata*,int*,int*,int*,int*) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_7 (struct hfi1_devdata*,int,int,int,int) ;
 int FUNC_8 (struct hfi1_devdata*,int ,int,int ,int ,int ) ;
 int FUNC_9 (struct hfi1_devdata*,int,int ,int ) ;
 int FUNC_10 (struct hfi1_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct hfi1_pportdata *VAR_8)
{
 struct hfi1_devdata *VAR_9 = VAR_8->dd;
 u8 VAR_10;
 u8 VAR_11;
 u8 VAR_12;
 int VAR_13;
 u32 VAR_14 = 0;

 FUNC_2(VAR_9);


 VAR_13 = FUNC_4(VAR_9, &VAR_10, &VAR_11,
          &VAR_12, &VAR_8->local_tx_rate);
 if (VAR_13)
  goto set_local_link_attributes_fail;

 if (VAR_9->dc8051_ver < FUNC_0(0, 20, 0)) {

  if (VAR_8->link_speed_enabled & VAR_6)
   VAR_8->local_tx_rate = 1;
  else
   VAR_8->local_tx_rate = 0;
 } else {

  VAR_8->local_tx_rate = 0;
  if (VAR_8->link_speed_enabled & VAR_6)
   VAR_8->local_tx_rate |= 2;
  if (VAR_8->link_speed_enabled & VAR_5)
   VAR_8->local_tx_rate |= 1;
 }

 VAR_10 = 0xF;
 VAR_13 = FUNC_7(VAR_9, VAR_10, VAR_11,
    VAR_12, VAR_8->local_tx_rate);
 if (VAR_13 != VAR_1)
  goto set_local_link_attributes_fail;

 VAR_13 = FUNC_5(VAR_9, VAR_2);
 if (VAR_13 != VAR_1) {
  FUNC_1(VAR_9,
      "Failed to set host interface version, return 0x%x\n",
      VAR_13);
  goto set_local_link_attributes_fail;
 }




 VAR_13 = FUNC_10(VAR_9,
     0 ,
     1 );
 if (VAR_13 != VAR_1)
  goto set_local_link_attributes_fail;


 VAR_13 = FUNC_8(VAR_9, VAR_9->vau, 1, VAR_9->vcu, VAR_9->vl15_init,
        VAR_8->port_crc_mode_enabled);
 if (VAR_13 != VAR_1)
  goto set_local_link_attributes_fail;





 if (VAR_7 == VAR_3)
  VAR_14 |= 1 << VAR_4;






 if (VAR_9->dc8051_ver >= FUNC_0(1, 25, 0))
  VAR_14 |= 1 << VAR_0;

 VAR_13 = FUNC_9(VAR_9, VAR_14, 0,
           FUNC_3(
      VAR_8->link_width_enabled));
 if (VAR_13 != VAR_1)
  goto set_local_link_attributes_fail;


 VAR_13 = FUNC_6(VAR_9, VAR_9->pcidev->device, VAR_9->minrev);
 if (VAR_13 == VAR_1)
  return 0;

set_local_link_attributes_fail:
 FUNC_1(VAR_9,
     "Failed to set local link attributes, return 0x%x\n",
     VAR_13);
 return VAR_13;
}
