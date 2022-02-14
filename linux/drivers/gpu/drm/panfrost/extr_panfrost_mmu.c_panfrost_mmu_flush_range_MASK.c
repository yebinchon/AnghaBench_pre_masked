
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct panfrost_mmu {scalar_t__ as; } ;
struct panfrost_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct panfrost_device*,struct panfrost_mmu*,int ,size_t,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct panfrost_device *VAR_1,
         struct panfrost_mmu *VAR_2,
         u64 VAR_3, size_t VAR_4)
{
 if (VAR_2->as < 0)
  return;

 FUNC_2(VAR_1->dev);


 if (FUNC_1(VAR_1->dev))
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);

 FUNC_3(VAR_1->dev);
}
