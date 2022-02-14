
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm5974_config {scalar_t__ tp_type; int um_size; size_t um_switch_idx; char um_switch_on; char um_switch_off; int um_req_idx; int um_req_val; } ;
struct bcm5974 {TYPE_1__* intf; int udev; struct bcm5974_config cfg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,char*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct bcm5974 *VAR_10, bool VAR_11)
{
 const struct bcm5974_config *VAR_12 = &VAR_10->cfg;
 int VAR_13 = 0, VAR_14;
 char *VAR_15;


 if (VAR_12->tp_type == VAR_5)
  return 0;

 VAR_15 = FUNC_3(VAR_12->um_size, VAR_4);
 if (!VAR_15) {
  FUNC_0(&VAR_10->intf->dev, "out of memory\n");
  VAR_13 = -VAR_3;
  goto out;
 }


 VAR_14 = FUNC_4(VAR_10->udev, FUNC_5(VAR_10->udev, 0),
   VAR_0,
   VAR_6 | VAR_9 | VAR_8,
   VAR_12->um_req_val, VAR_12->um_req_idx, VAR_15, VAR_12->um_size, 5000);

 if (VAR_14 != VAR_12->um_size) {
  FUNC_0(&VAR_10->intf->dev, "could not read from device\n");
  VAR_13 = -VAR_2;
  goto out;
 }


 VAR_15[VAR_12->um_switch_idx] = VAR_11 ? VAR_12->um_switch_on : VAR_12->um_switch_off;


 VAR_14 = FUNC_4(VAR_10->udev, FUNC_6(VAR_10->udev, 0),
   VAR_1,
   VAR_7 | VAR_9 | VAR_8,
   VAR_12->um_req_val, VAR_12->um_req_idx, VAR_15, VAR_12->um_size, 5000);

 if (VAR_14 != VAR_12->um_size) {
  FUNC_0(&VAR_10->intf->dev, "could not write to device\n");
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_1(2, "bcm5974: switched to %s mode.\n",
  VAR_11 ? "wellspring" : "normal");

 out:
 FUNC_2(VAR_15);
 return VAR_13;
}
