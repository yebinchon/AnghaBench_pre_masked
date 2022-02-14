
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_immutable {int pkey_tbl_len; int gid_tbl_len; scalar_t__ max_mad_size; int core_cap_flags; } ;
struct ib_port_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1, u8 VAR_2,
      struct ib_port_immutable *VAR_3)
{
 struct ib_port_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->pkey_tbl_len = 1;
 VAR_3->gid_tbl_len = 1;
 VAR_3->core_cap_flags = VAR_0;
 VAR_3->max_mad_size = 0;

 return 0;
}
