
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_i2c {int last; int error; int lock; int state; int done; scalar_t__ count; scalar_t__ pos; struct i2c_msg* msg; } ;
struct i2c_msg {long flags; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct meson_i2c*,struct i2c_msg*) ;
 int FUNC_1 (struct meson_i2c*) ;
 int FUNC_2 (struct meson_i2c*) ;
 int FUNC_3 (struct meson_i2c*,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 unsigned long FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct meson_i2c *VAR_11, struct i2c_msg *VAR_12,
         int VAR_13)
{
 unsigned long VAR_14, VAR_15;
 int VAR_16 = 0;

 VAR_11->msg = VAR_12;
 VAR_11->last = VAR_13;
 VAR_11->pos = 0;
 VAR_11->count = 0;
 VAR_11->error = 0;

 FUNC_2(VAR_11);

 VAR_15 = (VAR_12->flags & VAR_1) ? VAR_6 : 0;
 FUNC_3(VAR_11, VAR_5, VAR_6, VAR_15);

 if (!(VAR_12->flags & VAR_2))
  FUNC_0(VAR_11, VAR_12);

 VAR_11->state = (VAR_12->flags & VAR_3) ? VAR_9 : VAR_10;
 FUNC_1(VAR_11);
 FUNC_5(&VAR_11->done);


 FUNC_3(VAR_11, VAR_5, VAR_7, VAR_7);

 VAR_14 = FUNC_4(VAR_4);
 VAR_14 = FUNC_8(&VAR_11->done, VAR_14);






 FUNC_6(&VAR_11->lock, VAR_15);


 FUNC_3(VAR_11, VAR_5, VAR_7, 0);

 if (!VAR_14) {
  VAR_11->state = VAR_8;
  VAR_16 = -VAR_0;
 }

 if (VAR_11->error)
  VAR_16 = VAR_11->error;

 FUNC_7(&VAR_11->lock, VAR_15);

 return VAR_16;
}
