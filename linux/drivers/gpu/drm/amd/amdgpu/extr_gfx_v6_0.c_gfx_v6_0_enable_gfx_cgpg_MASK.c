
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_7,
         bool VAR_8)
{
 if (VAR_8 && (VAR_7->pg_flags & VAR_0)) {
  FUNC_5(VAR_6, FUNC_2(0x10) | FUNC_1(0x10) | FUNC_3(0x10) | FUNC_0(0x10));
  FUNC_6(VAR_4, VAR_2, 1);
  FUNC_6(VAR_3, VAR_1, 1);
 } else {
  FUNC_6(VAR_3, VAR_1, 0);
  (void)FUNC_4(VAR_5);
 }
}
