
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {TYPE_1__* usb_dev; } ;
struct device {int dummy; } ;
struct arpc_cport_quiesce_req {void* timeout; void* peer_space; void* cport_id; } ;
typedef int req ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct es2_ap_dev*,int ,struct arpc_cport_quiesce_req*,int,int*,scalar_t__) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*,unsigned int,int,int) ;
 struct es2_ap_dev* FUNC_3 (struct gb_host_device*) ;

__attribute__((used)) static int FUNC_4(struct gb_host_device *VAR_4, u16 VAR_5,
        size_t VAR_6, unsigned int VAR_7)
{
 struct es2_ap_dev *VAR_8 = FUNC_3(VAR_4);
 struct device *VAR_9 = &VAR_8->usb_dev->dev;
 struct arpc_cport_quiesce_req VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_6 > VAR_3)
  return -VAR_1;

 if (VAR_7 > VAR_3)
  return -VAR_1;

 VAR_10.cport_id = FUNC_1(VAR_5);
 VAR_10.peer_space = FUNC_1(VAR_6);
 VAR_10.timeout = FUNC_1(VAR_7);
 VAR_12 = FUNC_0(VAR_8, VAR_0, &VAR_10, sizeof(VAR_10),
   &VAR_11, VAR_2 + VAR_7);
 if (VAR_12) {
  FUNC_2(VAR_9, "failed to quiesce cport %u: %d (%d)\n",
   VAR_5, VAR_12, VAR_11);
  return VAR_12;
 }

 return 0;
}
