
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_data {unsigned long quirks; } ;
struct hid_device_id {unsigned long driver_data; } ;
struct hid_device {int quirks; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 struct ms_data* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,int) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*,struct ms_data*) ;
 int FUNC_5 (struct hid_device*) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_9, const struct hid_device_id *VAR_10)
{
 unsigned long VAR_11 = VAR_10->driver_data;
 struct ms_data *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(&VAR_9->dev, sizeof(*VAR_12), VAR_1);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_12->quirks = VAR_11;

 FUNC_4(VAR_9, VAR_12);

 if (VAR_11 & VAR_7)
  VAR_9->quirks |= VAR_5;

 if (VAR_11 & VAR_8)
  VAR_9->quirks |= VAR_4;

 VAR_13 = FUNC_3(VAR_9);
 if (VAR_13) {
  FUNC_1(VAR_9, "parse failed\n");
  goto err_free;
 }

 VAR_13 = FUNC_2(VAR_9, VAR_2 | ((VAR_11 & VAR_6) ?
    VAR_3 : 0));
 if (VAR_13) {
  FUNC_1(VAR_9, "hw start failed\n");
  goto err_free;
 }

 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13)
  FUNC_1(VAR_9, "could not initialize ff, continuing anyway");

 return 0;
err_free:
 return VAR_13;
}
