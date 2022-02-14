
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adc5_chip {int complete; int poll_eoc; } ;
struct adc5_channel_prop {int hw_settle_time; int channel; int avg_samples; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct adc5_chip*,int ,int *,int) ;
 int FUNC_1 (struct adc5_chip*,struct adc5_channel_prop*,int *) ;
 int FUNC_2 (struct adc5_chip*,int ,int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct adc5_chip *VAR_5,
   struct adc5_channel_prop *VAR_6)
{
 int VAR_7;
 u8 VAR_8[6];


 VAR_7 = FUNC_0(VAR_5, VAR_1, VAR_8, sizeof(VAR_8));
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_1(VAR_5, VAR_6, &VAR_8[0]);


 VAR_8[1] &= (u8) ~VAR_3;
 VAR_8[1] |= VAR_6->avg_samples;


 VAR_8[2] = VAR_6->channel;


 VAR_8[3] &= (u8) ~VAR_4;
 VAR_8[3] |= VAR_6->hw_settle_time;


 VAR_8[4] |= VAR_2;


 VAR_8[5] |= VAR_0;

 if (!VAR_5->poll_eoc)
  FUNC_3(&VAR_5->complete);

 return FUNC_2(VAR_5, VAR_1, VAR_8, sizeof(VAR_8));
}
