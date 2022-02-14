
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ib_port_modify {int dummy; } ;
struct ib_device {int (* modify_port ) (struct ib_device*,scalar_t__,int,struct ib_port_modify*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,scalar_t__,int,struct ib_port_modify*) ;

int FUNC_3(struct ib_device *VAR_2,
     u8 VAR_3, int VAR_4,
     struct ib_port_modify *VAR_5)
{
 if (!VAR_2->modify_port)
  return -VAR_1;

 if (VAR_3 < FUNC_1(VAR_2) || VAR_3 > FUNC_0(VAR_2))
  return -VAR_0;

 return VAR_2->modify_port(VAR_2, VAR_3, VAR_4,
       VAR_5);
}
