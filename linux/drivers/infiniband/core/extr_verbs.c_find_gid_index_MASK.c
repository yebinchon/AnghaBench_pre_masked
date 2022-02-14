
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef scalar_t__ u16 ;
struct ib_gid_attr {scalar_t__ gid_type; } ;
struct find_gid_index_context {scalar_t__ gid_type; scalar_t__ vlan_id; } ;


 int FUNC_0 (struct ib_gid_attr const*,scalar_t__*,int *) ;

__attribute__((used)) static bool FUNC_1(const union ib_gid *VAR_0,
      const struct ib_gid_attr *VAR_1,
      void *VAR_2)
{
 struct find_gid_index_context *VAR_3 = VAR_2;
 u16 VAR_4 = 0xffff;
 int VAR_5;

 if (VAR_3->gid_type != VAR_1->gid_type)
  return 0;

 VAR_5 = FUNC_0(VAR_1, &VAR_4, ((void*)0));
 if (VAR_5)
  return 0;

 return VAR_3->vlan_id == VAR_4;
}
