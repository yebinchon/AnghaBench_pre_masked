
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct creative_sb0540 {int input_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct creative_sb0540*,int) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 struct creative_sb0540* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct hid_device *VAR_1,
 struct hid_report *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct creative_sb0540 *VAR_5 = FUNC_2(VAR_1);
 u64 VAR_6, VAR_7;
 int VAR_8;

 if (VAR_4 != 6)
  return 0;


 VAR_6 = FUNC_5(VAR_3[5], 8);
 VAR_7 = (VAR_6 << 8) + ((~VAR_6) & 0xff);





 VAR_7 = ((VAR_7 & 0xff) << 8) +
  ((VAR_7 & 0xff00) >> 8);

 VAR_8 = FUNC_0(VAR_5, VAR_7);
 if (VAR_8 == 0 || VAR_8 == VAR_0) {
  FUNC_1(VAR_1, "Could not get a key for main_code %llX\n",
   VAR_7);
  return 0;
 }

 FUNC_3(VAR_5->input_dev, VAR_8, 1);
 FUNC_3(VAR_5->input_dev, VAR_8, 0);
 FUNC_4(VAR_5->input_dev);


 return 0;
}
