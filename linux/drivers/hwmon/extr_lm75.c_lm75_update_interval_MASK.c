
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct lm75_data {int kind; TYPE_1__* params; int sample_time; int client; int regmap; int resolution; } ;
struct device {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int * sample_times; int * resolutions; scalar_t__ num_sample_times; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lm75_data* FUNC_0 (struct device*) ;
 size_t FUNC_1 (long,int *,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int * VAR_3 ;
 int FUNC_3 (struct lm75_data*,int ,int ) ;

 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (int ,int ,unsigned int) ;


__attribute__((used)) static int FUNC_6(struct device *VAR_4, long VAR_5)
{
 struct lm75_data *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7;
 u8 VAR_8;
 s32 VAR_9;

 VAR_8 = FUNC_1(VAR_5, VAR_6->params->sample_times,
        (int)VAR_6->params->num_sample_times);

 switch (VAR_6->kind) {
 default:
  VAR_9 = FUNC_3(VAR_6, VAR_3[VAR_8],
     VAR_1);
  if (VAR_9)
   return VAR_9;

  VAR_6->sample_time = VAR_6->params->sample_times[VAR_8];
  if (VAR_6->params->resolutions)
   VAR_6->resolution = VAR_6->params->resolutions[VAR_8];
  break;
 case 128:
  VAR_9 = FUNC_4(VAR_6->regmap, VAR_0, &VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_7 &= ~0x00c0;
  VAR_7 |= (3 - VAR_8) << 6;
  VAR_9 = FUNC_5(VAR_6->regmap, VAR_0, VAR_7);
  if (VAR_9 < 0)
   return VAR_9;
  VAR_6->sample_time = VAR_6->params->sample_times[VAR_8];
  break;
 case 129:
  VAR_9 = FUNC_2(VAR_6->client, VAR_2,
      VAR_8 + 1);
  if (VAR_9)
   return VAR_9;
  VAR_6->sample_time = VAR_6->params->sample_times[VAR_8];
  break;
 }
 return 0;
}
