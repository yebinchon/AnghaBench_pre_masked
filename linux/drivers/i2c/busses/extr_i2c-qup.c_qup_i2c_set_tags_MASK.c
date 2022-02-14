
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int pos; int count; } ;
struct qup_i2c_dev {TYPE_1__ blk; scalar_t__ is_last; } ;
struct i2c_msg {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct i2c_msg*) ;
 scalar_t__ FUNC_1 (struct i2c_msg*) ;
 int FUNC_2 (struct qup_i2c_dev*) ;
 int FUNC_3 (int,int*,struct qup_i2c_dev*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_4(u8 *VAR_9, struct qup_i2c_dev *VAR_10,
       struct i2c_msg *VAR_11)
{
 u16 VAR_12 = FUNC_0(VAR_11);
 int VAR_13 = 0;
 int VAR_14;

 int VAR_15 = (VAR_10->blk.pos == (VAR_10->blk.count - 1)) && (VAR_10->is_last);


 if (FUNC_1(VAR_11))
  return FUNC_3(VAR_12, VAR_9, VAR_10, VAR_11);

 if (VAR_10->blk.pos == 0) {
  VAR_9[VAR_13++] = VAR_8;
  VAR_9[VAR_13++] = VAR_12 & 0xff;

  if (VAR_11->flags & VAR_1)
   VAR_9[VAR_13++] = VAR_12 >> 8;
 }


 if (VAR_15) {
  if (VAR_11->flags & VAR_0)
   VAR_9[VAR_13++] = VAR_5;
  else
   VAR_9[VAR_13++] = VAR_7;
 } else {
  if (VAR_11->flags & VAR_0)
   VAR_9[VAR_13++] = VAR_10->blk.pos == (VAR_10->blk.count - 1) ?
          VAR_4 :
          VAR_3;
  else
   VAR_9[VAR_13++] = VAR_6;
 }

 VAR_14 = FUNC_2(VAR_10);


 if (VAR_14 == VAR_2)
  VAR_9[VAR_13++] = 0;
 else
  VAR_9[VAR_13++] = VAR_14;

 return VAR_13;
}
