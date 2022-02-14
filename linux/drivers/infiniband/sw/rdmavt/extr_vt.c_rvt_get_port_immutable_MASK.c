
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int max_mad_size; int core_cap_flags; } ;
struct rvt_dev_info {TYPE_1__ dparms; } ;
struct ib_port_immutable {int max_mad_size; int gid_tbl_len; int pkey_tbl_len; int core_cap_flags; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 struct rvt_dev_info* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, u8 VAR_2,
      struct ib_port_immutable *VAR_3)
{
 struct rvt_dev_info *VAR_4 = FUNC_1(VAR_1);
 struct ib_port_attr VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (VAR_7 < 0)
  return -VAR_0;

 VAR_3->core_cap_flags = VAR_4->dparms.core_cap_flags;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_3->pkey_tbl_len = VAR_5.pkey_tbl_len;
 VAR_3->gid_tbl_len = VAR_5.gid_tbl_len;
 VAR_3->max_mad_size = VAR_4->dparms.max_mad_size;

 return 0;
}
