
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ds4424_data {int lock; int client; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct ds4424_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_0,
        int *VAR_1, int VAR_2)
{
 struct ds4424_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 FUNC_3(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_3->client, FUNC_0(VAR_2));
 if (VAR_4 < 0)
  goto fail;

 *VAR_1 = VAR_4;

fail:
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
