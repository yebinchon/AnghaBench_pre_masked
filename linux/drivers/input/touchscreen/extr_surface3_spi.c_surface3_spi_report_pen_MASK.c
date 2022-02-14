
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct surface3_ts_data_pen {int status; int pressure; int y; int x; } ;
struct surface3_ts_data {int pen_tool; struct input_dev* pen_input_dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_dev*,int ,int ) ;
 int FUNC_2 (struct input_dev*,int,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct surface3_ts_data *VAR_7,
        struct surface3_ts_data_pen *VAR_8)
{
 struct input_dev *VAR_9 = VAR_7->pen_input_dev;
 int VAR_10 = VAR_8->status;
 int VAR_11 = VAR_10 & 0x01;
 int VAR_12 = VAR_10 & 0x18;
 int VAR_13 = (VAR_11 && VAR_12) ? VAR_5 : VAR_4;


 if (VAR_7->pen_tool != VAR_13) {
  FUNC_2(VAR_9, VAR_7->pen_tool, 0);
  FUNC_3(VAR_9);
  VAR_7->pen_tool = VAR_13;
 }

 FUNC_2(VAR_9, VAR_6, VAR_10 & 0x12);

 FUNC_2(VAR_9, VAR_7->pen_tool, VAR_11);

 if (VAR_10) {
  FUNC_2(VAR_9,
     VAR_3,
     VAR_10 & 0x04);

  FUNC_1(VAR_9,
     VAR_1,
     FUNC_0(&VAR_8->x));
  FUNC_1(VAR_9,
     VAR_2,
     FUNC_0(&VAR_8->y));
  FUNC_1(VAR_9,
     VAR_0,
     FUNC_0(&VAR_8->pressure));
 }
}
