
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xrcd_table_entry {int node; } ;
struct inode {int dummy; } ;
struct ib_uverbs_device {int xrcd_tree; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct xrcd_table_entry*) ;
 int FUNC_2 (int *,int *) ;
 struct xrcd_table_entry* FUNC_3 (struct ib_uverbs_device*,struct inode*) ;

__attribute__((used)) static void FUNC_4(struct ib_uverbs_device *VAR_0,
         struct inode *VAR_1)
{
 struct xrcd_table_entry *VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1);
  FUNC_2(&VAR_2->node, &VAR_0->xrcd_tree);
  FUNC_1(VAR_2);
 }
}
