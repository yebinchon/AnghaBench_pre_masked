
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct amdgpu_device *VAR_4, bool VAR_5)
{
 uint32_t VAR_6, VAR_7;

 if (VAR_5 && (VAR_4->pg_flags & VAR_0)) {

  VAR_6 = VAR_7 = FUNC_0(FUNC_1(VAR_1, 0, VAR_3));
  VAR_7 |= VAR_2;

  if (VAR_7 != VAR_6)
   FUNC_2(FUNC_1(VAR_1, 0, VAR_3), VAR_7);
 } else {

  VAR_6 = VAR_7 = FUNC_0(FUNC_1(VAR_1, 0, VAR_3));
  VAR_7 &= ~VAR_2;
  if (VAR_7 != VAR_6)
   FUNC_2(FUNC_1(VAR_1, 0, VAR_3), VAR_7);
 }
}
