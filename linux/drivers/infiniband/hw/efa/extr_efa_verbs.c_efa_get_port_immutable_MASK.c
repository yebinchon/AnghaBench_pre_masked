
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_immutable {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_1 (struct ib_device*,char*,int) ;

int FUNC_2(struct ib_device *VAR_0, u8 VAR_1,
      struct ib_port_immutable *VAR_2)
{
 struct ib_port_attr VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_0, "Couldn't query port err[%d]\n", VAR_4);
  return VAR_4;
 }

 VAR_2->pkey_tbl_len = VAR_3.pkey_tbl_len;
 VAR_2->gid_tbl_len = VAR_3.gid_tbl_len;

 return 0;
}
