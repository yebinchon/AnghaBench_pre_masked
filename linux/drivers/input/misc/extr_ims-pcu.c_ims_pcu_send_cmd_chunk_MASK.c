
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ims_pcu {int dev; int urb_out_buf; TYPE_1__* ep_out; int udev; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int ,int ,int ,int,int *,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ims_pcu *VAR_1,
      u8 VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->udev,
        FUNC_2(VAR_1->udev,
          VAR_1->ep_out->bEndpointAddress),
        VAR_1->urb_out_buf, VAR_4,
        ((void*)0), VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_1->dev,
   "Sending 0x%02x command failed at chunk %d: %d\n",
   VAR_2, VAR_3, VAR_5);
  return VAR_5;
 }

 return 0;
}
