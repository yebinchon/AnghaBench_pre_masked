
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct bnxt_qplib_sgid_tbl {size_t max; int hw_id; TYPE_1__* tbl; } ;
struct TYPE_2__ {int vlan_id; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct bnxt_qplib_sgid_tbl *VAR_0,
         struct net_device *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->max; VAR_2++)
  VAR_0->tbl[VAR_2].vlan_id = 0xffff;

 FUNC_0(VAR_0->hw_id, -1, sizeof(u16) * VAR_0->max);
}
