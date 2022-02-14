
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pms7003_frame {int data; } ;
struct pms7003_state {int lock; struct pms7003_frame frame; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iio_dev*) ;
 struct pms7003_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pms7003_state*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct iio_poll_func *VAR_10 = VAR_9;
 struct iio_dev *VAR_11 = VAR_10->indio_dev;
 struct pms7003_state *VAR_12 = FUNC_1(VAR_11);
 struct pms7003_frame *VAR_13 = &VAR_12->frame;
 u16 VAR_14[3 + 1 + 4];
 int VAR_15;

 FUNC_4(&VAR_12->lock);
 VAR_15 = FUNC_6(VAR_12, VAR_0);
 if (VAR_15) {
  FUNC_5(&VAR_12->lock);
  goto err;
 }

 VAR_14[VAR_2] = FUNC_7(VAR_13->data + VAR_6);
 VAR_14[VAR_4] = FUNC_7(VAR_13->data + VAR_7);
 VAR_14[VAR_3] = FUNC_7(VAR_13->data + VAR_5);
 FUNC_5(&VAR_12->lock);

 FUNC_2(VAR_11, VAR_14,
        FUNC_0(VAR_11));
err:
 FUNC_3(VAR_11->trig);

 return VAR_1;
}
