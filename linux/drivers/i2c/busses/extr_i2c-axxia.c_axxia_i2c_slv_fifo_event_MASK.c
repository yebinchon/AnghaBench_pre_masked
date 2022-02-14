
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct axxia_i2c_dev {scalar_t__ base; int slave; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,void**) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct axxia_i2c_dev *VAR_9)
{
 u32 VAR_10 = FUNC_2(VAR_9->base + VAR_8);
 u8 VAR_11;

 FUNC_0(VAR_9->dev, "slave irq fifo_status=0x%x\n", VAR_10);

 if (VAR_10 & VAR_4) {
  if (VAR_10 & VAR_7)
   FUNC_1(VAR_9->slave,
     VAR_2, &VAR_11);

  VAR_11 = FUNC_2(VAR_9->base + VAR_3);
  FUNC_1(VAR_9->slave, VAR_1, &VAR_11);
 }
 if (VAR_10 & VAR_6) {
  FUNC_2(VAR_9->base + VAR_3);
  FUNC_1(VAR_9->slave, VAR_0, &VAR_11);
 }
 if (VAR_10 & VAR_5)
  FUNC_2(VAR_9->base + VAR_3);
}
