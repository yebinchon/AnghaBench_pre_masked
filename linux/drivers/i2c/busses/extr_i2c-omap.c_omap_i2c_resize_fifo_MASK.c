
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct omap_i2c_dev {int flags; int threshold; scalar_t__ rev; int b_hw; int latency; int speed; int * set_mpu_wkup_lat; int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct omap_i2c_dev*,int ) ;
 int FUNC_2 (struct omap_i2c_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct omap_i2c_dev *VAR_5, u8 VAR_6, bool VAR_7)
{
 u16 VAR_8;

 if (VAR_5->flags & VAR_3)
  return;
 VAR_5->threshold = FUNC_0(VAR_6, (u8) 1, VAR_5->fifo_size);

 VAR_8 = FUNC_1(VAR_5, VAR_0);

 if (VAR_7) {

  VAR_8 &= ~(0x3f << 8);
  VAR_8 |= ((VAR_5->threshold - 1) << 8) | VAR_1;
 } else {

  VAR_8 &= ~0x3f;
  VAR_8 |= (VAR_5->threshold - 1) | VAR_2;
 }

 FUNC_2(VAR_5, VAR_0, VAR_8);

 if (VAR_5->rev < VAR_4)
  VAR_5->b_hw = 1;


 if (VAR_5->set_mpu_wkup_lat != ((void*)0))
  VAR_5->latency = (1000000 * VAR_5->threshold) /
   (1000 * VAR_5->speed / 8);
}
