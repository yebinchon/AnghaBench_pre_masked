
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iort_its_msi_chip {int translation_id; int list; int base_addr; struct fwnode_handle* fw_node; } ;
struct fwnode_handle {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iort_its_msi_chip* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(int VAR_4, phys_addr_t VAR_5,
          struct fwnode_handle *VAR_6)
{
 struct iort_its_msi_chip *VAR_7;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->fw_node = VAR_6;
 VAR_7->translation_id = VAR_4;
 VAR_7->base_addr = VAR_5;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_7->list, &VAR_2);
 FUNC_3(&VAR_3);

 return 0;
}
