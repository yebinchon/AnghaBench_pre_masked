
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {size_t axis_map_x; size_t axis_map_y; size_t axis_map_z; scalar_t__ negate_z; scalar_t__ negate_y; scalar_t__ negate_x; } ;
struct kxtj9_data {int shift; int input_dev; TYPE_2__ pdata; TYPE_1__* client; } ;
typedef int s16 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kxtj9_data*,int ,int *,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct kxtj9_data *VAR_4)
{
 s16 VAR_5[3];
 s16 VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_3, (u8 *)VAR_5, 6);
 if (VAR_9 < 0)
  FUNC_0(&VAR_4->client->dev, "accelerometer data read failed\n");

 VAR_6 = FUNC_4(VAR_5[VAR_4->pdata.axis_map_x]);
 VAR_7 = FUNC_4(VAR_5[VAR_4->pdata.axis_map_y]);
 VAR_8 = FUNC_4(VAR_5[VAR_4->pdata.axis_map_z]);

 VAR_6 >>= VAR_4->shift;
 VAR_7 >>= VAR_4->shift;
 VAR_8 >>= VAR_4->shift;

 FUNC_1(VAR_4->input_dev, VAR_0, VAR_4->pdata.negate_x ? -VAR_6 : VAR_6);
 FUNC_1(VAR_4->input_dev, VAR_1, VAR_4->pdata.negate_y ? -VAR_7 : VAR_7);
 FUNC_1(VAR_4->input_dev, VAR_2, VAR_4->pdata.negate_z ? -VAR_8 : VAR_8);
 FUNC_2(VAR_4->input_dev);
}
