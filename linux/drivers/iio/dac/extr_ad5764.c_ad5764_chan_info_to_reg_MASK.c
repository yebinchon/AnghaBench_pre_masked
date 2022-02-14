
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int address; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




__attribute__((used)) static int FUNC_3(struct iio_chan_spec const *VAR_0, long VAR_1)
{
 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_0->address);
 case 130:
  return FUNC_2(VAR_0->address);
 case 129:
  return FUNC_1(VAR_0->address);
 default:
  break;
 }

 return 0;
}
