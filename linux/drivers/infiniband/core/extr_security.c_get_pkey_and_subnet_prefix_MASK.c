
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ib_port_pkey {int port_num; int pkey_index; TYPE_1__* sec; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ib_device* dev; } ;


 int FUNC_0 (struct ib_device*,int ,int ,int *) ;
 int FUNC_1 (struct ib_device*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ib_port_pkey *VAR_0,
          u16 *VAR_1,
          u64 *VAR_2)
{
 struct ib_device *VAR_3 = VAR_0->sec->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0->port_num, VAR_0->pkey_index, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0->port_num, VAR_2);

 return VAR_4;
}
