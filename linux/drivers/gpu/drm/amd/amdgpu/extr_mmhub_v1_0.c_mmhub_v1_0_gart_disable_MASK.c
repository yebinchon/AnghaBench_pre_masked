
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_5(struct amdgpu_device *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;


 for (VAR_12 = 0; VAR_12 < 16; VAR_12++)
  FUNC_3(VAR_4, 0, VAR_7, VAR_12, 0);


 VAR_11 = FUNC_1(VAR_4, 0, VAR_6);
 VAR_11 = FUNC_0(VAR_11, VAR_3, VAR_1, 0);
 VAR_11 = FUNC_0(VAR_11,
    VAR_3,
    VAR_0,
    0);
 FUNC_2(VAR_4, 0, VAR_6, VAR_11);

 if (!FUNC_4(VAR_10)) {

  VAR_11 = FUNC_1(VAR_4, 0, VAR_8);
  VAR_11 = FUNC_0(VAR_11, VAR_5, VAR_2, 0);
  FUNC_2(VAR_4, 0, VAR_8, VAR_11);
  FUNC_2(VAR_4, 0, VAR_9, 0);
 }
}
