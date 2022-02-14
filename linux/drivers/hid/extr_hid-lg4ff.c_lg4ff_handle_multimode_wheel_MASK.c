
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct lg4ff_compat_mode_switch {int dummy; } ;
struct hid_device {scalar_t__ product; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 struct lg4ff_compat_mode_switch* FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct hid_device*,scalar_t__ const,scalar_t__ const) ;
 int VAR_4 ;
 int FUNC_4 (struct hid_device*,struct lg4ff_compat_mode_switch const*) ;

__attribute__((used)) static int FUNC_5(struct hid_device *VAR_5, u16 *VAR_6, const u16 VAR_7)
{
 const u16 VAR_8 = VAR_5->product;
 int VAR_9;

 *VAR_6 = FUNC_3(VAR_5, VAR_8, VAR_7);

 if (!*VAR_6) {
  *VAR_6 = VAR_8;
  FUNC_0("Wheel is not a multimode wheel\n");
  return VAR_1;
 }



 if (VAR_8 == VAR_3 &&
     VAR_8 != *VAR_6 &&
     !VAR_4) {
  const struct lg4ff_compat_mode_switch *VAR_10 = FUNC_2(*VAR_6, *VAR_6);

  if (!VAR_10) {
   FUNC_1(VAR_5, "Invalid product id %X\n", *VAR_6);
   return VAR_1;
  }

  VAR_9 = FUNC_4(VAR_5, VAR_10);
  if (VAR_9) {


   FUNC_1(VAR_5, "Unable to switch wheel mode, errno %d\n", VAR_9);
   return VAR_0;
  }
  return VAR_2;
 }

 return VAR_0;
}
