
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak8974 {int map; TYPE_1__* i2c; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ak8974*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct ak8974 *VAR_4, __le16 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_4->map, VAR_2, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;


 if (VAR_6 & VAR_1) {
  FUNC_1(&VAR_4->i2c->dev,
   "range overflow in sensor\n");
  return -VAR_3;
 }

 VAR_7 = FUNC_2(VAR_4->map, VAR_0, VAR_5, 6);
 if (VAR_7)
  return VAR_7;

 return VAR_7;
}
