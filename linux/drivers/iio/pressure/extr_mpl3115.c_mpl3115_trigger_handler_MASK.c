
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpl3115_data {int lock; int client; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; int active_scan_mask; } ;
typedef int irqreturn_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct iio_dev*) ;
 struct mpl3115_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mpl3115_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct mpl3115_data *VAR_7 = FUNC_2(VAR_6);
 u8 VAR_8[16];
 int VAR_9, VAR_10 = 0;

 FUNC_7(&VAR_7->lock);
 VAR_9 = FUNC_6(VAR_7);
 if (VAR_9 < 0) {
  FUNC_8(&VAR_7->lock);
  goto done;
 }

 FUNC_5(VAR_8, 0, sizeof(VAR_8));
 if (FUNC_9(0, VAR_6->active_scan_mask)) {
  VAR_9 = FUNC_0(VAR_7->client,
   VAR_1, 3, &VAR_8[VAR_10]);
  if (VAR_9 < 0) {
   FUNC_8(&VAR_7->lock);
   goto done;
  }
  VAR_10 += 4;
 }

 if (FUNC_9(1, VAR_6->active_scan_mask)) {
  VAR_9 = FUNC_0(VAR_7->client,
   VAR_2, 2, &VAR_8[VAR_10]);
  if (VAR_9 < 0) {
   FUNC_8(&VAR_7->lock);
   goto done;
  }
 }
 FUNC_8(&VAR_7->lock);

 FUNC_3(VAR_6, VAR_8,
  FUNC_1(VAR_6));

done:
 FUNC_4(VAR_6->trig);
 return VAR_0;
}
