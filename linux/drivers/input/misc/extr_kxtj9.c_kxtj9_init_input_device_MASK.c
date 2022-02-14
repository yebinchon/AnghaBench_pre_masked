
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kxtj9_data {TYPE_3__* client; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {char* name; TYPE_2__ dev; TYPE_1__ id; int evbit; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct input_dev*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct kxtj9_data *VAR_8,
           struct input_dev *VAR_9)
{
 FUNC_0(VAR_4, VAR_9->evbit);
 FUNC_1(VAR_9, VAR_0, -VAR_7, VAR_7, VAR_6, VAR_5);
 FUNC_1(VAR_9, VAR_1, -VAR_7, VAR_7, VAR_6, VAR_5);
 FUNC_1(VAR_9, VAR_2, -VAR_7, VAR_7, VAR_6, VAR_5);

 VAR_9->name = "kxtj9_accel";
 VAR_9->id.bustype = VAR_3;
 VAR_9->dev.parent = &VAR_8->client->dev;
}
