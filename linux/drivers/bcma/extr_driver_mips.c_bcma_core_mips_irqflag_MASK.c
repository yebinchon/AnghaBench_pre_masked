
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcma_device {int core_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_device*,int ) ;
 scalar_t__ FUNC_1 (struct bcma_device*) ;
 scalar_t__ FUNC_2 (struct bcma_device*) ;

__attribute__((used)) static u32 FUNC_3(struct bcma_device *VAR_1)
{
 u32 VAR_2;

 if (FUNC_1(VAR_1))
  return VAR_1->core_index;
 if (FUNC_2(VAR_1))
  return VAR_1->core_index;
 VAR_2 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2)
  return VAR_2 & 0x1F;
 else
  return 0x3f;
}
