
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_gid_table_entry {int dummy; } ;
struct ib_gid_table {int * data_vec; } ;
struct ib_gid_attr {size_t index; int port_num; int device; int gid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_gid_table_entry*) ;
 struct ib_gid_table_entry* FUNC_1 (struct ib_gid_attr const*) ;
 int FUNC_2 (int ,int ,struct ib_gid_table*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ib_gid_table_entry*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ib_gid_table*,struct ib_gid_table_entry*) ;

__attribute__((used)) static int FUNC_8(struct ib_gid_table *VAR_1,
     const struct ib_gid_attr *VAR_2)
{
 struct ib_gid_table_entry *VAR_3;
 int VAR_4 = 0;





 if (FUNC_3(VAR_1->data_vec[VAR_2->index]))
  FUNC_2(VAR_2->device, VAR_2->port_num, VAR_1, VAR_2->index);






 if (FUNC_5(&VAR_2->gid))
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 if (FUNC_6(VAR_2->device, VAR_2->port_num)) {
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   goto done;
 }

 FUNC_7(VAR_1, VAR_3);
 return 0;

done:
 FUNC_4(VAR_3);
 return VAR_4;
}
