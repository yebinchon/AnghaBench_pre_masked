
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm8333 {int * keycodes; TYPE_1__* client; struct input_dev* input; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct input_dev*,int ,int ,int) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct lm8333*,int ,int,int*) ;

__attribute__((used)) static void FUNC_5(struct lm8333 *VAR_4)
{
 struct input_dev *VAR_5 = VAR_4->input;
 u8 VAR_6[VAR_2];
 u8 VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_4(VAR_4, VAR_1,
    VAR_2, VAR_6);
 if (VAR_10 != VAR_2) {
  FUNC_0(&VAR_4->client->dev,
   "Error %d while reading FIFO\n", VAR_10);
  return;
 }

 for (VAR_9 = 0; VAR_9 < VAR_2 && VAR_6[VAR_9]; VAR_9++) {
  VAR_8 = VAR_6[VAR_9] & 0x80;
  VAR_7 = VAR_6[VAR_9] & 0x7f;

  FUNC_1(VAR_5, VAR_0, VAR_3, VAR_7);
  FUNC_2(VAR_5, VAR_4->keycodes[VAR_7], VAR_8);
 }

 FUNC_3(VAR_5);
}
