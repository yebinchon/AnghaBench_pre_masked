
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct panfrost_mmu {int as; } ;
struct panfrost_device {int as_lock; } ;


 int FUNC_0 (struct panfrost_device*,int ,int ,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct panfrost_device *VAR_0,
          struct panfrost_mmu *VAR_1,
          u64 VAR_2, size_t VAR_3, u32 VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->as_lock);
 VAR_5 = FUNC_0(VAR_0, VAR_1->as, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->as_lock);
 return VAR_5;
}
