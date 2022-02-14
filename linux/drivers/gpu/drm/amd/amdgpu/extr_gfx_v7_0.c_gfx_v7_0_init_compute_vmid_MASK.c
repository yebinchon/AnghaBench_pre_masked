
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_device {int srbm_mutex; } ;
struct TYPE_2__ {int oa; int gws; int mem_size; int mem_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_12)
{
 int VAR_13;
 uint32_t VAR_14;
 uint32_t VAR_15;







 VAR_15 = VAR_0 | (VAR_0 << 16);
 VAR_14 = VAR_4 <<
   VAR_5;
 VAR_14 |= VAR_3 << VAR_6;
 FUNC_2(&VAR_12->srbm_mutex);
 for (VAR_13 = VAR_1; VAR_13 < VAR_2; VAR_13++) {
  FUNC_1(VAR_12, 0, 0, 0, VAR_13);

  FUNC_0(VAR_11, VAR_14);
  FUNC_0(VAR_8, 1);
  FUNC_0(VAR_9, 0);
  FUNC_0(VAR_10, VAR_15);
 }
 FUNC_1(VAR_12, 0, 0, 0, 0);
 FUNC_3(&VAR_12->srbm_mutex);



 for (VAR_13 = VAR_1; VAR_13 < VAR_2; VAR_13++) {
  FUNC_0(VAR_7[VAR_13].mem_base, 0);
  FUNC_0(VAR_7[VAR_13].mem_size, 0);
  FUNC_0(VAR_7[VAR_13].gws, 0);
  FUNC_0(VAR_7[VAR_13].oa, 0);
 }
}
