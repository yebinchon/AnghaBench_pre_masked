
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ib_port_immutable {int core_cap_flags; int max_mad_size; int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 TYPE_2__* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_4, u8 VAR_5,
       struct ib_port_immutable *VAR_6)
{
 struct ib_port_attr VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->pkey_tbl_len = VAR_7.pkey_tbl_len;
 VAR_6->gid_tbl_len = VAR_7.gid_tbl_len;

 VAR_6->max_mad_size = VAR_1;
 VAR_6->core_cap_flags = VAR_2;
 if (FUNC_1(VAR_4)->caps.flags & VAR_0)
  VAR_6->core_cap_flags |= VAR_3;

 return 0;
}
