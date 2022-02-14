
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_ops {int * set_desc; int * msi_init; } ;
struct msi_domain_info {struct msi_domain_ops* ops; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_1(struct msi_domain_info *VAR_2)
{
 struct msi_domain_ops *VAR_3 = VAR_2->ops;

 FUNC_0(!VAR_3);

 if (VAR_3->msi_init == ((void*)0))
  VAR_3->msi_init = VAR_0;
 if (VAR_3->set_desc == ((void*)0))
  VAR_3->set_desc = VAR_1;
}
