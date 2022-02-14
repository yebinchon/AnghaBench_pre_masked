
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct radeon_ib {int* ptr; int length_dw; int fence; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 void* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct radeon_fence* FUNC_1 (int ) ;
 int FUNC_2 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_3 (struct radeon_device*,int,struct radeon_ib*,int *,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ib*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct radeon_device *VAR_4,
          int VAR_5, uint64_t VAR_6,
          struct radeon_fence **VAR_7)
{
 struct radeon_ib VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_3(VAR_4, VAR_5, &VAR_8, ((void*)0), 64);
 if (VAR_10)
  return VAR_10;

 VAR_8.ptr[0] = FUNC_0(VAR_1, 0);
 VAR_8.ptr[1] = VAR_6;
 VAR_8.ptr[2] = FUNC_0(VAR_2, 0);
 VAR_8.ptr[3] = VAR_6 >> 32;
 VAR_8.ptr[4] = FUNC_0(VAR_0, 0);
 VAR_8.ptr[5] = 0;
 for (VAR_9 = 6; VAR_9 < 16; VAR_9 += 2) {
  VAR_8.ptr[VAR_9] = FUNC_0(VAR_3, 0);
  VAR_8.ptr[VAR_9+1] = 0;
 }
 VAR_8.length_dw = 16;

 VAR_10 = FUNC_4(VAR_4, &VAR_8, ((void*)0), 0);

 if (VAR_7)
  *VAR_7 = FUNC_1(VAR_8.fence);

 FUNC_2(VAR_4, &VAR_8);
 return VAR_10;
}
