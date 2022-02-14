
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st1232_ts_finger {int y; int x; int t; int is_valid; } ;
struct TYPE_7__ {int * dev; } ;
struct st1232_ts_data {TYPE_3__ low_latency_req; TYPE_2__* client; int prop; TYPE_1__* chip_info; struct input_dev* input_dev; struct st1232_ts_finger* finger; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int max_fingers; scalar_t__ have_z; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct input_dev*,int ,int ) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct st1232_ts_data*) ;
 int FUNC_6 (struct input_dev*,int *,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct st1232_ts_data *VAR_5 = VAR_4;
 struct st1232_ts_finger *VAR_6 = VAR_5->finger;
 struct input_dev *VAR_7 = VAR_5->input_dev;
 int VAR_8 = 0;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_5(VAR_5);
 if (VAR_10 < 0)
  goto end;


 for (VAR_9 = 0; VAR_9 < VAR_5->chip_info->max_fingers; VAR_9++) {
  if (!VAR_6[VAR_9].is_valid)
   continue;

  if (VAR_5->chip_info->have_z)
   FUNC_3(VAR_7, VAR_0,
      VAR_6[VAR_9].t);

  FUNC_6(VAR_7, &VAR_5->prop,
     VAR_6[VAR_9].x, VAR_6[VAR_9].y, 1);
  FUNC_2(VAR_7);
  VAR_8++;
 }


 if (!VAR_8) {
  FUNC_2(VAR_7);
  if (VAR_5->low_latency_req.dev) {
   FUNC_1(&VAR_5->low_latency_req);
   VAR_5->low_latency_req.dev = ((void*)0);
  }
 } else if (!VAR_5->low_latency_req.dev) {

  FUNC_0(&VAR_5->client->dev,
      &VAR_5->low_latency_req,
      VAR_1, 100);
 }


 FUNC_4(VAR_7);

end:
 return VAR_2;
}
