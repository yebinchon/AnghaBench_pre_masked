
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int ) ;
 int FUNC_6 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_device *VAR_9)
{
 int VAR_10;
 __le16 *VAR_11;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_5(VAR_9, FUNC_6(VAR_9, 0),
     VAR_3,
     VAR_6 | VAR_8 |
     VAR_7, 0, 0, VAR_11,
     sizeof(*VAR_11), VAR_2);
 if (VAR_10 != sizeof(*VAR_11)) {
  FUNC_0(&VAR_9->dev, "Cannot retrieve CPort count: %d\n",
   VAR_10);

  if (VAR_10 >= 0)
   VAR_10 = -VAR_0;

  goto out;
 }

 VAR_10 = FUNC_4(*VAR_11);


 if (VAR_10 > VAR_5) {
  VAR_10 = VAR_5;
  FUNC_1(&VAR_9->dev, "Limiting number of CPorts to U8_MAX\n");
 }

out:
 FUNC_2(VAR_11);
 return VAR_10;
}
