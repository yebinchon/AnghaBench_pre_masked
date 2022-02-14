
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2772_chip {int id; int prox_data; int prox_mutex; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 struct tsl2772_chip* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tsl2772_chip*,int ,int ) ;
 int FUNC_4 (struct tsl2772_chip*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_5)
{
 struct tsl2772_chip *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 FUNC_1(&VAR_6->prox_mutex);

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 < 0)
  goto prox_poll_err;

 switch (VAR_6->id) {
 case 133:
 case 131:
 case 137:
 case 129:
 case 135:
  if (!(VAR_7 & VAR_3)) {
   VAR_7 = -VAR_0;
   goto prox_poll_err;
  }
  break;
 case 132:
 case 130:
 case 136:
 case 128:
 case 134:
 case 138:
  if (!(VAR_7 & VAR_4)) {
   VAR_7 = -VAR_0;
   goto prox_poll_err;
  }
  break;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_1);
 if (VAR_7 < 0)
  goto prox_poll_err;
 VAR_6->prox_data = VAR_7;

prox_poll_err:
 FUNC_2(&VAR_6->prox_mutex);

 return VAR_7;
}
