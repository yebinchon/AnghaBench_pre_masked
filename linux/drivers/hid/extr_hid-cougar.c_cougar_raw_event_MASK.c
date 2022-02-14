
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct hid_report {int dummy; } ;
struct hid_device {int dummy; } ;
struct cougar_shared {int input; int enabled; } ;
struct cougar {int special_intf; struct cougar_shared* shared; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 struct cougar* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct hid_device*,char*,unsigned char) ;
 int FUNC_2 (int ,int ,char,unsigned char) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hid_device *VAR_5, struct hid_report *VAR_6,
       u8 *VAR_7, int VAR_8)
{
 struct cougar *VAR_9;
 struct cougar_shared *VAR_10;
 unsigned char VAR_11, VAR_12;
 int VAR_13;

 VAR_9 = FUNC_0(VAR_5);
 VAR_10 = VAR_9->shared;
 if (!VAR_9->special_intf || !VAR_10)
  return 0;

 if (!VAR_10->enabled || !VAR_10->input)
  return -VAR_2;

 VAR_11 = VAR_7[VAR_1];
 VAR_12 = VAR_7[VAR_0];
 for (VAR_13 = 0; VAR_4[VAR_13][0]; VAR_13++) {
  if (VAR_11 == VAR_4[VAR_13][0]) {
   FUNC_2(VAR_10->input, VAR_3,
        VAR_4[VAR_13][1], VAR_12);
   FUNC_3(VAR_10->input);
   return -VAR_2;
  }
 }

 if (VAR_12 != 0)
  FUNC_1(VAR_5, "unmapped special key code %0x: ignoring\n", VAR_11);
 return -VAR_2;
}
