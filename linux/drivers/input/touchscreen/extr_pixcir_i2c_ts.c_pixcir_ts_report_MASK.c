
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pixcir_report_data {int num_touches; TYPE_2__* pos; int * ids; } ;
struct pixcir_i2c_ts_data {int input; struct pixcir_i2c_chip_data* chip; TYPE_1__* client; } ;
struct pixcir_i2c_chip_data {scalar_t__ has_hw_ids; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (int ,int*,TYPE_2__*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct pixcir_i2c_ts_data *VAR_4,
        struct pixcir_report_data *VAR_5)
{
 int VAR_6[VAR_3];
 int VAR_7, VAR_8, VAR_9;
 struct device *VAR_10 = &VAR_4->client->dev;
 const struct pixcir_i2c_chip_data *VAR_11 = VAR_4->chip;

 VAR_7 = VAR_5->num_touches;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;

 if (!VAR_4->chip->has_hw_ids)
  FUNC_1(VAR_4->input, VAR_6, VAR_5->pos, VAR_7, 0);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_11->has_hw_ids) {
   VAR_9 = FUNC_2(VAR_4->input,
       VAR_5->ids[VAR_8]);
   if (VAR_9 < 0) {
    FUNC_0(VAR_10, "no free slot for id 0x%x\n",
     VAR_5->ids[VAR_8]);
    continue;
   }
  } else {
   VAR_9 = VAR_6[VAR_8];
  }

  FUNC_4(VAR_4->input, VAR_9);
  FUNC_3(VAR_4->input, VAR_2, 1);

  FUNC_6(VAR_4->input, VAR_0,
     VAR_5->pos[VAR_8].x);
  FUNC_6(VAR_4->input, VAR_1,
     VAR_5->pos[VAR_8].y);

  FUNC_0(VAR_10, "%d: slot %d, x %d, y %d\n",
   VAR_8, VAR_9, VAR_5->pos[VAR_8].x, VAR_5->pos[VAR_8].y);
 }

 FUNC_5(VAR_4->input);
 FUNC_7(VAR_4->input);
}
