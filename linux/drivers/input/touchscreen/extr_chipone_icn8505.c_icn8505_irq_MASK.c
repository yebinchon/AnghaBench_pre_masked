
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int touch_data ;
struct icn8505_touch_data {int touch_count; int softbutton; struct icn8505_touch* touches; } ;
struct icn8505_touch {int y; int x; int slot; int event; } ;
struct icn8505_data {int input; int prop; TYPE_1__* client; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct icn8505_data*,int ,struct icn8505_touch_data*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_5, void *VAR_6)
{
 struct icn8505_data *VAR_7 = VAR_6;
 struct device *VAR_8 = &VAR_7->client->dev;
 struct icn8505_touch_data VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_1,
      &VAR_9, sizeof(VAR_9));
 if (VAR_11) {
  FUNC_0(VAR_8, "Error reading touch data: %d\n", VAR_11);
  return VAR_2;
 }

 if (VAR_9.touch_count > VAR_0) {
  FUNC_1(VAR_8, "Too many touches %d > %d\n",
    VAR_9.touch_count, VAR_0);
  VAR_9.touch_count = VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9.touch_count; VAR_10++) {
  struct icn8505_touch *VAR_12 = &VAR_9.touches[VAR_10];
  bool VAR_13 = FUNC_4(VAR_12->event);

  FUNC_6(VAR_7->input, VAR_12->slot);
  FUNC_5(VAR_7->input, VAR_4, VAR_13);
  if (!VAR_13)
   continue;

  FUNC_10(VAR_7->input, &VAR_7->prop,
           FUNC_2(VAR_12->x),
           FUNC_2(VAR_12->y),
           1);
 }

 FUNC_7(VAR_7->input);
 FUNC_8(VAR_7->input, VAR_3,
    VAR_9.softbutton == 1);
 FUNC_9(VAR_7->input);

 return VAR_2;
}
