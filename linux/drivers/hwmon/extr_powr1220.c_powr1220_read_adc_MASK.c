
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powr1220_data {int* adc_valid; int* adc_maxes; int* adc_values; int update_lock; scalar_t__* adc_last_updated; int client; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct powr1220_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, int VAR_8)
{
 struct powr1220_data *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 FUNC_3(&VAR_9->update_lock);

 if (FUNC_5(VAR_6, VAR_9->adc_last_updated[VAR_8] + VAR_5) ||
   !VAR_9->adc_valid[VAR_8]) {






  if (VAR_9->adc_maxes[VAR_8] > VAR_0 ||
    VAR_9->adc_maxes[VAR_8] == 0)
   VAR_12 = 1 << 4;


  VAR_11 = FUNC_2(VAR_9->client, VAR_1,
    VAR_12 | VAR_8);
  if (VAR_11)
   goto exit;





  FUNC_6(200);


  VAR_11 = FUNC_1(VAR_9->client, VAR_4);
  if (VAR_11 < 0)
   goto exit;

  VAR_10 = VAR_11 >> 4;


  VAR_11 = FUNC_1(VAR_9->client, VAR_3);
  if (VAR_11 < 0)
   goto exit;

  VAR_10 |= VAR_11 << 4;


  VAR_10 *= VAR_2;
  VAR_9->adc_values[VAR_8] = VAR_10;
  VAR_9->adc_valid[VAR_8] = 1;
  VAR_9->adc_last_updated[VAR_8] = VAR_6;
  VAR_11 = VAR_10;

  if (VAR_10 > VAR_9->adc_maxes[VAR_8])
   VAR_9->adc_maxes[VAR_8] = VAR_10;
 } else {
  VAR_11 = VAR_9->adc_values[VAR_8];
 }

exit:
 FUNC_4(&VAR_9->update_lock);

 return VAR_11;
}
