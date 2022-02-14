
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct grts_state {int iio_cb; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct grts_state* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 int VAR_1;
 struct grts_state *VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_1(VAR_2->iio_cb);
 if (VAR_1) {
  FUNC_0(VAR_0->dev.parent, "failed to start callback buffer.\n");
  return VAR_1;
 }
 return 0;
}
