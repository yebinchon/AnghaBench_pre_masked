
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 struct sca3000_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2)
{
 int VAR_3;
 struct sca3000_state *VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_2, 0);
 if (VAR_3)
  return VAR_3;


 FUNC_2(&VAR_4->lock);

 VAR_3 = FUNC_4(VAR_4, VAR_0, 1);
 if (VAR_3)
  goto unlock;
 VAR_3 = FUNC_5(VAR_4,
    VAR_0,
    VAR_4->rx[0] & ~VAR_1);
unlock:
 FUNC_3(&VAR_4->lock);
 return VAR_3;
}
