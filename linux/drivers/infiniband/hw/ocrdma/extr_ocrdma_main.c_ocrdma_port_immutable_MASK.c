
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocrdma_dev {int dummy; } ;
struct ib_port_immutable {int max_mad_size; int gid_tbl_len; int pkey_tbl_len; int core_cap_flags; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocrdma_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 scalar_t__ FUNC_2 (struct ocrdma_dev*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_3, u8 VAR_4,
            struct ib_port_immutable *VAR_5)
{
 struct ib_port_attr VAR_6;
 struct ocrdma_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_3);
 VAR_5->core_cap_flags = VAR_2;
 if (FUNC_2(VAR_7))
  VAR_5->core_cap_flags |= VAR_1;

 VAR_8 = FUNC_1(VAR_3, VAR_4, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_5->pkey_tbl_len = VAR_6.pkey_tbl_len;
 VAR_5->gid_tbl_len = VAR_6.gid_tbl_len;
 VAR_5->max_mad_size = VAR_0;

 return 0;
}
