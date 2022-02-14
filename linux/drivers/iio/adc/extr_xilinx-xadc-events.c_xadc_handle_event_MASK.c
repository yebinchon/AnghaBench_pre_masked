
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 struct iio_chan_spec* FUNC_3 (struct iio_dev*,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_4, unsigned int VAR_5)
{
 const struct iio_chan_spec *VAR_6;


 if (VAR_5 == 0)
  return;

 VAR_6 = FUNC_3(VAR_4, VAR_5);

 if (VAR_6->type == VAR_3) {




  FUNC_2(VAR_4,
   FUNC_0(VAR_6->type, VAR_6->channel,
    VAR_2, VAR_1),
   FUNC_1(VAR_4));
 } else {





  FUNC_2(VAR_4,
   FUNC_0(VAR_6->type, VAR_6->channel,
    VAR_2, VAR_0),
   FUNC_1(VAR_4));
 }
}
