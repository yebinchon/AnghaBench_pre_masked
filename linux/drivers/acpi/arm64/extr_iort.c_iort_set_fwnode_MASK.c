
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iort_fwnode {int list; struct fwnode_handle* fwnode; struct acpi_iort_node* iort_node; } ;
struct fwnode_handle {int dummy; } ;
struct acpi_iort_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct iort_fwnode* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct acpi_iort_node *VAR_4,
      struct fwnode_handle *VAR_5)
{
 struct iort_fwnode *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct iort_fwnode), VAR_1);

 if (FUNC_1(!VAR_6))
  return -VAR_0;

 FUNC_0(&VAR_6->list);
 VAR_6->iort_node = VAR_4;
 VAR_6->fwnode = VAR_5;

 FUNC_4(&VAR_3);
 FUNC_3(&VAR_6->list, &VAR_2);
 FUNC_5(&VAR_3);

 return 0;
}
