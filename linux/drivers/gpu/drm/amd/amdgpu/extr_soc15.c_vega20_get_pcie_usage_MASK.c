
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_10, uint64_t *VAR_11,
     uint64_t *VAR_12)
{
 uint32_t VAR_13 = 0;
 uint64_t VAR_14, VAR_15;
 int VAR_16;




 if (VAR_10->flags & VAR_0)
  return;




 VAR_13 = FUNC_1(VAR_13, VAR_5,
    VAR_3, 40);
 VAR_13 = FUNC_1(VAR_13, VAR_5,
    VAR_4, 108);


 FUNC_3(VAR_6, VAR_13);





 FUNC_3(VAR_9, 0x00000005);

 FUNC_4(1000);






 FUNC_3(VAR_9, 0x00000002);


 VAR_16 = FUNC_2(VAR_6);
 VAR_14 = FUNC_0(VAR_16, VAR_5, VAR_1);
 VAR_15 = FUNC_0(VAR_16, VAR_5, VAR_2);


 *VAR_11 = FUNC_2(VAR_7) | (VAR_14 << 32);
 *VAR_12 = FUNC_2(VAR_8) | (VAR_15 << 32);
}
