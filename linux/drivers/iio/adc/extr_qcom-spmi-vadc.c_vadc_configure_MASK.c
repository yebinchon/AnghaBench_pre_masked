
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vadc_priv {int dummy; } ;
struct vadc_channel_prop {int channel; int decimation; int hw_settle_time; int avg_samples; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vadc_priv*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct vadc_priv *VAR_12,
     struct vadc_channel_prop *VAR_13)
{
 u8 VAR_14, VAR_15;
 int VAR_16;


 VAR_15 = (VAR_10 << VAR_11) |
       VAR_3 | VAR_4;
 VAR_16 = FUNC_0(VAR_12, VAR_9, VAR_15);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_0(VAR_12, VAR_0, VAR_13->channel);
 if (VAR_16)
  return VAR_16;


 VAR_14 = VAR_13->decimation << VAR_1;
 VAR_16 = FUNC_0(VAR_12, VAR_2, VAR_14);
 if (VAR_16)
  return VAR_16;


 VAR_16 = FUNC_0(VAR_12, VAR_8, VAR_13->hw_settle_time);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_0(VAR_12, VAR_5, VAR_13->avg_samples);
 if (VAR_16)
  return VAR_16;

 if (VAR_13->avg_samples)
  VAR_16 = FUNC_0(VAR_12, VAR_6, VAR_7);
 else
  VAR_16 = FUNC_0(VAR_12, VAR_6, 0);

 return VAR_16;
}
