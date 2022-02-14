
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {scalar_t__ conversion_count; scalar_t__ sample_rate; int last_value; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct nau7802_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nau7802_state*) ;
 int FUNC_5 (struct nau7802_state*) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
   struct iio_chan_spec const *VAR_6,
   int *VAR_7)
{
 struct nau7802_state *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;

 FUNC_5(VAR_8);


 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;






 do {
  VAR_9 = FUNC_0(VAR_8->client, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;

  while (!(VAR_9 & VAR_2)) {
   if (VAR_8->sample_rate != VAR_4)
    FUNC_3(20);
   else
    FUNC_2(4);
   VAR_9 = FUNC_0(VAR_8->client,
       VAR_3);
   if (VAR_9 < 0)
    return VAR_9;
  }

  VAR_9 = FUNC_4(VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  if (VAR_8->conversion_count < VAR_1)
   VAR_8->conversion_count++;
 } while (VAR_8->conversion_count < VAR_1);

 *VAR_7 = VAR_8->last_value;

 return VAR_0;
}
