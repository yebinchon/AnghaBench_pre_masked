
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_6,
         bool VAR_7)
{
 u32 VAR_8, VAR_9;

 if (VAR_7 && (VAR_6->pg_flags & VAR_0)) {
  VAR_9 = VAR_8 = FUNC_0(VAR_5);
  VAR_8 |= VAR_2;
  if (VAR_9 != VAR_8)
   FUNC_1(VAR_5, VAR_8);

  VAR_9 = VAR_8 = FUNC_0(VAR_4);
  VAR_8 |= VAR_1;
  if (VAR_9 != VAR_8)
   FUNC_1(VAR_4, VAR_8);
 } else {
  VAR_9 = VAR_8 = FUNC_0(VAR_5);
  VAR_8 &= ~VAR_2;
  if (VAR_9 != VAR_8)
   FUNC_1(VAR_5, VAR_8);

  VAR_9 = VAR_8 = FUNC_0(VAR_4);
  VAR_8 &= ~VAR_1;
  if (VAR_9 != VAR_8)
   FUNC_1(VAR_4, VAR_8);

  VAR_8 = FUNC_0(VAR_3);
 }
}
