
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_gid_table {int dummy; } ;
struct TYPE_2__ {struct ib_gid_table** gid_cache; } ;
struct ib_device {size_t phys_port_cnt; TYPE_1__ cache; } ;


 int FUNC_0 (struct ib_device*,scalar_t__,struct ib_gid_table*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0)
{
 struct ib_gid_table **VAR_1 = VAR_0->cache.gid_cache;
 u8 VAR_2;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->phys_port_cnt; VAR_2++)
  FUNC_0(VAR_0, VAR_2 + FUNC_1(VAR_0),
           VAR_1[VAR_2]);
}
