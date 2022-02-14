
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_dev {int dev; int adap; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct st_i2c_dev *VAR_3)
{
 u32 VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3->base + VAR_1);
  if (!(VAR_4 & VAR_2))
   return 0;

  FUNC_3(2000, 4000);
 }

 FUNC_0(VAR_3->dev, "bus not free (status = 0x%08x)\n", VAR_4);

 VAR_6 = FUNC_1(&VAR_3->adap);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "Failed to recover the bus (%d)\n", VAR_6);
  return VAR_6;
 }

 return -VAR_0;
}
