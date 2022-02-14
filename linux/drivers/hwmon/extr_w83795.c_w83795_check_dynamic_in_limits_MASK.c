
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct w83795_data {int has_dyn_in; } ;
struct TYPE_7__ {int kobj; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct TYPE_5__ {int attr; } ;
struct TYPE_6__ {TYPE_1__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int,int,int) ;
 struct w83795_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,int *,int ) ;
 TYPE_2__** VAR_2 ;
 int FUNC_4 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_5(struct i2c_client *VAR_3)
{
 struct w83795_data *VAR_4 = FUNC_2(VAR_3);
 u8 VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_4(VAR_3, VAR_1);


 if ((VAR_5 & 0x07) == 0x00 || (VAR_5 & 0x07) == 0x07)
  return;

 VAR_4->has_dyn_in = (VAR_5 >> 3) & 0x07;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  if (!(VAR_4->has_dyn_in & (1 << VAR_6)))
   continue;


  VAR_7 = FUNC_3(&VAR_3->dev.kobj,
        &VAR_2[VAR_6][2].dev_attr.attr,
        VAR_0);
  VAR_8 = FUNC_3(&VAR_3->dev.kobj,
        &VAR_2[VAR_6][3].dev_attr.attr,
        VAR_0);
  if (VAR_7 || VAR_8)
   FUNC_1(&VAR_3->dev,
     "Failed to set in%d limits read-only (%d, %d)\n",
     VAR_6, VAR_7, VAR_8);
  else
   FUNC_0(&VAR_3->dev,
     "in%d limits set dynamically from VID\n", VAR_6);
 }
}
