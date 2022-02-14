
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_bulk_data {int consumer; } ;
struct qca_vreg {int name; } ;
struct qca_serdev {TYPE_2__* bt_power; } ;
struct hci_uart {int serdev; } ;
struct TYPE_4__ {int vregs_on; TYPE_1__* vreg_data; struct regulator_bulk_data* vreg_bulk; } ;
struct TYPE_3__ {int num_vregs; struct qca_vreg* vregs; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct qca_vreg,int ) ;
 int FUNC_3 (struct qca_vreg,int ) ;
 struct qca_serdev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_1, bool VAR_2)
{
 struct qca_vreg *VAR_3;
 struct regulator_bulk_data *VAR_4;
 struct qca_serdev *VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;

 VAR_5 = FUNC_4(VAR_1->serdev);
 if (!VAR_5 || !VAR_5->bt_power || !VAR_5->bt_power->vreg_data ||
     !VAR_5->bt_power->vreg_bulk)
  return -VAR_0;

 VAR_3 = VAR_5->bt_power->vreg_data->vregs;
 VAR_4 = VAR_5->bt_power->vreg_bulk;
 VAR_7 = VAR_5->bt_power->vreg_data->num_vregs;
 FUNC_0("on: %d", VAR_2);
 if (VAR_2 && !VAR_5->bt_power->vregs_on) {
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   VAR_8 = FUNC_3(VAR_3[VAR_6],
         VAR_4[VAR_6].consumer);
   if (VAR_8)
    break;
  }

  if (VAR_8) {
   FUNC_1("failed to enable regulator:%s", VAR_3[VAR_6].name);

   for (VAR_6 = VAR_6 - 1; VAR_6 >= 0; VAR_6--)
    FUNC_2(VAR_3[VAR_6],
            VAR_4[VAR_6].consumer);
  } else {
   VAR_5->bt_power->vregs_on = 1;
  }
 } else if (!VAR_2 && VAR_5->bt_power->vregs_on) {

  VAR_6 = VAR_5->bt_power->vreg_data->num_vregs - 1;
  for ( ; VAR_6 >= 0; VAR_6--)
   FUNC_2(VAR_3[VAR_6], VAR_4[VAR_6].consumer);

  VAR_5->bt_power->vregs_on = 0;
 }

 return VAR_8;
}
