
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hts221_hw {TYPE_1__* sensors; int regmap; } ;
struct hts221_avg {scalar_t__* avg_avl; int mask; int addr; } ;
typedef enum hts221_sensor_type { ____Placeholder_hts221_sensor_type } hts221_sensor_type ;
struct TYPE_2__ {int cur_avg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct hts221_avg* VAR_2 ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct hts221_hw *VAR_3,
        enum hts221_sensor_type VAR_4,
        u16 VAR_5)
{
 const struct hts221_avg *VAR_6 = &VAR_2[VAR_4];
 int VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_6->avg_avl[VAR_7] == VAR_5)
   break;

 if (VAR_7 == VAR_1)
  return -VAR_0;

 VAR_9 = ((VAR_7 << FUNC_0(VAR_6->mask)) & VAR_6->mask);
 VAR_8 = FUNC_1(VAR_3->regmap, VAR_6->addr,
     VAR_6->mask, VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_3->sensors[VAR_4].cur_avg_idx = VAR_7;

 return 0;
}
