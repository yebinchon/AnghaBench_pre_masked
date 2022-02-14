
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_led {int held; int trigger; } ;
struct wacom {int hdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *,int ) ;
 struct wacom_led* FUNC_3 (struct wacom*,int,int) ;

__attribute__((used)) static void FUNC_4(struct wacom *VAR_1, int VAR_2, int VAR_3)
{
 struct wacom_led *VAR_4;
 int VAR_5;
 bool VAR_6 = 0;






 if (VAR_3 == 0)
  VAR_2 >>= 8;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_5);
  if (!VAR_4) {
   FUNC_1(VAR_1->hdev, "can't find LED %d in group %d\n",
    VAR_5, VAR_3);
   continue;
  }
  if (!VAR_6 && VAR_2 & FUNC_0(VAR_5)) {
   VAR_4->held = 1;
   FUNC_2(&VAR_4->trigger, VAR_0);
  } else {
   VAR_4->held = 0;
  }
 }
}
