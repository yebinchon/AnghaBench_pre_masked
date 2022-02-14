
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13783_ts_priv {int* sample; int work; struct input_dev* idev; } ;
struct input_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int VAR_5 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int,int) ;

__attribute__((used)) static void FUNC_6(struct mc13783_ts_priv *VAR_6)
{
 struct input_dev *VAR_7 = VAR_6->idev;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;





 VAR_8 = VAR_6->sample[0] & 0xfff;
 VAR_9 = VAR_6->sample[1] & 0xfff;
 VAR_10 = VAR_6->sample[2] & 0xfff;
 VAR_11 = VAR_6->sample[3] & 0xfff;
 VAR_12 = (VAR_6->sample[0] >> 12) & 0xfff;
 VAR_13 = (VAR_6->sample[1] >> 12) & 0xfff;
 VAR_14 = (VAR_6->sample[2] >> 12) & 0xfff;
 VAR_15 = (VAR_6->sample[3] >> 12) & 0xfff;

 FUNC_0(&VAR_7->dev,
  "x: (% 4d,% 4d,% 4d) y: (% 4d, % 4d,% 4d) cr: (% 4d, % 4d)\n",
  VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);

 FUNC_5(VAR_8, VAR_9, VAR_10);
 FUNC_5(VAR_11, VAR_12, VAR_13);

 VAR_14 = (VAR_14 + VAR_15) / 2;

 if (!VAR_14 || !VAR_5 ||
   (VAR_10 - VAR_8 < VAR_5 &&
    VAR_13 - VAR_11 < VAR_5)) {

  if (VAR_14) {
   FUNC_1(VAR_7, VAR_1, VAR_9);
   FUNC_1(VAR_7, VAR_2, VAR_12);

   FUNC_0(&VAR_7->dev, "report (%d, %d, %d)\n",
     VAR_9, VAR_12, 0x1000 - VAR_14);
   FUNC_4(&VAR_6->work, VAR_4 / 50);
  } else {
   FUNC_0(&VAR_7->dev, "report release\n");
  }

  FUNC_1(VAR_7, VAR_0,
    VAR_14 ? 0x1000 - VAR_14 : VAR_14);
  FUNC_2(VAR_7, VAR_3, VAR_14);
  FUNC_3(VAR_7);
 } else {
  FUNC_0(&VAR_7->dev, "discard event\n");
 }
}
