
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opt3001 {int result; int result_ready; int result_ready_queue; int lock; int ok_to_ignore_lock; int dev; int client; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iio_dev*) ;
 struct opt3001* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 struct iio_dev *VAR_14 = VAR_13;
 struct opt3001 *VAR_15 = FUNC_4(VAR_14);
 int VAR_16;
 bool VAR_17 = 0;

 if (!VAR_15->ok_to_ignore_lock)
  FUNC_6(&VAR_15->lock);

 VAR_16 = FUNC_2(VAR_15->client, VAR_5);
 if (VAR_16 < 0) {
  FUNC_1(VAR_15->dev, "failed to read register %02x\n",
    VAR_5);
  goto out;
 }

 if ((VAR_16 & VAR_10) ==
   VAR_9) {
  if (VAR_16 & VAR_7)
   FUNC_5(VAR_14,
     FUNC_0(VAR_3, 0,
       VAR_2,
       VAR_1),
     FUNC_3(VAR_14));
  if (VAR_16 & VAR_8)
   FUNC_5(VAR_14,
     FUNC_0(VAR_3, 0,
       VAR_2,
       VAR_0),
     FUNC_3(VAR_14));
 } else if (VAR_16 & VAR_6) {
  VAR_16 = FUNC_2(VAR_15->client, VAR_11);
  if (VAR_16 < 0) {
   FUNC_1(VAR_15->dev, "failed to read register %02x\n",
     VAR_11);
   goto out;
  }
  VAR_15->result = VAR_16;
  VAR_15->result_ready = 1;
  VAR_17 = 1;
 }

out:
 if (!VAR_15->ok_to_ignore_lock)
  FUNC_7(&VAR_15->lock);

 if (VAR_17)
  FUNC_8(&VAR_15->result_ready_queue);

 return VAR_4;
}
