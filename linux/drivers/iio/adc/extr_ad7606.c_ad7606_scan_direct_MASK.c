
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ad7606_state {int* data; int gpio_convst; int completion; } ;


 int VAR_0 ;
 int FUNC_0 (struct ad7606_state*) ;
 int FUNC_1 (int ,int) ;
 struct ad7606_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1, unsigned int VAR_2)
{
 struct ad7606_state *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 FUNC_1(VAR_3->gpio_convst, 1);
 VAR_4 = FUNC_4(&VAR_3->completion,
       FUNC_3(1000));
 if (!VAR_4) {
  VAR_4 = -VAR_0;
  goto error_ret;
 }

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == 0)
  VAR_4 = VAR_3->data[VAR_2];

error_ret:
 FUNC_1(VAR_3->gpio_convst, 0);

 return VAR_4;
}
