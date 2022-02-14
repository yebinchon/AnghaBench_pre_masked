
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * battery; int bat_desc; } ;
struct wacom {TYPE_2__ battery; TYPE_1__* hdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct wacom *VAR_0)
{
 if (VAR_0->battery.battery) {
  FUNC_0(&VAR_0->hdev->dev,
         &VAR_0->battery.bat_desc);
  VAR_0->battery.battery = ((void*)0);
 }
}
