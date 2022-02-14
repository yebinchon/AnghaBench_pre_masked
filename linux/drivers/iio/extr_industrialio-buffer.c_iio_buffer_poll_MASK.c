
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct iio_dev {int info; struct iio_buffer* buffer; } ;
struct iio_buffer {int watermark; int pollq; } ;
struct file {struct iio_dev* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iio_dev*,struct iio_buffer*,int ,int ) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;

__poll_t FUNC_2(struct file *VAR_2,
        struct poll_table_struct *VAR_3)
{
 struct iio_dev *VAR_4 = VAR_2->private_data;
 struct iio_buffer *VAR_5 = VAR_4->buffer;

 if (!VAR_4->info || VAR_5 == ((void*)0))
  return 0;

 FUNC_1(VAR_2, &VAR_5->pollq, VAR_3);
 if (FUNC_0(VAR_4, VAR_5, VAR_5->watermark, 0))
  return VAR_0 | VAR_1;
 return 0;
}
