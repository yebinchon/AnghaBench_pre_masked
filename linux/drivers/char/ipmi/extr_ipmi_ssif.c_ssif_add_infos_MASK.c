
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int addr; } ;
struct ssif_addr_info {int link; TYPE_2__ binfo; int adapter_name; struct i2c_client* client; int addr_src; } ;
struct i2c_client {int addr; TYPE_1__* adapter; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct ssif_addr_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 struct ssif_addr_info *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_5->addr_src = VAR_2;
 VAR_5->client = VAR_4;
 VAR_5->adapter_name = FUNC_0(VAR_4->adapter->name, VAR_1);
 VAR_5->binfo.addr = VAR_4->addr;
 FUNC_2(&VAR_5->link, &VAR_3);
 return 0;
}
