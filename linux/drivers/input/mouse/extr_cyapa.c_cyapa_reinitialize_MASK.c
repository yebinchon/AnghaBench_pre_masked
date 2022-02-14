
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct input_dev {int users; } ;
struct device {int dummy; } ;
struct cyapa {scalar_t__ operational; TYPE_2__* ops; struct input_dev* input; TYPE_1__* client; } ;
struct TYPE_4__ {int (* set_power_mode ) (struct cyapa*,int ,int ,int ) ;} ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct cyapa*,int ,int ,int ) ;
 int FUNC_11 (struct cyapa*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct cyapa *VAR_4)
{
 struct device *VAR_5 = &VAR_4->client->dev;
 struct input_dev *VAR_6 = VAR_4->input;
 int VAR_7;

 if (FUNC_5(VAR_5))
  FUNC_3(VAR_5);


 if (VAR_4->operational)
  VAR_4->ops->set_power_mode(VAR_4,
    VAR_2, 0, VAR_0);

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7)
  goto out;

 if (!VAR_6 && VAR_4->operational) {
  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7) {
   FUNC_2(VAR_5, "create input_dev instance failed: %d\n",
     VAR_7);
   goto out;
  }
 }

out:
 if (!VAR_6 || !VAR_6->users) {

  if (VAR_4->operational)
   VAR_4->ops->set_power_mode(VAR_4,
     VAR_3, 0, VAR_1);
 } else if (!VAR_7 && VAR_4->operational) {




  FUNC_9(VAR_5);
  FUNC_4(VAR_5);

  FUNC_6(VAR_5);
  FUNC_7(VAR_5);
  FUNC_8(VAR_5);
 }

 return VAR_7;
}
