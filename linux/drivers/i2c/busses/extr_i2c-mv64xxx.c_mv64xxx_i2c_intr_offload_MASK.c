
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv64xxx_i2c_data {int num_msgs; int waitq; scalar_t__ block; scalar_t__ reg_base; TYPE_1__* msgs; int rc; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct mv64xxx_i2c_data*,TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct mv64xxx_i2c_data *VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_8->reg_base +
        VAR_6);
 if (!VAR_9)
  return VAR_3;

 VAR_10 = FUNC_1(VAR_8->reg_base +
         VAR_7);

 if (VAR_10 & VAR_4) {
  VAR_8->rc = -VAR_0;
  goto out;
 }

 VAR_8->rc = 0;





 if (VAR_8->num_msgs == 1 && VAR_8->msgs[0].flags & VAR_1) {
  FUNC_0(VAR_8, VAR_8->msgs);
  VAR_8->msgs++;
  VAR_8->num_msgs--;
 }




 else if (VAR_8->num_msgs == 2 &&
   !(VAR_8->msgs[0].flags & VAR_1) &&
   VAR_8->msgs[1].flags & VAR_1) {
  FUNC_0(VAR_8, VAR_8->msgs + 1);
  VAR_8->msgs += 2;
  VAR_8->num_msgs -= 2;
 }

out:
 FUNC_3(0, VAR_8->reg_base + VAR_5);
 FUNC_3(0, VAR_8->reg_base +
        VAR_6);
 VAR_8->block = 0;

 FUNC_2(&VAR_8->waitq);

 return VAR_2;
}
