
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int flags; int len; } ;
struct img_i2c {scalar_t__ mode; int msg_status; int last_msg; int check_timer; int msg_complete; int lock; struct i2c_msg msg; } ;
struct TYPE_2__ {int parent; } ;
struct i2c_adapter {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 struct img_i2c* FUNC_3 (struct i2c_adapter*) ;
 int FUNC_4 (struct img_i2c*) ;
 int FUNC_5 (struct img_i2c*) ;
 int FUNC_6 (struct img_i2c*,int) ;
 int FUNC_7 (struct img_i2c*) ;
 int FUNC_8 (struct img_i2c*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 unsigned long FUNC_15 (int *,int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_adapter *VAR_9, struct i2c_msg *VAR_10,
   int VAR_11)
{
 struct img_i2c *VAR_12 = FUNC_3(VAR_9);
 bool VAR_13 = 0;
 int VAR_14, VAR_15;
 unsigned long VAR_16;

 if (VAR_12->mode == VAR_6) {
  FUNC_0(1, "refusing to service transaction in suspended state\n");
  return -VAR_0;
 }

 if (VAR_12->mode == VAR_5)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {




  if (!VAR_10[VAR_14].len && VAR_10[VAR_14].flags & VAR_3)
   return -VAR_0;
  if (!VAR_10[VAR_14].len ||
      (VAR_10[VAR_14].flags & VAR_2))
   VAR_13 = 1;
 }

 VAR_15 = FUNC_9(VAR_9->dev.parent);
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct i2c_msg *VAR_17 = &VAR_10[VAR_14];
  unsigned long VAR_18;

  FUNC_13(&VAR_12->lock, VAR_18);





  VAR_12->msg = *VAR_17;
  VAR_12->msg_status = 0;
  VAR_12->last_msg = (VAR_14 == VAR_11 - 1);
  FUNC_12(&VAR_12->msg_complete);







  FUNC_8(VAR_12, VAR_8, ~0);
  FUNC_8(VAR_12, VAR_7, ~0);

  if (VAR_13) {
   FUNC_4(VAR_12);
  } else {




   FUNC_6(VAR_12, !VAR_12->last_msg);

   if (VAR_17->flags & VAR_3)
    FUNC_5(VAR_12);
   else
    FUNC_7(VAR_12);
   FUNC_6(VAR_12, 0);
   FUNC_6(VAR_12, !VAR_12->last_msg);
  }
  FUNC_14(&VAR_12->lock, VAR_18);

  VAR_16 = FUNC_15(&VAR_12->msg_complete,
            VAR_4);
  FUNC_1(&VAR_12->check_timer);

  if (VAR_16 == 0) {
   FUNC_2(VAR_9->dev.parent, "i2c transfer timed out\n");
   VAR_12->msg_status = -VAR_1;
   break;
  }

  if (VAR_12->msg_status)
   break;
 }

 FUNC_10(VAR_9->dev.parent);
 FUNC_11(VAR_9->dev.parent);

 return VAR_12->msg_status ? VAR_12->msg_status : VAR_11;
}
