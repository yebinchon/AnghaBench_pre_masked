
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*,int,int ,int ) ;

int FUNC_3(struct radeon_device *VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = FUNC_0(VAR_2);

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_3, VAR_4);
 if (VAR_8)
  goto done;
 VAR_9 &= 0xffff0000;
 VAR_9 |= VAR_6 / 100;

 VAR_8 = FUNC_2(VAR_5, VAR_7, VAR_0, VAR_1);
 if (VAR_8)
  goto done;
 VAR_9 &= 0x0000ffff;
 VAR_9 |= (VAR_7 / 100) << 16;

done:
 FUNC_1(VAR_2, VAR_9);

 return VAR_8;
}
