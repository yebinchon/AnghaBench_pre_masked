
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct gf2k {size_t id; struct input_dev* dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int) ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int** VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_1 (struct input_dev*,scalar_t__,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static void FUNC_4(struct gf2k *VAR_9, unsigned char *VAR_10)
{
 struct input_dev *VAR_11 = VAR_9->dev;
 int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < 4 && VAR_12 < VAR_2[VAR_9->id]; VAR_12++)
  FUNC_1(VAR_11, VAR_1[VAR_12], FUNC_0(VAR_12<<3,8,0) | FUNC_0(VAR_12+46,1,8) | FUNC_0(VAR_12+50,1,9));

 for (VAR_12 = 0; VAR_12 < 2 && VAR_12 < VAR_2[VAR_9->id] - 4; VAR_12++)
  FUNC_1(VAR_11, VAR_1[VAR_12], FUNC_0(VAR_12*9+60,8,0) | FUNC_0(VAR_12+54,1,9));

 VAR_13 = FUNC_0(40,4,0);

 for (VAR_12 = 0; VAR_12 < VAR_6[VAR_9->id]; VAR_12++)
  FUNC_1(VAR_11, VAR_0 + VAR_12, VAR_5[VAR_13][VAR_12]);

 VAR_13 = FUNC_0(44,2,0) | FUNC_0(32,8,2) | FUNC_0(78,2,10);

 for (VAR_12 = 0; VAR_12 < VAR_7[VAR_9->id]; VAR_12++)
  FUNC_2(VAR_11, VAR_3[VAR_12], (VAR_13 >> VAR_12) & 1);

 for (VAR_12 = 0; VAR_12 < VAR_8[VAR_9->id]; VAR_12++)
  FUNC_2(VAR_11, VAR_4[VAR_12], (VAR_13 >> VAR_12) & 1);

 FUNC_3(VAR_11);
}
