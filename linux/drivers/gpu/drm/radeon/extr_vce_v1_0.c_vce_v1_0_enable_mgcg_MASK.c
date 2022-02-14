
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct radeon_device *VAR_5, bool VAR_6)
{
 u32 VAR_7;

 if (VAR_6 && (VAR_5->cg_flags & VAR_1)) {
  VAR_7 = FUNC_0(VAR_2);
  VAR_7 |= VAR_0;
  FUNC_1(VAR_2, VAR_7);

  VAR_7 = FUNC_0(VAR_3);
  VAR_7 &= ~0x1ff000;
  VAR_7 |= 0xff800000;
  FUNC_1(VAR_3, VAR_7);

  VAR_7 = FUNC_0(VAR_4);
  VAR_7 &= ~0x3ff;
  FUNC_1(VAR_4, VAR_7);
 } else {
  VAR_7 = FUNC_0(VAR_2);
  VAR_7 &= ~VAR_0;
  FUNC_1(VAR_2, VAR_7);

  VAR_7 = FUNC_0(VAR_3);
  VAR_7 |= 0x1ff000;
  VAR_7 &= ~0xff800000;
  FUNC_1(VAR_3, VAR_7);

  VAR_7 = FUNC_0(VAR_4);
  VAR_7 |= 0x3ff;
  FUNC_1(VAR_4, VAR_7);
 }
}
