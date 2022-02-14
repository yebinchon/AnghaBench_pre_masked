
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9055_hwmon {int irq_lock; int done; struct da9055* da9055; } ;
struct da9055 {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* VAR_8 ;
 int FUNC_0 (struct da9055*,int ) ;
 int FUNC_1 (struct da9055*,int ,unsigned char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct da9055_hwmon *VAR_9,
     unsigned char VAR_10)
{
 int VAR_11;
 unsigned short VAR_12;
 unsigned short VAR_13;
 unsigned char VAR_14;
 struct da9055 *VAR_15 = VAR_9->da9055;

 if (VAR_10 > VAR_2)
  return -VAR_6;

 FUNC_4(&VAR_9->irq_lock);


 VAR_14 = VAR_8[VAR_10] | VAR_1;

 VAR_11 = FUNC_1(VAR_15, VAR_3, VAR_14);
 if (VAR_11 < 0)
  goto err;


 if (!FUNC_6(&VAR_9->done,
     FUNC_3(500))) {
  FUNC_2(VAR_15->dev,
   "timeout waiting for ADC conversion interrupt\n");
  VAR_11 = -VAR_7;
  goto err;
 }

 VAR_11 = FUNC_0(VAR_15, VAR_4);
 if (VAR_11 < 0)
  goto err;

 VAR_12 = (unsigned short)VAR_11;
 VAR_13 = VAR_12 << 2;

 VAR_11 = FUNC_0(VAR_15, VAR_5);
 if (VAR_11 < 0)
  goto err;

 VAR_12 = (unsigned short)(VAR_11 & VAR_0);
 VAR_13 |= VAR_12;

 VAR_11 = VAR_13;

err:
 FUNC_5(&VAR_9->irq_lock);
 return VAR_11;
}
