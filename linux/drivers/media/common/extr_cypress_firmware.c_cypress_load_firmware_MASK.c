
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int dev; } ;
struct hexline {int* data; int len; int addr; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int cs_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct firmware const*,struct hexline*,int*) ;
 int FUNC_1 (int *,char*,int ,int,...) ;
 int FUNC_2 (struct hexline*) ;
 struct hexline* FUNC_3 (int,int ) ;
 int FUNC_4 (struct usb_device*,int ,int*,int) ;

int FUNC_5(struct usb_device *VAR_5,
  const struct firmware *VAR_6, int VAR_7)
{
 struct hexline *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->data[0] = 1;
 VAR_9 = FUNC_4(VAR_5, VAR_4[VAR_7].cs_reg, VAR_8->data, 1);
 if (VAR_9 != 1) {
  FUNC_1(&VAR_5->dev, "%s: CPU stop failed=%d\n",
    VAR_3, VAR_9);
  VAR_9 = -VAR_0;
  goto err_kfree;
 }


 for (;;) {
  VAR_9 = FUNC_0(VAR_6, VAR_8, &VAR_10);
  if (VAR_9 < 0)
   goto err_kfree;
  else if (VAR_9 == 0)
   break;

  VAR_9 = FUNC_4(VAR_5, VAR_8->addr, VAR_8->data, VAR_8->len);
  if (VAR_9 < 0) {
   goto err_kfree;
  } else if (VAR_9 != VAR_8->len) {
   FUNC_1(&VAR_5->dev,
     "%s: error while transferring firmware (transferred size=%d, block size=%d)\n",
     VAR_3, VAR_9, VAR_8->len);
   VAR_9 = -VAR_0;
   goto err_kfree;
  }
 }


 VAR_8->data[0] = 0;
 VAR_9 = FUNC_4(VAR_5, VAR_4[VAR_7].cs_reg, VAR_8->data, 1);
 if (VAR_9 != 1) {
  FUNC_1(&VAR_5->dev, "%s: CPU start failed=%d\n",
    VAR_3, VAR_9);
  VAR_9 = -VAR_0;
  goto err_kfree;
 }

 VAR_9 = 0;
err_kfree:
 FUNC_2(VAR_8);
 return VAR_9;
}
