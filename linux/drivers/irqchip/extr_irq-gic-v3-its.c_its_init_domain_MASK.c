
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_domain_info {struct its_node* data; int * ops; } ;
struct its_node {int msi_domain_flags; } ;
struct irq_domain {struct msi_domain_info* host_data; int flags; int parent; } ;
struct fwnode_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct irq_domain* FUNC_0 (struct fwnode_handle*,int *,struct its_node*) ;
 int FUNC_1 (struct irq_domain*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct msi_domain_info*) ;
 struct msi_domain_info* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct fwnode_handle *VAR_6, struct its_node *VAR_7)
{
 struct irq_domain *VAR_8;
 struct msi_domain_info *VAR_9;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_0(VAR_6, &VAR_3, VAR_7);
 if (!VAR_8) {
  FUNC_2(VAR_9);
  return -VAR_1;
 }

 VAR_8->parent = VAR_5;
 FUNC_1(VAR_8, VAR_0);
 VAR_8->flags |= VAR_7->msi_domain_flags;
 VAR_9->ops = &VAR_4;
 VAR_9->data = VAR_7;
 VAR_8->host_data = VAR_9;

 return 0;
}
