
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nau7802_state {int last_value; TYPE_1__* client; int value_ok; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nau7802_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nau7802_state*) ;
 int FUNC_5 (struct nau7802_state*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_2,
   struct iio_chan_spec const *VAR_3,
   int *VAR_4)
{
 struct nau7802_state *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;

 FUNC_6(&VAR_5->value_ok);
 FUNC_1(VAR_5->client->irq);

 FUNC_5(VAR_5);


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 < 0)
  goto read_chan_info_failure;


 VAR_6 = FUNC_7(&VAR_5->value_ok,
   FUNC_3(1000));
 if (VAR_6 == 0)
  VAR_6 = -VAR_0;

 if (VAR_6 < 0)
  goto read_chan_info_failure;

 FUNC_0(VAR_5->client->irq);

 *VAR_4 = VAR_5->last_value;

 return VAR_1;

read_chan_info_failure:
 FUNC_0(VAR_5->client->irq);

 return VAR_6;
}
