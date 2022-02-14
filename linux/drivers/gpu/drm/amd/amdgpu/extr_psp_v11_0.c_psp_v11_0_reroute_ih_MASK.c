
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct psp_context {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct psp_context*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_5(struct psp_context *VAR_9)
{
 struct amdgpu_device *VAR_10 = VAR_9->adev;
 uint32_t VAR_11;


 VAR_11 = FUNC_0(0, VAR_3, VAR_1, 0x1244b);
 VAR_11 = FUNC_0(VAR_11, VAR_3, VAR_0, 1);
 VAR_11 = FUNC_0(VAR_11, VAR_3, VAR_5, 1);

 FUNC_2(VAR_4, 0, VAR_7, 3);
 FUNC_2(VAR_4, 0, VAR_8, VAR_11);
 FUNC_2(VAR_4, 0, VAR_6, VAR_2);

 FUNC_3(20);
 FUNC_4(VAR_9, FUNC_1(VAR_4, 0, VAR_6),
       0x80000000, 0x8000FFFF, 0);


 VAR_11 = FUNC_0(0, VAR_3, VAR_1, 0x1216b);
 VAR_11 = FUNC_0(VAR_11, VAR_3, VAR_5, 1);

 FUNC_2(VAR_4, 0, VAR_7, 4);
 FUNC_2(VAR_4, 0, VAR_8, VAR_11);
 FUNC_2(VAR_4, 0, VAR_6, VAR_2);

 FUNC_3(20);
 FUNC_4(VAR_9, FUNC_1(VAR_4, 0, VAR_6),
       0x80000000, 0x8000FFFF, 0);
}
