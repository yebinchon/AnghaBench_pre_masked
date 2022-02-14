
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau7802_state {int* scale_avail; int sample_rate; int lock; int client; int conversion_count; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;


 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 struct nau7802_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int* VAR_2 ;
 int FUNC_6 (struct nau7802_state*,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct nau7802_state *VAR_8 = FUNC_3(VAR_3);
 int VAR_9, VAR_10;

 switch (VAR_7) {
 case 128:
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8->scale_avail); VAR_9++)
   if (VAR_6 == VAR_8->scale_avail[VAR_9])
    return FUNC_6(VAR_8, VAR_9);

  break;

 case 129:
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++)
   if (VAR_5 == VAR_2[VAR_9]) {
    FUNC_4(&VAR_8->lock);
    VAR_8->sample_rate = VAR_9;
    VAR_8->conversion_count = 0;
    VAR_10 = FUNC_2(VAR_8->client,
     VAR_1,
     FUNC_1(VAR_8->sample_rate));
    FUNC_5(&VAR_8->lock);
    return VAR_10;
   }

  break;

 default:
  break;
 }

 return -VAR_0;
}
