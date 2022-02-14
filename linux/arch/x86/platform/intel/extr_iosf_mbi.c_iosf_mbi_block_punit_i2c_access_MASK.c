
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 () ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 unsigned long VAR_15 ;
 int FUNC_7 (unsigned long) ;
 TYPE_1__* VAR_16 ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,int) ;

int FUNC_15(void)
{
 unsigned long VAR_17, VAR_18;
 int VAR_19 = 0;
 u32 VAR_20;

 if (FUNC_0(!VAR_16 || !VAR_14))
  return -VAR_1;

 FUNC_9(&VAR_8);

 while (VAR_12 != 0) {
  FUNC_10(&VAR_8);
  FUNC_14(VAR_9,
      VAR_12 == 0);
  FUNC_9(&VAR_8);
 }

 if (VAR_11 > 0)
  goto success;

 FUNC_1(&VAR_10,
         VAR_3, ((void*)0));






 FUNC_11(&VAR_7, 0);


 VAR_19 = FUNC_6(VAR_0, VAR_4,
        VAR_14, VAR_5);
 if (VAR_19) {
  FUNC_3(&VAR_16->dev, "Error P-Unit semaphore request failed\n");
  goto error;
 }


 VAR_17 = VAR_15;
 VAR_18 = VAR_17 + FUNC_8(VAR_6);
 do {
  VAR_19 = FUNC_4(&VAR_20);
  if (!VAR_19 && VAR_20) {
   VAR_13 = VAR_15;
   FUNC_2(&VAR_16->dev, "P-Unit semaphore acquired after %ums\n",
    FUNC_7(VAR_15 - VAR_17));
   goto success;
  }

  FUNC_13(1000, 2000);
 } while (FUNC_12(VAR_15, VAR_18));

 VAR_19 = -VAR_2;
 FUNC_3(&VAR_16->dev, "Error P-Unit semaphore timed out, resetting\n");
error:
 FUNC_5();
 if (!FUNC_4(&VAR_20))
  FUNC_3(&VAR_16->dev, "P-Unit semaphore: %d\n", VAR_20);
success:
 if (!FUNC_0(VAR_19))
  VAR_11++;

 FUNC_10(&VAR_8);

 return VAR_19;
}
