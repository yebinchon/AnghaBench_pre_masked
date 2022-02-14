
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3)
{
 int VAR_4;
 struct sca3000_state *VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_5->lock);
 VAR_4 = FUNC_4(VAR_5, VAR_0, 1);
 if (VAR_4 < 0)
  goto error_ret;
 FUNC_0(&VAR_3->dev,
   "sca3000 revision major=%lu, minor=%lu\n",
   VAR_5->rx[0] & VAR_1,
   VAR_5->rx[0] & VAR_2);
error_ret:
 FUNC_3(&VAR_5->lock);

 return VAR_4;
}
