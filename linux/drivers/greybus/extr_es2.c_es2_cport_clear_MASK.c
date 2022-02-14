
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct gb_host_device {int dummy; } ;
struct es2_ap_dev {TYPE_1__* usb_dev; } ;
struct device {int dummy; } ;
struct arpc_cport_clear_req {int cport_id; } ;
typedef int req ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct es2_ap_dev*,int ,struct arpc_cport_clear_req*,int,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct es2_ap_dev* FUNC_3 (struct gb_host_device*) ;

__attribute__((used)) static int FUNC_4(struct gb_host_device *VAR_2, u16 VAR_3)
{
 struct es2_ap_dev *VAR_4 = FUNC_3(VAR_2);
 struct device *VAR_5 = &VAR_4->usb_dev->dev;
 struct arpc_cport_clear_req VAR_6;
 int VAR_7;

 VAR_6.cport_id = FUNC_1(VAR_3);
 VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_6, sizeof(VAR_6),
   ((void*)0), VAR_1);
 if (VAR_7) {
  FUNC_2(VAR_5, "failed to clear cport %u: %d\n", VAR_3, VAR_7);
  return VAR_7;
 }

 return 0;
}
