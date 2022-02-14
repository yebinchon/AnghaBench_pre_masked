
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adp5589_kpad {unsigned short* keycode; TYPE_2__* client; TYPE_1__* var; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int keymapsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct adp5589_kpad *VAR_2, unsigned short VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->var->keymapsize; VAR_4++)
  if (VAR_3 == VAR_2->keycode[VAR_4])
   return (VAR_4 + 1) | VAR_1;

 FUNC_0(&VAR_2->client->dev, "RESET/UNLOCK key not in keycode map\n");

 return -VAR_0;
}
