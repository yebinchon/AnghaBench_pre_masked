
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct cpcap_adc {int done; int wq_data_avail; int reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpcap_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct iio_dev *VAR_6 = VAR_5;
 struct cpcap_adc *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7->reg, VAR_1,
       VAR_0,
       VAR_0);
 if (VAR_8)
  return VAR_3;

 VAR_7->done = 1;
 FUNC_2(&VAR_7->wq_data_avail);

 return VAR_2;
}
