
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_kona_i2c_dev {int device; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct bcm_kona_i2c_dev *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + FUNC_1(VAR_1);

 while (FUNC_2(VAR_5->base + VAR_3) & VAR_2)
  if (FUNC_3(VAR_4, VAR_6)) {
   FUNC_0(VAR_5->device, "CMDBUSY timeout\n");
   return -VAR_0;
  }

 return 0;
}
