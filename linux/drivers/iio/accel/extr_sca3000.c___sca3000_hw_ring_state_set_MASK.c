
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static inline
int FUNC_6(struct iio_dev *VAR_2, bool VAR_3)
{
 struct sca3000_state *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_4(VAR_4, VAR_0, 1);
 if (VAR_5)
  goto error_ret;
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "supposedly enabling ring buffer\n");
  VAR_5 = FUNC_5(VAR_4,
   VAR_0,
   (VAR_4->rx[0] | VAR_1));
 } else
  VAR_5 = FUNC_5(VAR_4,
   VAR_0,
   (VAR_4->rx[0] & ~VAR_1));
error_ret:
 FUNC_3(&VAR_4->lock);

 return VAR_5;
}
