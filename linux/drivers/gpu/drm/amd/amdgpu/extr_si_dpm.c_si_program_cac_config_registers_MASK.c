
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si_cac_config_reg {int offset; int type; int mask; int value; int shift; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_3,
        const struct si_cac_config_reg *VAR_4)
{
 const struct si_cac_config_reg *VAR_5 = VAR_4;
 u32 VAR_6 = 0, VAR_7;

 if (!VAR_5)
  return -VAR_0;

 while (VAR_5->offset != 0xFFFFFFFF) {
  switch (VAR_5->type) {
  case 128:
   VAR_7 = VAR_2 + VAR_5->offset;
   if (VAR_7 < VAR_1)
    VAR_6 = FUNC_1(VAR_7);
   break;
  default:
   VAR_6 = FUNC_0(VAR_5->offset);
   break;
  }

  VAR_6 &= ~VAR_5->mask;
  VAR_6 |= ((VAR_5->value << VAR_5->shift) & VAR_5->mask);

  switch (VAR_5->type) {
  case 128:
   VAR_7 = VAR_2 + VAR_5->offset;
   if (VAR_7 < VAR_1)
    FUNC_3(VAR_7, VAR_6);
   break;
  default:
   FUNC_2(VAR_5->offset, VAR_6);
   break;
  }
  VAR_5++;
 }
 return 0;
}
