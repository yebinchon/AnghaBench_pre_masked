
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sony_sc {int quirks; } ;
struct hid_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hid_device*,char*) ;
 struct sony_sc* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*,int *,int) ;
 int FUNC_3 (struct hid_device*,int,int *,int ,int ,int ) ;
 int FUNC_4 (struct hid_device*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_7)
{
 struct sony_sc *VAR_8 = FUNC_1(VAR_7);
 const int VAR_9 =
  FUNC_7(VAR_5, VAR_6);
 u8 *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(VAR_9, VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_7, 0xf2, VAR_10, VAR_5,
     VAR_2, VAR_3);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7, "can't set operational mode: step 1\n");
  goto out;
 }





 VAR_11 = FUNC_3(VAR_7, 0xf5, VAR_10, VAR_6,
     VAR_2, VAR_3);
 if (VAR_11 < 0) {
  FUNC_0(VAR_7, "can't set operational mode: step 2\n");
  goto out;
 }





 if (VAR_8->quirks & VAR_4)
  goto out;

 VAR_11 = FUNC_2(VAR_7, VAR_10, 1);
 if (VAR_11 < 0) {
  FUNC_4(VAR_7, "can't set operational mode: step 3, ignoring\n");
  VAR_11 = 0;
 }

out:
 FUNC_5(VAR_10);

 return VAR_11;
}
