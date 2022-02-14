
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {int intr; int int_enabled; int lock; int poweroff_work; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 struct tsl2563_chip* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct tsl2563_chip*) ;
 int FUNC_7 (struct tsl2563_chip*) ;
 int FUNC_8 (struct tsl2563_chip*,int) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
 enum iio_event_direction VAR_6, int VAR_7)
{
 struct tsl2563_chip *VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = 0;

 FUNC_3(&VAR_8->lock);
 if (VAR_7 && !(VAR_8->intr & 0x30)) {
  VAR_8->intr &= ~0x30;
  VAR_8->intr |= 0x10;

  FUNC_0(&VAR_8->poweroff_work);
  if (!FUNC_7(VAR_8)) {
   VAR_9 = FUNC_8(VAR_8, 1);
   if (VAR_9)
    goto out;
   VAR_9 = FUNC_6(VAR_8);
   if (VAR_9)
    goto out;
  }
  VAR_9 = FUNC_1(VAR_8->client,
      VAR_1 | VAR_2,
      VAR_8->intr);
  VAR_8->int_enabled = 1;
 }

 if (!VAR_7 && (VAR_8->intr & 0x30)) {
  VAR_8->intr &= ~0x30;
  VAR_9 = FUNC_1(VAR_8->client,
      VAR_1 | VAR_2,
      VAR_8->intr);
  VAR_8->int_enabled = 0;

  FUNC_5(&VAR_8->poweroff_work, 5 * VAR_0);
 }
out:
 FUNC_4(&VAR_8->lock);

 return VAR_9;
}
