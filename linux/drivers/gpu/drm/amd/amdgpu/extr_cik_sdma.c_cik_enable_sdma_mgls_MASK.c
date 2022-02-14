
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_4,
     bool VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_5 && (VAR_4->cg_flags & VAR_0)) {
  VAR_6 = VAR_7 = FUNC_0(VAR_3 + VAR_1);
  VAR_7 |= 0x100;
  if (VAR_6 != VAR_7)
   FUNC_1(VAR_3 + VAR_1, VAR_7);

  VAR_6 = VAR_7 = FUNC_0(VAR_3 + VAR_2);
  VAR_7 |= 0x100;
  if (VAR_6 != VAR_7)
   FUNC_1(VAR_3 + VAR_2, VAR_7);
 } else {
  VAR_6 = VAR_7 = FUNC_0(VAR_3 + VAR_1);
  VAR_7 &= ~0x100;
  if (VAR_6 != VAR_7)
   FUNC_1(VAR_3 + VAR_1, VAR_7);

  VAR_6 = VAR_7 = FUNC_0(VAR_3 + VAR_2);
  VAR_7 &= ~0x100;
  if (VAR_6 != VAR_7)
   FUNC_1(VAR_3 + VAR_2, VAR_7);
 }
}
