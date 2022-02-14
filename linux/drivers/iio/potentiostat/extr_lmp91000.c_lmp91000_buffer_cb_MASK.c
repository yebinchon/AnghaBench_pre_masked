
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int* buffer; size_t chan_select; int completion; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 struct lmp91000_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, void *VAR_1)
{
 struct iio_dev *VAR_2 = VAR_1;
 struct lmp91000_data *VAR_3 = FUNC_1(VAR_2);

 VAR_3->buffer[VAR_3->chan_select] = *((int *)VAR_0);
 FUNC_0(&VAR_3->completion);

 return 0;
}
