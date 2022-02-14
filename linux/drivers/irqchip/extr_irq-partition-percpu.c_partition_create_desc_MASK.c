
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_ops {int alloc; int free; int translate; int select; } ;
struct partition_desc {int nr_parts; struct partition_affinity* parts; int chained_desc; int bitmap; struct irq_domain* domain; struct irq_domain_ops ops; } ;
struct partition_affinity {int dummy; } ;
struct irq_domain {int dummy; } ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 struct irq_domain* FUNC_3 (struct fwnode_handle*,int,struct irq_domain_ops*,struct partition_desc*) ;
 int FUNC_4 (struct irq_domain*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct partition_desc*) ;
 struct partition_desc* FUNC_8 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

struct partition_desc *FUNC_9(struct fwnode_handle *VAR_3,
          struct partition_affinity *VAR_4,
          int VAR_5,
          int VAR_6,
          const struct irq_domain_ops *VAR_7)
{
 struct partition_desc *VAR_8;
 struct irq_domain *VAR_9;

 FUNC_1(!VAR_7->select || !VAR_7->translate);

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->ops = *VAR_7;
 VAR_8->ops.free = VAR_2;
 VAR_8->ops.alloc = VAR_1;

 VAR_9 = FUNC_3(VAR_3, VAR_5, &VAR_8->ops, VAR_8);
 if (!VAR_9)
  goto out;
 VAR_8->domain = VAR_9;

 VAR_8->bitmap = FUNC_6(FUNC_0(VAR_5), sizeof(long),
          VAR_0);
 if (FUNC_2(!VAR_8->bitmap))
  goto out;

 VAR_8->chained_desc = FUNC_5(VAR_6);
 VAR_8->nr_parts = VAR_5;
 VAR_8->parts = VAR_4;

 return VAR_8;
out:
 if (VAR_9)
  FUNC_4(VAR_9);
 FUNC_7(VAR_8);

 return ((void*)0);
}
