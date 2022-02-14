
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max5821_data {int* powerdown_mode; int client; scalar_t__* powerdown; } ;
struct iio_chan_spec {size_t channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct max5821_data *VAR_4,
           const struct iio_chan_spec *VAR_5)
{
 u8 VAR_6[2];

 VAR_6[0] = VAR_0;

 if (VAR_5->channel == 0)
  VAR_6[1] = VAR_1;
 else
  VAR_6[1] = VAR_2;

 if (VAR_4->powerdown[VAR_5->channel])
  VAR_6[1] |= VAR_4->powerdown_mode[VAR_5->channel] + 1;
 else
  VAR_6[1] |= VAR_3;

 return FUNC_0(VAR_4->client, VAR_6, 2);
}
