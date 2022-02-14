
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm {int maxcontacts; TYPE_1__* slots; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int y; int x; scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct input_dev*,int ,int ,int ) ;
 int FUNC_1 (struct input_dev*,int) ;
 int FUNC_2 (struct input_dev*,int ,scalar_t__) ;
 int FUNC_3 (struct input_dev*,int) ;
 int FUNC_4 (struct input_dev*) ;

__attribute__((used)) static void FUNC_5(struct pm *VAR_4, struct input_dev *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->maxcontacts; ++VAR_6) {
  FUNC_3(VAR_5, VAR_6);
  FUNC_2(VAR_5, VAR_3,
    VAR_4->slots[VAR_6].active);
  if (VAR_4->slots[VAR_6].active) {
   FUNC_0(VAR_5, VAR_2, VAR_0, VAR_4->slots[VAR_6].x);
   FUNC_0(VAR_5, VAR_2, VAR_1, VAR_4->slots[VAR_6].y);
  }
 }

 FUNC_1(VAR_5, 1);
 FUNC_4(VAR_5);
}
