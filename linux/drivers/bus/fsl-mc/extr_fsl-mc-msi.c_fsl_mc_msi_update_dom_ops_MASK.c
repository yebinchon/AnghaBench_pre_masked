
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_ops {scalar_t__ set_desc; } ;
struct msi_domain_info {struct msi_domain_ops* ops; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct msi_domain_info *VAR_1)
{
 struct msi_domain_ops *VAR_2 = VAR_1->ops;

 if (!VAR_2)
  return;




 if (!VAR_2->set_desc)
  VAR_2->set_desc = VAR_0;
}
