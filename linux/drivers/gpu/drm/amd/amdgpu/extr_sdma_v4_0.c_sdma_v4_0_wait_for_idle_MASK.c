
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned int num_instances; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_1__ sdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 unsigned VAR_5, VAR_6;
 u32 VAR_7[VAR_0];
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_4;

 for (VAR_5 = 0; VAR_5 < VAR_8->usec_timeout; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_8->sdma.num_instances; VAR_6++) {
   VAR_7[VAR_6] = FUNC_0(VAR_6, VAR_3);
   if (!(VAR_7[VAR_6] & VAR_2))
    break;
  }
  if (VAR_6 == VAR_8->sdma.num_instances)
   return 0;
  FUNC_1(1);
 }
 return -VAR_1;
}
