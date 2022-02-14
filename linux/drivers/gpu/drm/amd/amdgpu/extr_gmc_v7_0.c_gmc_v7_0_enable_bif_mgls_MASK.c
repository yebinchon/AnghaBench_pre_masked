
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {int cg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_7,
         bool VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_9 = VAR_10 = FUNC_1(VAR_6);

 if (VAR_8 && (VAR_7->cg_flags & VAR_0)) {
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_5, 1);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_1, 1);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_3, 1);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_4, 1);
 } else {
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_5, 0);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_1, 0);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_3, 0);
  VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_4, 0);
 }

 if (VAR_9 != VAR_10)
  FUNC_2(VAR_6, VAR_10);
}
