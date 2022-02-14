
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {scalar_t__ gid_tbl_len; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_0, u8 VAR_1,
      struct ib_port_attr *VAR_2)
{
 int VAR_3;




 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 || !VAR_2)
  return VAR_3;


 VAR_2->gid_tbl_len = 0;

 return VAR_3;
}
