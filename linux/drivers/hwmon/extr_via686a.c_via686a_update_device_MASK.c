
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via686a_data {int valid; int* in; int* in_min; int* in_max; int* fan; int* fan_min; int* temp; int* temp_over; int* temp_hyst; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 struct via686a_data* FUNC_5 (struct device*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct via686a_data*,int ) ;
 int FUNC_10 (struct via686a_data*) ;

__attribute__((used)) static struct via686a_data *FUNC_11(struct device *VAR_9)
{
 struct via686a_data *VAR_10 = FUNC_5(VAR_9);
 int VAR_11;

 FUNC_6(&VAR_10->update_lock);

 if (FUNC_8(VAR_8, VAR_10->last_updated + VAR_0 + VAR_0 / 2)
     || !VAR_10->valid) {
  for (VAR_11 = 0; VAR_11 <= 4; VAR_11++) {
   VAR_10->in[VAR_11] =
       FUNC_9(VAR_10, FUNC_2(VAR_11));
   VAR_10->in_min[VAR_11] = FUNC_9(VAR_10,
            FUNC_4
            (VAR_11));
   VAR_10->in_max[VAR_11] =
       FUNC_9(VAR_10, FUNC_3(VAR_11));
  }
  for (VAR_11 = 1; VAR_11 <= 2; VAR_11++) {
   VAR_10->fan[VAR_11 - 1] =
       FUNC_9(VAR_10, FUNC_0(VAR_11));
   VAR_10->fan_min[VAR_11 - 1] = FUNC_9(VAR_10,
           FUNC_1(VAR_11));
  }
  for (VAR_11 = 0; VAR_11 <= 2; VAR_11++) {
   VAR_10->temp[VAR_11] = FUNC_9(VAR_10,
       VAR_3[VAR_11]) << 2;
   VAR_10->temp_over[VAR_11] =
       FUNC_9(VAR_10,
            VAR_7[VAR_11]);
   VAR_10->temp_hyst[VAR_11] =
       FUNC_9(VAR_10,
            VAR_4[VAR_11]);
  }






  VAR_10->temp[0] |= (FUNC_9(VAR_10,
           VAR_5)
      & 0xc0) >> 6;
  VAR_10->temp[1] |=
      (FUNC_9(VAR_10, VAR_6) &
       0x30) >> 4;
  VAR_10->temp[2] |=
      (FUNC_9(VAR_10, VAR_6) &
       0xc0) >> 6;

  FUNC_10(VAR_10);
  VAR_10->alarms =
      FUNC_9(VAR_10,
           VAR_1) |
      (FUNC_9(VAR_10, VAR_2) << 8);
  VAR_10->last_updated = VAR_8;
  VAR_10->valid = 1;
 }

 FUNC_7(&VAR_10->update_lock);

 return VAR_10;
}
