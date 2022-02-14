
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int dummy; } ;
struct adc12138 {int complete; } ;
typedef int __be16 ;


 int FUNC_0 (struct adc12138*,int *) ;
 int FUNC_1 (struct adc12138*,struct iio_chan_spec const*) ;
 int FUNC_2 (struct adc12138*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct adc12138 *VAR_0,
       struct iio_chan_spec const *VAR_1,
       __be16 *VAR_2)
{
 int VAR_3;

 FUNC_4(&VAR_0->complete);

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, FUNC_3(100));
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_2);
}
