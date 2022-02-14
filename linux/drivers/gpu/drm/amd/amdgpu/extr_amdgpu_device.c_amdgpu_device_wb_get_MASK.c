
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_2__ {unsigned long num_wb; int used; } ;
struct amdgpu_device {TYPE_1__ wb; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned long FUNC_1 (int ,unsigned long) ;

int FUNC_2(struct amdgpu_device *VAR_1, u32 *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_1->wb.used, VAR_1->wb.num_wb);

 if (VAR_3 < VAR_1->wb.num_wb) {
  FUNC_0(VAR_3, VAR_1->wb.used);
  *VAR_2 = VAR_3 << 3;
  return 0;
 } else {
  return -VAR_0;
 }
}
