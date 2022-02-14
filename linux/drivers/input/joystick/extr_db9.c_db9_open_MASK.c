
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parport {int dummy; } ;
struct input_dev {int dummy; } ;
struct db9 {size_t mode; int mutex; int timer; TYPE_1__* pd; int used; } ;
struct TYPE_4__ {scalar_t__ reverse; } ;
struct TYPE_3__ {struct parport* port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct db9* FUNC_0 (struct input_dev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct parport*) ;
 int FUNC_6 (struct parport*,int ) ;
 int FUNC_7 (struct parport*,int) ;

__attribute__((used)) static int FUNC_8(struct input_dev *VAR_4)
{
 struct db9 *VAR_5 = FUNC_0(VAR_4);
 struct parport *VAR_6 = VAR_5->pd->port;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_5->mutex);
 if (VAR_7)
  return VAR_7;

 if (!VAR_5->used++) {
  FUNC_4(VAR_5->pd);
  FUNC_7(VAR_6, 0xff);
  if (VAR_2[VAR_5->mode].reverse) {
   FUNC_5(VAR_6);
   FUNC_6(VAR_6, VAR_0);
  }
  FUNC_1(&VAR_5->timer, VAR_3 + VAR_1);
 }

 FUNC_3(&VAR_5->mutex);
 return 0;
}
