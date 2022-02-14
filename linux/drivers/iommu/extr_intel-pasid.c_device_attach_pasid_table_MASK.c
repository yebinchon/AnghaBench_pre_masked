
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pasid_table {int dev; } ;
struct device_domain_info {int table; struct pasid_table* pasid_table; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct device_domain_info *VAR_0,
     struct pasid_table *VAR_1)
{
 VAR_0->pasid_table = VAR_1;
 FUNC_0(&VAR_0->table, &VAR_1->dev);
}
