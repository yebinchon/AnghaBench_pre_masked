
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct amdgpu_device *VAR_1,
          const u32 *VAR_2,
          const u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3 % 3)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 +=3) {
  VAR_5 = VAR_2[VAR_8 + 0];
  VAR_6 = VAR_2[VAR_8 + 1];
  VAR_7 = VAR_2[VAR_8 + 2];

  if (VAR_6 == 0xffffffff) {
   VAR_4 = VAR_7;
  } else {
   VAR_4 = FUNC_0(VAR_5);
   VAR_4 &= ~VAR_6;
   if (VAR_1->family >= VAR_0)
    VAR_4 |= (VAR_7 & VAR_6);
   else
    VAR_4 |= VAR_7;
  }
  FUNC_1(VAR_5, VAR_4);
 }
}
