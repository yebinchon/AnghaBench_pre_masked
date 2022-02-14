
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_5,
     bool VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_1, 0 , VAR_4);

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_8, VAR_0, VAR_2, VAR_7);
  VAR_8 = FUNC_0(VAR_8, VAR_0, VAR_3, 2);
 } else
  VAR_8 = FUNC_0(VAR_8, VAR_0, VAR_3, 0);

 FUNC_2(VAR_1, 0, VAR_4, VAR_8);
}
