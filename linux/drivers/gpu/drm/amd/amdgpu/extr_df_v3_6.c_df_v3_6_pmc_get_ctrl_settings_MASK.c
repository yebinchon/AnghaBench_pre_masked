
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (struct amdgpu_device*,int ,int,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_1,
       uint64_t VAR_2,
       uint32_t *VAR_3,
       uint32_t *VAR_4,
       uint32_t *VAR_5,
       uint32_t *VAR_6)
{

 uint32_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;

 FUNC_5(VAR_1, VAR_2, 1, VAR_3, VAR_4);

 if ((*VAR_3 == 0) || (*VAR_4 == 0)) {
  FUNC_4("[DF PMC] addressing not retrieved! Lo: %x, Hi: %x",
    *VAR_3, *VAR_4);
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_2) & 0x3f;
 VAR_9 = FUNC_2(VAR_2) & 0xf;
 VAR_8 = FUNC_1(VAR_2);

 VAR_10 = VAR_8 & 0x3;
 VAR_11 = (VAR_8 >> 2) & 0xf;
 VAR_12 = (VAR_8 >> 6) & 0x3;

 *VAR_5 = (VAR_9 << 8) | (VAR_10 << 6) | VAR_7 | (1 << 22);
 *VAR_6 = (VAR_12 << 29) | VAR_11;

 FUNC_3("config=%llx addr=%08x:%08x val=%08x:%08x",
  VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6);

 return 0;
}
