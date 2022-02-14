
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icn8318_touch_data {int touch_count; struct icn8318_touch* touches; scalar_t__ softbutton; } ;
struct icn8318_touch {int y; int x; int slot; int event; } ;
struct icn8318_data {int input; int prop; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (TYPE_1__*,struct icn8318_touch_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct icn8318_data *VAR_5 = VAR_4;
 struct device *VAR_6 = &VAR_5->client->dev;
 struct icn8318_touch_data VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_3(VAR_5->client, &VAR_7);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6, "Error reading touch data: %d\n", VAR_9);
  return VAR_1;
 }

 if (VAR_7.softbutton) {






  return VAR_1;
 }

 if (VAR_7.touch_count > VAR_0) {
  FUNC_2(VAR_6, "Too much touches %d > %d\n",
    VAR_7.touch_count, VAR_0);
  VAR_7.touch_count = VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7.touch_count; VAR_8++) {
  struct icn8318_touch *VAR_10 = &VAR_7.touches[VAR_8];
  bool VAR_11 = FUNC_4(VAR_10->event);

  FUNC_6(VAR_5->input, VAR_10->slot);
  FUNC_5(VAR_5->input, VAR_2, VAR_11);
  if (!VAR_11)
   continue;

  FUNC_9(VAR_5->input, &VAR_5->prop,
           FUNC_0(VAR_10->x),
           FUNC_0(VAR_10->y), 1);
 }

 FUNC_7(VAR_5->input);
 FUNC_8(VAR_5->input);

 return VAR_1;
}
