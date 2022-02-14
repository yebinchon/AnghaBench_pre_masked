
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lm95241_data {int config; int interval; int update_lock; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct lm95241_data* FUNC_0 (struct device*) ;

 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7, u32 VAR_8, int VAR_9,
         long VAR_10)
{
 struct lm95241_data *VAR_11 = FUNC_0(VAR_7);
 int VAR_12;
 u8 VAR_13;
 int VAR_14;

 FUNC_2(&VAR_11->update_lock);

 switch (VAR_8) {
 case 128:
  VAR_13 = VAR_11->config & ~VAR_4;
  if (VAR_10 < 130) {
   VAR_12 = 76;
   VAR_13 |= VAR_0;
  } else if (VAR_10 < 590) {
   VAR_12 = 182;
   VAR_13 |= VAR_1;
  } else if (VAR_10 < 1850) {
   VAR_12 = 1000;
   VAR_13 |= VAR_2;
  } else {
   VAR_12 = 2700;
   VAR_13 |= VAR_3;
  }
  VAR_11->interval = VAR_12;
  VAR_11->config = VAR_13;
  VAR_14 = FUNC_1(VAR_11->client,
      VAR_6, VAR_13);
  break;
 default:
  VAR_14 = -VAR_5;
  break;
 }
 FUNC_3(&VAR_11->update_lock);
 return VAR_14;
}
