
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
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_13)
{
 int VAR_14 = 0;
 uint32_t VAR_15;


 FUNC_2(VAR_0, 0, VAR_6,
   VAR_3,
   VAR_2, VAR_14);


 VAR_15 = FUNC_0(VAR_0, 0, VAR_11);
 FUNC_2(VAR_0, 0, VAR_9, VAR_15, 0xFFFFFFFF, VAR_14);

 VAR_15 = FUNC_0(VAR_0, 0, VAR_12);
 FUNC_2(VAR_0, 0, VAR_10, VAR_15, 0xFFFFFFFF, VAR_14);

 VAR_15 = FUNC_0(VAR_0, 0, VAR_5);
 FUNC_2(VAR_0, 0, VAR_4, VAR_15, 0xFFFFFFFF, VAR_14);

 VAR_15 = FUNC_0(VAR_0, 0, VAR_8) & 0x7FFFFFFF;
 FUNC_2(VAR_0, 0, VAR_7, VAR_15, 0xFFFFFFFF, VAR_14);

 FUNC_2(VAR_0, 0, VAR_6,
  VAR_3,
  VAR_2, VAR_14);


 FUNC_3(FUNC_1(VAR_0, 0, VAR_6), 0,
   ~VAR_1);

 return 0;
}
