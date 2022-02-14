
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_gid_table {int dummy; } ;
struct TYPE_4__ {struct ib_gid_table** gid_cache; } ;
struct ib_device {size_t phys_port_cnt; TYPE_2__ cache; TYPE_1__* port_immutable; int name; } ;
struct TYPE_3__ {int gid_tbl_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_gid_table* FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,size_t,struct ib_gid_table*) ;
 int FUNC_2 (struct ib_device*,size_t,struct ib_gid_table*) ;
 struct ib_gid_table** FUNC_3 (size_t,int,int ) ;
 int FUNC_4 (struct ib_gid_table**) ;
 int FUNC_5 (char*,int ) ;
 size_t FUNC_6 (struct ib_device*) ;
 int FUNC_7 (struct ib_gid_table*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_2)
{
 u8 VAR_3;
 struct ib_gid_table **VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_2->phys_port_cnt, sizeof(*VAR_4), VAR_1);

 if (!VAR_4) {
  FUNC_5("failed to allocate ib gid cache for %s\n",
   VAR_2->name);
  return -VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->phys_port_cnt; VAR_3++) {
  u8 VAR_6 = VAR_3 + FUNC_6(VAR_2);

  VAR_4[VAR_3] =
   FUNC_0(
    VAR_2->port_immutable[VAR_6].gid_tbl_len);
  if (!VAR_4[VAR_3]) {
   VAR_5 = -VAR_0;
   goto rollback_table_setup;
  }

  VAR_5 = FUNC_2(VAR_2,
      VAR_3 + FUNC_6(VAR_2),
      VAR_4[VAR_3]);
  if (VAR_5)
   goto rollback_table_setup;
 }

 VAR_2->cache.gid_cache = VAR_4;
 return 0;

rollback_table_setup:
 for (VAR_3 = 0; VAR_3 < VAR_2->phys_port_cnt; VAR_3++) {
  FUNC_1(VAR_2, VAR_3 + FUNC_6(VAR_2),
           VAR_4[VAR_3]);
  FUNC_7(VAR_4[VAR_3]);
 }

 FUNC_4(VAR_4);
 return VAR_5;
}
