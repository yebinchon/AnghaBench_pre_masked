
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int notifier_call; } ;
struct iommu_ops {int dummy; } ;
struct bus_type {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bus_type*,int *,int *,int ) ;
 int FUNC_1 (struct bus_type*,struct notifier_block*) ;
 int FUNC_2 (struct bus_type*,struct notifier_block*) ;
 int VAR_3 ;
 int FUNC_3 (struct notifier_block*) ;
 struct notifier_block* FUNC_4 (int,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct bus_type *VAR_5, const struct iommu_ops *VAR_6)
{
 int VAR_7;
 struct notifier_block *VAR_8;

 VAR_8 = FUNC_4(sizeof(struct notifier_block), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->notifier_call = VAR_3;

 VAR_7 = FUNC_1(VAR_5, VAR_8);
 if (VAR_7)
  goto out_free;

 VAR_7 = FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_2);
 if (VAR_7)
  goto out_err;


 return 0;

out_err:

 FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_4);
 FUNC_2(VAR_5, VAR_8);

out_free:
 FUNC_3(VAR_8);

 return VAR_7;
}
