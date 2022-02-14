
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mxt_data {int T9_reportid_min; int max_x; int max_y; int update_input; struct input_dev* input_dev; TYPE_1__* client; } ;
struct input_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct device*,char*,int,char,char,char,char,char,char,char,unsigned char,int,int,int,int) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int) ;
 int FUNC_3 (struct input_dev*,int ,int) ;
 int FUNC_4 (struct mxt_data*) ;

__attribute__((used)) static void FUNC_5(struct mxt_data *VAR_14, u8 *VAR_15)
{
 struct device *VAR_16 = &VAR_14->client->dev;
 struct input_dev *VAR_17 = VAR_14->input_dev;
 int VAR_18;
 u8 VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_18 = VAR_15[0] - VAR_14->T9_reportid_min;
 VAR_19 = VAR_15[1];
 VAR_20 = (VAR_15[2] << 4) | ((VAR_15[4] >> 4) & 0xf);
 VAR_21 = (VAR_15[3] << 4) | ((VAR_15[4] & 0xf));


 if (VAR_14->max_x < 1024)
  VAR_20 >>= 2;
 if (VAR_14->max_y < 1024)
  VAR_21 >>= 2;

 VAR_22 = VAR_15[5];
 VAR_23 = VAR_15[6];

 FUNC_0(VAR_16,
  "[%u] %c%c%c%c%c%c%c%c x: %5u y: %5u area: %3u amp: %3u\n",
  VAR_18,
  (VAR_19 & VAR_7) ? 'D' : '.',
  (VAR_19 & VAR_9) ? 'P' : '.',
  (VAR_19 & VAR_10) ? 'R' : '.',
  (VAR_19 & VAR_8) ? 'M' : '.',
  (VAR_19 & VAR_13) ? 'V' : '.',
  (VAR_19 & VAR_6) ? 'A' : '.',
  (VAR_19 & VAR_11) ? 'S' : '.',
  (VAR_19 & VAR_12) ? 'U' : '.',
  VAR_20, VAR_21, VAR_22, VAR_23);

 FUNC_2(VAR_17, VAR_18);

 if (VAR_19 & VAR_7) {





  if (VAR_19 & VAR_10) {
   FUNC_1(VAR_17,
         VAR_4, 0);
   FUNC_4(VAR_14);
  }


  if (!VAR_23)
   VAR_23 = VAR_5;


  FUNC_1(VAR_17, VAR_4, 1);
  FUNC_3(VAR_17, VAR_0, VAR_20);
  FUNC_3(VAR_17, VAR_1, VAR_21);
  FUNC_3(VAR_17, VAR_2, VAR_23);
  FUNC_3(VAR_17, VAR_3, VAR_22);
 } else {

  FUNC_1(VAR_17, VAR_4, 0);
 }

 VAR_14->update_input = 1;
}
