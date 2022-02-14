
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int num_channels; int * channels; } ;


 int FUNC_0 (struct iio_dev*,int *) ;

__attribute__((used)) static inline int FUNC_1(struct iio_dev *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
  VAR_2 = FUNC_0(VAR_0,
       &VAR_0->channels[VAR_1]);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_3 += VAR_2;
 }
 return VAR_3;
}
