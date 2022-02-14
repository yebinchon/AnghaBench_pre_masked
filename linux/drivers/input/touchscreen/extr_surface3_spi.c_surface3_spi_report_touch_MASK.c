
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_ts_data_finger {int status; int height; int width; int y; int x; int tracking_id; } ;
struct surface3_ts_data {int input_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct surface3_ts_data *VAR_5,
       struct surface3_ts_data_finger *VAR_6)
{
 int VAR_7 = VAR_6->status & 0x01;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->input_dev,
    FUNC_0(&VAR_6->tracking_id));
 if (VAR_8 < 0)
  return;

 FUNC_3(VAR_5->input_dev, VAR_8);
 FUNC_2(VAR_5->input_dev, VAR_4, VAR_7);
 if (VAR_7) {
  FUNC_4(VAR_5->input_dev,
     VAR_0,
     FUNC_0(&VAR_6->x));
  FUNC_4(VAR_5->input_dev,
     VAR_1,
     FUNC_0(&VAR_6->y));
  FUNC_4(VAR_5->input_dev,
     VAR_2,
     FUNC_0(&VAR_6->width));
  FUNC_4(VAR_5->input_dev,
     VAR_3,
     FUNC_0(&VAR_6->height));
 }
}
