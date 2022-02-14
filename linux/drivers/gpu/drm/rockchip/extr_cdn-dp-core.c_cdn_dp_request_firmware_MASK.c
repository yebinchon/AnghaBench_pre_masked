
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_device {int fw_loaded; int lock; int dev; int fw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct cdn_dp_device *VAR_5)
{
 int VAR_6;
 unsigned long VAR_7 = VAR_4 + FUNC_2(VAR_1);
 unsigned long VAR_8 = 1000;

 FUNC_1(!FUNC_4(&VAR_5->lock));

 if (VAR_5->fw_loaded)
  return 0;


 FUNC_6(&VAR_5->lock);

 while (FUNC_8(VAR_4, VAR_7)) {
  VAR_6 = FUNC_7(&VAR_5->fw, VAR_0, VAR_5->dev);
  if (VAR_6 == -VAR_2) {
   FUNC_3(VAR_8);
   VAR_8 *= 2;
   continue;
  } else if (VAR_6) {
   FUNC_0(VAR_5->dev,
          "failed to request firmware: %d\n", VAR_6);
   goto out;
  }

  VAR_5->fw_loaded = 1;
  VAR_6 = 0;
  goto out;
 }

 FUNC_0(VAR_5->dev, "Timed out trying to load firmware\n");
 VAR_6 = -VAR_3;
out:
 FUNC_5(&VAR_5->lock);
 return VAR_6;
}
