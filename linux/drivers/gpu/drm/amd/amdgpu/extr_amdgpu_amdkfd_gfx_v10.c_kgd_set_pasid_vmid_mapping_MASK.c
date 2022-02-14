
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct kgd_dev {int dummy; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 () ;
 struct amdgpu_device* FUNC_4 (struct kgd_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct kgd_dev *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8)
{
 struct amdgpu_device *VAR_9 = FUNC_4(VAR_6);
 uint32_t VAR_10 = (VAR_7 == 0) ? 0 : (uint32_t)VAR_7 |
   VAR_0;

 FUNC_5("pasid 0x%x vmid %d, reg value %x\n", VAR_7, VAR_8, VAR_10);






 FUNC_5("ATHUB, reg %x\n", FUNC_1(VAR_1, 0, VAR_3) + VAR_8);
 FUNC_2(FUNC_1(VAR_1, 0, VAR_3) + VAR_8,
        VAR_10);
 FUNC_5("update mapping for IH block and mmhub");
 FUNC_2(FUNC_1(VAR_2, 0, VAR_5) + VAR_8,
        VAR_10);

 return 0;
}
