
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int mutex; int lock; struct iio_trigger* trigger; struct iio_trigger* convst_trigger; } ;
struct iio_trigger {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct xadc*,int ,unsigned int,unsigned int) ;
 struct xadc* FUNC_1 (struct iio_trigger*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct xadc*,int ,unsigned int*) ;
 int FUNC_7 (struct xadc*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct iio_trigger *VAR_6, bool VAR_7)
{
 struct xadc *VAR_8 = FUNC_1(VAR_6);
 unsigned long VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;

 FUNC_2(&VAR_8->mutex);

 if (VAR_7) {

  if (VAR_8->trigger != ((void*)0)) {
   VAR_12 = -VAR_0;
   goto err_out;
  } else {
   VAR_8->trigger = VAR_6;
   if (VAR_6 == VAR_8->convst_trigger)
    VAR_10 = VAR_4;
   else
    VAR_10 = 0;
  }
  VAR_12 = FUNC_0(VAR_8, VAR_5, VAR_4,
     VAR_10);
  if (VAR_12)
   goto err_out;
 } else {
  VAR_8->trigger = ((void*)0);
 }

 FUNC_4(&VAR_8->lock, VAR_9);
 FUNC_6(VAR_8, VAR_2, &VAR_11);
 FUNC_7(VAR_8, VAR_3, VAR_11 & VAR_1);
 if (VAR_7)
  VAR_11 |= VAR_1;
 else
  VAR_11 &= ~VAR_1;
 FUNC_7(VAR_8, VAR_2, VAR_11);
 FUNC_5(&VAR_8->lock, VAR_9);

err_out:
 FUNC_3(&VAR_8->mutex);

 return VAR_12;
}
