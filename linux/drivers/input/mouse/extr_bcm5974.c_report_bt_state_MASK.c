
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_data {int dummy; } ;
struct bcm5974 {int input; TYPE_1__* bt_data; } ;
struct TYPE_2__ {int button; int rel_y; int rel_x; int unknown1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct bcm5974 *VAR_2, int VAR_3)
{
 if (VAR_3 != sizeof(struct bt_data))
  return -VAR_1;

 FUNC_0(7,
  "bcm5974: button data: %x %x %x %x\n",
  VAR_2->bt_data->unknown1, VAR_2->bt_data->button,
  VAR_2->bt_data->rel_x, VAR_2->bt_data->rel_y);

 FUNC_1(VAR_2->input, VAR_0, VAR_2->bt_data->button);
 FUNC_2(VAR_2->input);

 return 0;
}
