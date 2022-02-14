
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct steam_device {scalar_t__* serial_no; int list; int hdev; } ;


 int FUNC_0 (int ,char*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct steam_device*) ;
 int VAR_0 ;
 int FUNC_5 (struct steam_device*) ;

__attribute__((used)) static void FUNC_6(struct steam_device *VAR_1)
{
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 if (VAR_1->serial_no[0]) {
  FUNC_0(VAR_1->hdev, "Steam Controller '%s' disconnected",
    VAR_1->serial_no);
  FUNC_2(&VAR_0);
  FUNC_1(&VAR_1->list);
  FUNC_3(&VAR_0);
  VAR_1->serial_no[0] = 0;
 }
}
