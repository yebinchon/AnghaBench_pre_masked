
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device_id {int dummy; } ;
struct hid_device {scalar_t__ product; int rsize; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,unsigned int) ;
 int FUNC_2 (struct hid_device*) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_4,
  const struct hid_device_id *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7 = VAR_0;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_4, "parse failed\n");
  goto err_free;
 }

 if (VAR_3 == VAR_4->product) {
  if (VAR_4->rsize == 184) {

   VAR_7 = (VAR_7 & ~VAR_2) |
    VAR_1;
  }
 }

 VAR_6 = FUNC_1(VAR_4, VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_4, "hw start failed\n");
  goto err_free;
 }

 return 0;
err_free:
 return VAR_6;
}
