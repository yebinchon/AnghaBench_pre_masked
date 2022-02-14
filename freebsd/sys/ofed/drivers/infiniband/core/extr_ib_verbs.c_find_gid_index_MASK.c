
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u16 ;
struct ib_gid_attr {scalar_t__ gid_type; int ndev; } ;
struct find_gid_index_context {scalar_t__ gid_type; int vlan_id; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const union ib_gid *VAR_0,
      const struct ib_gid_attr *VAR_1,
      void *VAR_2)
{
 u16 VAR_3;
 struct find_gid_index_context *VAR_4 =
  (struct find_gid_index_context *)VAR_2;

 if (VAR_4->gid_type != VAR_1->gid_type)
  return 0;
 VAR_3 = FUNC_0(VAR_1->ndev) ^ VAR_4->vlan_id;

 return (VAR_3 == 0x0000 || VAR_3 == 0xFFFF);
}
