
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
typedef int u16 ;
struct ib_device {int dummy; } ;
struct find_gid_index_context {int gid_type; int vlan_id; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,union ib_gid const*,int ,int ,struct find_gid_index_context*,int *) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1, u8 VAR_2,
       u16 VAR_3, const union ib_gid *VAR_4,
       enum ib_gid_type VAR_5,
       u16 *VAR_6)
{
 struct find_gid_index_context VAR_7 = {.vlan_id = VAR_3,
       .gid_type = VAR_5};

 return FUNC_0(VAR_1, VAR_4, VAR_2, VAR_0,
         &VAR_7, VAR_6);
}
