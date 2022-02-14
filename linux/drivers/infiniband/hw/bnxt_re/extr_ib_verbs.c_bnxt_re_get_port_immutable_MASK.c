
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_immutable {int max_mad_size; int core_cap_flags; int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;

int FUNC_1(struct ib_device *VAR_4, u8 VAR_5,
          struct ib_port_immutable *VAR_6)
{
 struct ib_port_attr VAR_7;

 if (FUNC_0(VAR_4, VAR_5, &VAR_7))
  return -VAR_0;

 VAR_6->pkey_tbl_len = VAR_7.pkey_tbl_len;
 VAR_6->gid_tbl_len = VAR_7.gid_tbl_len;
 VAR_6->core_cap_flags = VAR_3;
 VAR_6->core_cap_flags |= VAR_2;
 VAR_6->max_mad_size = VAR_1;
 return 0;
}
