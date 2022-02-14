
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {int client_opened; int quirks; int work_connect; int client_hdev; } ;
struct hid_device {scalar_t__ group; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct steam_device* FUNC_2 (struct hid_device*) ;
 int FUNC_3 (struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (struct hid_device*,char*) ;
 int FUNC_6 (struct steam_device*) ;

__attribute__((used)) static void FUNC_7(struct hid_device *VAR_2)
{
 struct steam_device *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3 || VAR_2->group == VAR_0) {
  FUNC_4(VAR_2);
  return;
 }

 FUNC_1(VAR_3->client_hdev);
 VAR_3->client_opened = 0;
 FUNC_0(&VAR_3->work_connect);
 if (VAR_3->quirks & VAR_1) {
  FUNC_5(VAR_2, "Steam wireless receiver disconnected");
 }
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
 FUNC_6(VAR_3);
}
