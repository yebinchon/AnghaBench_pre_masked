
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max1363_state {int (* recv ) (int ,int *,unsigned long) ;int client; TYPE_2__* chip_info; TYPE_1__* current_mode; } ;
struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; scalar_t__ scan_timestamp; } ;
typedef int s64 ;
typedef int irqreturn_t ;
typedef int __u8 ;
struct TYPE_4__ {int bits; } ;
struct TYPE_3__ {int modemask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct max1363_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ,int *,unsigned long) ;
 int FUNC_8 (int ,int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct max1363_state *VAR_7 = FUNC_2(VAR_6);
 __u8 *VAR_8;
 int VAR_9;
 size_t VAR_10;
 unsigned long VAR_11 = FUNC_0(VAR_7->current_mode->modemask,
           VAR_2);


 if (VAR_7->chip_info->bits != 8)
  VAR_10 = VAR_11*2;
 else
  VAR_10 = VAR_11;
 if (VAR_6->scan_timestamp) {
  VAR_10 += sizeof(s64);
  if (VAR_10 % sizeof(s64))
   VAR_10 += sizeof(s64) - (VAR_10 % sizeof(s64));
 }




 if (VAR_11 == 0)
  goto done;

 VAR_8 = FUNC_6(VAR_10, VAR_0);
 if (VAR_8 == ((void*)0))
  goto done;
 if (VAR_7->chip_info->bits != 8)
  VAR_9 = VAR_7->recv(VAR_7->client, VAR_8, VAR_11 * 2);
 else
  VAR_9 = VAR_7->recv(VAR_7->client, VAR_8, VAR_11);
 if (VAR_9 < 0)
  goto done_free;

 FUNC_3(VAR_6, VAR_8,
        FUNC_1(VAR_6));

done_free:
 FUNC_5(VAR_8);
done:
 FUNC_4(VAR_6->trig);

 return VAR_1;
}
