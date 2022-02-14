
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hid_report {int id; } ;
struct hid_device {int quirks; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int * FUNC_1 (struct hid_report*,int ) ;
 int FUNC_2 (struct hid_device*,int ,int *,int ,int ,int ) ;
 int FUNC_3 (struct hid_report*) ;
 int FUNC_4 (struct hid_device*,int ,int *,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct hid_device *VAR_4, struct hid_report *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = FUNC_3(VAR_5);
 u8 *VAR_8;





 if (VAR_4->quirks & VAR_2)
  return;

 VAR_8 = FUNC_1(VAR_5, VAR_0);
 if (!VAR_8)
  return;

 VAR_6 = FUNC_2(VAR_4, VAR_5->id, VAR_8, VAR_7,
     VAR_1, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->dev, "failed to fetch feature %d\n",
    VAR_5->id);
 } else {
  VAR_6 = FUNC_4(VAR_4, VAR_1, VAR_8,
        VAR_7, 0);
  if (VAR_6)
   FUNC_0(&VAR_4->dev, "failed to report feature\n");
 }

 FUNC_5(VAR_8);
}
