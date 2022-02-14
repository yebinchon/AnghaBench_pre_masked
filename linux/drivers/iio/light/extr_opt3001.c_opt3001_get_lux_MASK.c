
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct opt3001 {int ok_to_ignore_lock; int result_ready; scalar_t__ int_time; int result; int low_thresh_exp; int low_thresh_mantissa; int dev; int client; scalar_t__ use_irq; int result_ready_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (long) ;
 int FUNC_6 (long) ;
 int FUNC_7 (struct opt3001*,int*,int ) ;
 int FUNC_8 (struct opt3001*,int ,int,int*,int*) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct opt3001 *VAR_11, int *VAR_12, int *VAR_13)
{
 int VAR_14;
 u16 VAR_15;
 u16 VAR_16;
 u8 VAR_17;
 u16 VAR_18;
 long VAR_19;

 if (VAR_11->use_irq) {





  VAR_14 = FUNC_4(VAR_11->client,
     VAR_6,
     VAR_7);
  if (VAR_14 < 0) {
   FUNC_2(VAR_11->dev, "failed to write register %02x\n",
     VAR_6);
   return VAR_14;
  }


  VAR_11->ok_to_ignore_lock = 1;
 }


 VAR_11->result_ready = 0;


 VAR_14 = FUNC_3(VAR_11->client, VAR_2);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "failed to read register %02x\n",
    VAR_2);
  goto err;
 }

 VAR_16 = VAR_14;
 FUNC_7(VAR_11, &VAR_16, VAR_4);

 VAR_14 = FUNC_4(VAR_11->client, VAR_2,
   VAR_16);
 if (VAR_14 < 0) {
  FUNC_2(VAR_11->dev, "failed to write register %02x\n",
    VAR_2);
  goto err;
 }

 if (VAR_11->use_irq) {

  VAR_14 = FUNC_9(VAR_11->result_ready_queue,
    VAR_11->result_ready,
    FUNC_5(VAR_9));
 } else {

  VAR_19 = (VAR_11->int_time == VAR_5) ?
   VAR_10 : VAR_9;
  FUNC_6(VAR_19);


  VAR_14 = FUNC_3(VAR_11->client,
        VAR_2);
  if (VAR_14 < 0) {
   FUNC_2(VAR_11->dev, "failed to read register %02x\n",
    VAR_2);
   goto err;
  }

  if (!(VAR_14 & VAR_3)) {
   VAR_14 = -VAR_0;
   goto err;
  }


  VAR_14 = FUNC_3(VAR_11->client, VAR_8);
  if (VAR_14 < 0) {
   FUNC_2(VAR_11->dev, "failed to read register %02x\n",
    VAR_8);
   goto err;
  }
  VAR_11->result = VAR_14;
  VAR_11->result_ready = 1;
 }

err:
 if (VAR_11->use_irq)

  VAR_11->ok_to_ignore_lock = 0;

 if (VAR_14 == 0)
  return -VAR_0;
 else if (VAR_14 < 0)
  return VAR_14;

 if (VAR_11->use_irq) {







  VAR_18 = (VAR_11->low_thresh_exp << 12) | VAR_11->low_thresh_mantissa;
  VAR_14 = FUNC_4(VAR_11->client,
         VAR_6,
         VAR_18);
  if (VAR_14 < 0) {
   FUNC_2(VAR_11->dev, "failed to write register %02x\n",
     VAR_6);
   return VAR_14;
  }
 }

 VAR_17 = FUNC_0(VAR_11->result);
 VAR_15 = FUNC_1(VAR_11->result);

 FUNC_8(VAR_11, VAR_17, VAR_15, VAR_12, VAR_13);

 return VAR_1;
}
