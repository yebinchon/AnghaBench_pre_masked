
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct steam_device {TYPE_2__* hdev; } ;
struct hid_report {int dummy; } ;
struct TYPE_4__ {TYPE_1__* report_enum; } ;
struct TYPE_3__ {struct hid_report** report_id_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct hid_report*,int ) ;
 int FUNC_1 (TYPE_2__*,int,int *,int,size_t,int ) ;
 int FUNC_2 (struct hid_report*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct steam_device *VAR_5,
  u8 *VAR_6, int VAR_7)
{
 struct hid_report *VAR_8;
 u8 *VAR_9;
 int VAR_10;

 VAR_8 = VAR_5->hdev->report_enum[VAR_3].report_id_hash[0];
 if (FUNC_2(VAR_8) < 64)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, VAR_2);
 if (!VAR_9)
  return -VAR_1;







 VAR_10 = FUNC_1(VAR_5->hdev, 0x00,
   VAR_9, FUNC_2(VAR_8) + 1,
   VAR_3, VAR_4);
 if (VAR_10 > 0)
  FUNC_4(VAR_6, VAR_9 + 1, FUNC_5(VAR_7, VAR_10 - 1));
 FUNC_3(VAR_9);
 return VAR_10;
}
