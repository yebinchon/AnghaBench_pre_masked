
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_2 (struct ib_device*,int ) ;
 scalar_t__ FUNC_3 (struct ib_device*,int ) ;

int FUNC_4(struct ib_device *VAR_1,
    u8 VAR_2,
    struct ib_port_attr *VAR_3)
{
 if (!FUNC_2(VAR_1, VAR_2))
  return -VAR_0;

 if (FUNC_3(VAR_1, VAR_2))
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_1, VAR_2, VAR_3);
}
