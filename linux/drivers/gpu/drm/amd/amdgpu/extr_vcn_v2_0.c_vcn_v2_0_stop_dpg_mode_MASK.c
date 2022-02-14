
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_12)
{
 int VAR_13 = 0;
 uint32_t VAR_14;


 FUNC_2(VAR_0, 0, VAR_5, 1,
  VAR_2, VAR_13);


 VAR_14 = FUNC_0(VAR_0, 0, VAR_10);
 FUNC_2(VAR_0, 0, VAR_8, VAR_14, 0xFFFFFFFF, VAR_13);

 VAR_14 = FUNC_0(VAR_0, 0, VAR_11);
 FUNC_2(VAR_0, 0, VAR_9, VAR_14, 0xFFFFFFFF, VAR_13);

 VAR_14 = FUNC_0(VAR_0, 0, VAR_4);
 FUNC_2(VAR_0, 0, VAR_3, VAR_14, 0xFFFFFFFF, VAR_13);

 VAR_14 = FUNC_0(VAR_0, 0, VAR_7) & 0x7FFFFFFF;
 FUNC_2(VAR_0, 0, VAR_6, VAR_14, 0xFFFFFFFF, VAR_13);

 FUNC_2(VAR_0, 0, VAR_5, 1,
  VAR_2, VAR_13);


 FUNC_3(FUNC_1(VAR_0, 0, VAR_5), 0,
   ~VAR_1);

 return 0;
}
