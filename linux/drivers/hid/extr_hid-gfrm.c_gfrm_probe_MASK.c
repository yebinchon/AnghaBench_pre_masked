
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {scalar_t__ driver_data; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hid_device*,int ) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,int ,int ,int ) ;
 int FUNC_3 (struct hid_device*,void*) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_5, const struct hid_device_id *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_5, (void *) VAR_6->driver_data);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  goto done;

 if (VAR_6->driver_data == VAR_1) {





  if (!FUNC_2(VAR_5, VAR_4,
      VAR_2, 0)) {
   VAR_7 = -VAR_0;
   goto done;
  }
 }

 VAR_7 = FUNC_0(VAR_5, VAR_3);
done:
 return VAR_7;
}
