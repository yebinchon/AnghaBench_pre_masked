
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {int flags; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_1 (struct fwnode_handle*,struct msi_domain_info*,struct irq_domain*) ;
 int FUNC_2 (struct msi_domain_info*) ;
 int FUNC_3 (struct msi_domain_info*) ;

struct irq_domain *FUNC_4(struct fwnode_handle *VAR_3,
        struct msi_domain_info *VAR_4,
        struct irq_domain *VAR_5)
{
 struct irq_domain *VAR_6;

 if (VAR_4->flags & VAR_2)
  FUNC_3(VAR_4);
 if (VAR_4->flags & VAR_1)
  FUNC_2(VAR_4);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  FUNC_0(VAR_6, VAR_0);

 return VAR_6;
}
