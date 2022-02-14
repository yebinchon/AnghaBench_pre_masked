
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct silead_ts_data {TYPE_3__* input; int max_fingers; int prop; TYPE_1__* client; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int bustype; } ;
struct TYPE_11__ {char* phys; TYPE_2__ id; int name; } ;
struct TYPE_9__ {struct device dev; } ;


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
 int FUNC_0 (struct device*,char*,...) ;
 scalar_t__ FUNC_1 (struct device*,char*) ;
 TYPE_3__* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int,int *) ;

__attribute__((used)) static int FUNC_8(struct silead_ts_data *VAR_10)
{
 struct device *VAR_11 = &VAR_10->client->dev;
 int VAR_12;

 VAR_10->input = FUNC_2(VAR_11);
 if (!VAR_10->input) {
  FUNC_0(VAR_11,
   "Failed to allocate input device\n");
  return -VAR_3;
 }

 FUNC_5(VAR_10->input, VAR_0, 0, 4095, 0, 0);
 FUNC_5(VAR_10->input, VAR_1, 0, 4095, 0, 0);
 FUNC_7(VAR_10->input, 1, &VAR_10->prop);

 FUNC_3(VAR_10->input, VAR_10->max_fingers,
       VAR_5 | VAR_6 |
       VAR_7);

 if (FUNC_1(VAR_11, "silead,home-button"))
  FUNC_6(VAR_10->input, VAR_4, VAR_8);

 VAR_10->input->name = VAR_9;
 VAR_10->input->phys = "input/ts";
 VAR_10->input->id.bustype = VAR_2;

 VAR_12 = FUNC_4(VAR_10->input);
 if (VAR_12) {
  FUNC_0(VAR_11, "Failed to register input device: %d\n", VAR_12);
  return VAR_12;
 }

 return 0;
}
