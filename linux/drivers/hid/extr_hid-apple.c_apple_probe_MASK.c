
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int dev; } ;
struct apple_sc {unsigned long quirks; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct apple_sc* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,unsigned int) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct apple_sc*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_7,
  const struct hid_device_id *VAR_8)
{
 unsigned long VAR_9 = VAR_8->driver_data;
 struct apple_sc *VAR_10;
 unsigned int VAR_11 = VAR_4;
 int VAR_12;

 VAR_10 = FUNC_0(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_7, "can't alloc apple descriptor\n");
  return -VAR_2;
 }

 VAR_10->quirks = VAR_9;

 FUNC_4(VAR_7, VAR_10);

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12) {
  FUNC_1(VAR_7, "parse failed\n");
  return VAR_12;
 }

 if (VAR_9 & VAR_0)
  VAR_11 |= VAR_5;
 if (VAR_9 & VAR_1)
  VAR_11 &= ~VAR_6;

 VAR_12 = FUNC_2(VAR_7, VAR_11);
 if (VAR_12) {
  FUNC_1(VAR_7, "hw start failed\n");
  return VAR_12;
 }

 return 0;
}
