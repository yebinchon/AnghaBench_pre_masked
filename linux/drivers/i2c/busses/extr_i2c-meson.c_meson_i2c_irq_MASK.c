
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_i2c {scalar_t__ state; scalar_t__ pos; scalar_t__ count; int lock; int done; TYPE_1__* msg; int error; int dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ buf; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct meson_i2c*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct meson_i2c*) ;
 int FUNC_4 (struct meson_i2c*) ;
 int FUNC_5 (struct meson_i2c*,scalar_t__,int ,int ) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_8, void *VAR_9)
{
 struct meson_i2c *VAR_10 = VAR_9;
 unsigned int VAR_11;

 FUNC_7(&VAR_10->lock);

 FUNC_4(VAR_10);
 FUNC_5(VAR_10, VAR_3, VAR_5, 0);
 VAR_11 = FUNC_6(VAR_10->regs + VAR_3);

 FUNC_1(VAR_10->dev, "irq: state %d, pos %d, count %d, ctrl %08x\n",
  VAR_10->state, VAR_10->pos, VAR_10->count, VAR_11);

 if (VAR_10->state == VAR_6) {
  FUNC_8(&VAR_10->lock);
  return VAR_2;
 }

 if (VAR_11 & VAR_4) {






  FUNC_1(VAR_10->dev, "error bit set\n");
  VAR_10->error = -VAR_0;
  VAR_10->state = VAR_6;
  FUNC_0(&VAR_10->done);
  goto out;
 }

 if (VAR_10->state == VAR_7 && VAR_10->count)
  FUNC_2(VAR_10, VAR_10->msg->buf + VAR_10->pos, VAR_10->count);

 VAR_10->pos += VAR_10->count;

 if (VAR_10->pos >= VAR_10->msg->len) {
  VAR_10->state = VAR_6;
  FUNC_0(&VAR_10->done);
  goto out;
 }


 FUNC_3(VAR_10);
 FUNC_5(VAR_10, VAR_3, VAR_5, VAR_5);
out:
 FUNC_8(&VAR_10->lock);

 return VAR_1;
}
