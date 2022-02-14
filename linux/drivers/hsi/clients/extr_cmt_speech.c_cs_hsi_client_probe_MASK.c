
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsi_client {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int channel_id_cmd; int channel_id_data; int dataind_queue; int chardev_queue; int * hi; struct hsi_client* cl; scalar_t__ opened; int lock; int wait; } ;


 int FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct hsi_client*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hsi_client* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_2)
{
 int VAR_3 = 0;
 struct hsi_client *VAR_4 = FUNC_7(VAR_2);

 FUNC_1(VAR_2, "hsi_client_probe\n");
 FUNC_4(&VAR_0.wait);
 FUNC_6(&VAR_0.lock);
 VAR_0.opened = 0;
 VAR_0.cl = VAR_4;
 VAR_0.hi = ((void*)0);
 FUNC_0(&VAR_0.chardev_queue);
 FUNC_0(&VAR_0.dataind_queue);

 VAR_0.channel_id_cmd = FUNC_3(VAR_4,
  "speech-control");
 if (VAR_0.channel_id_cmd < 0) {
  VAR_3 = VAR_0.channel_id_cmd;
  FUNC_2(VAR_2, "Could not get cmd channel (%d)\n", VAR_3);
  return VAR_3;
 }

 VAR_0.channel_id_data = FUNC_3(VAR_4,
  "speech-data");
 if (VAR_0.channel_id_data < 0) {
  VAR_3 = VAR_0.channel_id_data;
  FUNC_2(VAR_2, "Could not get data channel (%d)\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_5(&VAR_1);
 if (VAR_3)
  FUNC_2(VAR_2, "Failed to register: %d\n", VAR_3);

 return VAR_3;
}
