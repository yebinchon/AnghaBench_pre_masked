
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis5595_data {int valid; int maxins; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int temp; int temp_over; int temp_hyst; int* fan_div; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sis5595_data* FUNC_5 (struct device*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sis5595_data*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct sis5595_data *FUNC_10(struct device *VAR_8)
{
 struct sis5595_data *VAR_9 = FUNC_5(VAR_8);
 int VAR_10;

 FUNC_6(&VAR_9->update_lock);

 if (FUNC_9(VAR_7, VAR_9->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_9->valid) {

  for (VAR_10 = 0; VAR_10 <= VAR_9->maxins; VAR_10++) {
   VAR_9->in[VAR_10] =
       FUNC_8(VAR_9, FUNC_2(VAR_10));
   VAR_9->in_min[VAR_10] =
       FUNC_8(VAR_9,
            FUNC_4(VAR_10));
   VAR_9->in_max[VAR_10] =
       FUNC_8(VAR_9,
            FUNC_3(VAR_10));
  }
  for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
   VAR_9->fan[VAR_10] =
       FUNC_8(VAR_9, FUNC_0(VAR_10));
   VAR_9->fan_min[VAR_10] =
       FUNC_8(VAR_9,
            FUNC_1(VAR_10));
  }
  if (VAR_9->maxins == 3) {
   VAR_9->temp =
       FUNC_8(VAR_9, VAR_4);
   VAR_9->temp_over =
       FUNC_8(VAR_9, VAR_6);
   VAR_9->temp_hyst =
       FUNC_8(VAR_9, VAR_5);
  }
  VAR_10 = FUNC_8(VAR_9, VAR_3);
  VAR_9->fan_div[0] = (VAR_10 >> 4) & 0x03;
  VAR_9->fan_div[1] = VAR_10 >> 6;
  VAR_9->alarms =
      FUNC_8(VAR_9, VAR_1) |
      (FUNC_8(VAR_9, VAR_2) << 8);
  VAR_9->last_updated = VAR_7;
  VAR_9->valid = 1;
 }

 FUNC_7(&VAR_9->update_lock);

 return VAR_9;
}
