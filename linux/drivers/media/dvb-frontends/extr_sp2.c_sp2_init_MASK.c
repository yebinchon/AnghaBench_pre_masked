
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct sp2* data; int poll_slot_status; int slot_ts_enable; int slot_shutdown; int slot_reset; int write_cam_control; int read_cam_control; int write_attribute_mem; int read_attribute_mem; int owner; } ;
struct sp2 {TYPE_1__* client; TYPE_2__ ca; int dvb_adap; scalar_t__ module_access_type; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sp2*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct sp2 *VAR_9)
{
 int VAR_10 = 0;
 u8 VAR_11;
 u8 VAR_12[34] = {
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x44,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x44,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x00,
  0x02,
  0x01,
  0x00,
  0x00,
  0x00,
  0x05,
  0x00,
  0x04,
  0x00,
  0x22,
  0x00,
 };

 FUNC_0(&VAR_9->client->dev, "\n");

 VAR_9->ca.owner = VAR_0;
 VAR_9->ca.read_attribute_mem = VAR_2;
 VAR_9->ca.write_attribute_mem = VAR_7;
 VAR_9->ca.read_cam_control = VAR_3;
 VAR_9->ca.write_cam_control = VAR_8;
 VAR_9->ca.slot_reset = VAR_4;
 VAR_9->ca.slot_shutdown = VAR_5;
 VAR_9->ca.slot_ts_enable = VAR_6;
 VAR_9->ca.poll_slot_status = VAR_1;
 VAR_9->ca.data = VAR_9;
 VAR_9->module_access_type = 0;


 VAR_10 = FUNC_2(VAR_9, 0x00, &VAR_12[0], 34);
 if (VAR_10)
  goto err;


 VAR_11 = 1;
 VAR_10 = FUNC_2(VAR_9, 0x1f, &VAR_11, 1);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_2(VAR_9, 0x18, &VAR_11, 1);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_1(VAR_9->dvb_adap, &VAR_9->ca, 0, 1);
 if (VAR_10)
  goto err;

 return 0;

err:
 FUNC_0(&VAR_9->client->dev, "init failed=%d\n", VAR_10);
 return VAR_10;
}
