
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sca3000_state {int* rx; int lock; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sca3000_state* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sca3000_state*,int ,int*,int) ;
 int FUNC_5 (struct sca3000_state*,int ,int) ;

__attribute__((used)) static void FUNC_6(u8 VAR_3, struct iio_dev *VAR_4)
{
 struct sca3000_state *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7, VAR_8;

 FUNC_2(&VAR_5->lock);

 if (VAR_3 & VAR_1) {
  VAR_6 = FUNC_5(VAR_5, VAR_0,
           1);
  if (VAR_6)
   goto error_ret;
  VAR_8 = VAR_5->rx[0];




  VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_5->rx,
     VAR_8 * 2);
  if (VAR_6)
   goto error_ret;
  for (VAR_7 = 0; VAR_7 < VAR_8 / 3; VAR_7++) {







   FUNC_1(VAR_4, VAR_5->rx + VAR_7 * 3 * 2);
  }
 }
error_ret:
 FUNC_3(&VAR_5->lock);
}
