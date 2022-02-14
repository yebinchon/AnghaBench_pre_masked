
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int num_msgs; int block; int rc; int lock; scalar_t__ reg_base; struct i2c_msg* msgs; } ;
struct i2c_msg {unsigned long addr; int flags; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct mv64xxx_i2c_data*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct mv64xxx_i2c_data *VAR_11)
{
 struct i2c_msg *VAR_12 = VAR_11->msgs;
 int VAR_13 = VAR_11->num_msgs;
 unsigned long VAR_14;
 unsigned long VAR_15;

 FUNC_2(&VAR_11->lock, VAR_15);


 VAR_14 = VAR_4 |
  (VAR_12[0].addr << VAR_3);

 if (VAR_12[0].flags & VAR_1)
  VAR_14 |= VAR_2;


 if (VAR_13 == 1 && !(VAR_12[0].flags & VAR_0)) {
  size_t VAR_16 = VAR_12[0].len - 1;

  VAR_14 |= VAR_9 |
   (VAR_16 << VAR_8);
  FUNC_0(VAR_11);
 }

 else if (VAR_13 == 1 && VAR_12[0].flags & VAR_0) {
  size_t VAR_17 = VAR_12[0].len - 1;

  VAR_14 |= VAR_5 |
   (VAR_17 << VAR_7);
 }




 else if (VAR_13 == 2) {
  size_t VAR_18 = VAR_12[0].len - 1;
  size_t VAR_19 = VAR_12[1].len - 1;

  VAR_14 |=
   VAR_5 |
   VAR_9 |
   (VAR_18 << VAR_8) |
   (VAR_19 << VAR_7) |
   VAR_6;
  FUNC_0(VAR_11);
 }


 VAR_11->block = 1;
 FUNC_4(VAR_14, VAR_11->reg_base + VAR_10);
 FUNC_3(&VAR_11->lock, VAR_15);

 FUNC_1(VAR_11);

 return VAR_11->rc;
}
