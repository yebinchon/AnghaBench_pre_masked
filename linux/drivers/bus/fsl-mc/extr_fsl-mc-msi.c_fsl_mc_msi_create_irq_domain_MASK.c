
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
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct msi_domain_info*) ;
 int FUNC_2 (struct msi_domain_info*) ;
 int FUNC_3 (struct irq_domain*,int ) ;
 struct irq_domain* FUNC_4 (struct fwnode_handle*,struct msi_domain_info*,struct irq_domain*) ;

struct irq_domain *FUNC_5(struct fwnode_handle *VAR_4,
      struct msi_domain_info *VAR_5,
      struct irq_domain *VAR_6)
{
 struct irq_domain *VAR_7;

 if (FUNC_0((VAR_5->flags & VAR_1)))
  VAR_5->flags &= ~VAR_1;
 if (VAR_5->flags & VAR_3)
  FUNC_2(VAR_5);
 if (VAR_5->flags & VAR_2)
  FUNC_1(VAR_5);

 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_7)
  FUNC_3(VAR_7, VAR_0);

 return VAR_7;
}
