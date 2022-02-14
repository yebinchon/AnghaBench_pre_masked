
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_ib {int gpu_addr; int length_dw; int fence; void** ptr; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
 void* FUNC_1 (int) ;
 struct radeon_fence* FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_4 (struct radeon_device*,int,struct radeon_ib*,int *,unsigned int const) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_6 (int) ;

int FUNC_7(struct radeon_device *VAR_0, int VAR_1,
          uint32_t VAR_2, struct radeon_fence **VAR_3)
{
 const unsigned VAR_4 = 1024;
 struct radeon_ib VAR_5;
 uint64_t VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_4(VAR_0, VAR_1, &VAR_5, ((void*)0), VAR_4 * 4);
 if (VAR_8) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_8);
  return VAR_8;
 }

 VAR_6 = VAR_5.gpu_addr + 1024;


 VAR_5.length_dw = 0;
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x0000000c);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x00000001);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(VAR_2);

 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x00000014);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x05000005);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(FUNC_6(VAR_6));
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(VAR_6);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x00000001);

 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x00000008);
 VAR_5.ptr[VAR_5.length_dw++] = FUNC_1(0x02000001);

 for (VAR_7 = VAR_5.length_dw; VAR_7 < VAR_4; ++VAR_7)
  VAR_5.ptr[VAR_7] = FUNC_1(0x0);

 VAR_8 = FUNC_5(VAR_0, &VAR_5, ((void*)0), 0);
 if (VAR_8) {
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_8);
 }

 if (VAR_3)
  *VAR_3 = FUNC_2(VAR_5.fence);

 FUNC_3(VAR_0, &VAR_5);

 return VAR_8;
}
