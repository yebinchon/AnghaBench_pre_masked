
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int buffer; int modes; int pollfunc; int id; int * setup_ops; } ;
struct iio_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,struct iio_dev*,char*,int ) ;
 int FUNC_1 (struct iio_dev*,struct iio_buffer*) ;
 struct iio_buffer* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct iio_dev *VAR_5)
{
 int VAR_6;
 struct iio_buffer *VAR_7;


 VAR_7 = FUNC_2();
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  goto error_ret;
 }

 FUNC_1(VAR_5, VAR_7);





 VAR_5->setup_ops = &VAR_3;
 VAR_5->pollfunc = FUNC_0(((void*)0),
       &VAR_4,
       VAR_2,
       VAR_5,
       "iio_simple_dummy_consumer%d",
       VAR_5->id);

 if (!VAR_5->pollfunc) {
  VAR_6 = -VAR_0;
  goto error_free_buffer;
 }





 VAR_5->modes |= VAR_1;

 return 0;

error_free_buffer:
 FUNC_3(VAR_5->buffer);
error_ret:
 return VAR_6;
}
