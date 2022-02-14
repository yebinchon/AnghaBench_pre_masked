
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int msg ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct cdn_dp_device*,int*,int) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_3 (struct cdn_dp_device*,int ,int ,int) ;
 unsigned long VAR_8 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct cdn_dp_device *VAR_9)
{
 unsigned long VAR_10;
 u8 VAR_11, VAR_12[2];
 int VAR_13;

 VAR_11 = VAR_5;


 VAR_13 = FUNC_2(VAR_9, VAR_7, VAR_1,
      sizeof(VAR_11), &VAR_11);
 if (VAR_13)
  goto err_training_start;

 VAR_10 = VAR_8 + FUNC_4(VAR_6);
 while (FUNC_6(VAR_8, VAR_10)) {
  FUNC_5(VAR_4);
  VAR_13 = FUNC_2(VAR_9, VAR_7,
       VAR_0, 0, ((void*)0));
  if (VAR_13)
   goto err_training_start;

  VAR_13 = FUNC_3(VAR_9, VAR_7,
            VAR_0,
            sizeof(VAR_12));
  if (VAR_13)
   goto err_training_start;

  VAR_13 = FUNC_1(VAR_9, VAR_12, sizeof(VAR_12));
  if (VAR_13)
   goto err_training_start;

  if (VAR_12[1] & VAR_2)
   return 0;
 }

 VAR_13 = -VAR_3;

err_training_start:
 FUNC_0(VAR_9->dev, "training failed: %d\n", VAR_13);
 return VAR_13;
}
