
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom {char* data; char expect; int cmd_done; int result; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (struct wacom*) ;
 int FUNC_3 (struct wacom*) ;
 int FUNC_4 (struct wacom*) ;

__attribute__((used)) static void FUNC_5(struct wacom *VAR_1)
{
 if (VAR_1->data[0] != '~' || VAR_1->data[1] != VAR_1->expect) {
  FUNC_1(&VAR_1->dev->dev,
   "Wacom got an unexpected response: %s\n", VAR_1->data);
  VAR_1->result = -VAR_0;
 } else {
  VAR_1->result = 0;

  switch (VAR_1->data[1]) {
  case '#':
   FUNC_4(VAR_1);
   break;
  case 'R':
   FUNC_2(VAR_1);
   break;
  case 'C':
   FUNC_3(VAR_1);
   break;
  }
 }

 FUNC_0(&VAR_1->cmd_done);
}
