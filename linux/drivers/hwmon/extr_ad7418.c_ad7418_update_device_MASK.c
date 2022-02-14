
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct ad7418_data {int valid; int* temp; int adc_max; int* in; int lock; scalar_t__ last_updated; struct i2c_client* client; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 struct ad7418_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6)
{
 struct ad7418_data *VAR_7 = FUNC_1(VAR_6);
 struct i2c_client *VAR_8 = VAR_7->client;
 s32 VAR_9;

 FUNC_6(&VAR_7->lock);

 if (FUNC_8(VAR_5, VAR_7->last_updated + VAR_4 + VAR_4 / 2)
  || !VAR_7->valid) {
  u8 VAR_10;
  int VAR_11, VAR_12;


  VAR_9 = FUNC_2(VAR_8, VAR_2);
  if (VAR_9 < 0)
   goto abort;

  VAR_10 = VAR_9;
  VAR_10 &= 0x1F;

  VAR_9 = FUNC_4(VAR_8, VAR_2,
      VAR_10 | VAR_0);
  if (VAR_9 < 0)
   goto abort;

  FUNC_9(30);

  for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
   VAR_9 = FUNC_3(VAR_8,
         VAR_3[VAR_11]);
   if (VAR_9 < 0)
    goto abort;

   VAR_7->temp[VAR_11] = VAR_9;
  }

  for (VAR_11 = 0, VAR_12 = 4; VAR_11 < VAR_7->adc_max; VAR_11++, VAR_12--) {
   VAR_9 = FUNC_4(VAR_8, VAR_2,
     VAR_10 | FUNC_0(VAR_12));
   if (VAR_9 < 0)
    goto abort;

   FUNC_9(15);
   VAR_9 = FUNC_3(VAR_8,
         VAR_1);
   if (VAR_9 < 0)
    goto abort;

   VAR_7->in[VAR_7->adc_max - 1 - VAR_11] = VAR_9;
  }


  VAR_9 = FUNC_5(VAR_8, VAR_2,
         VAR_10);
  if (VAR_9 < 0)
   goto abort;

  VAR_7->last_updated = VAR_5;
  VAR_7->valid = 1;
 }

 FUNC_7(&VAR_7->lock);
 return 0;

abort:
 VAR_7->valid = 0;
 FUNC_7(&VAR_7->lock);
 return VAR_9;
}
