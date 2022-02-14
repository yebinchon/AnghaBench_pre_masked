
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {void* data; scalar_t__ len; } ;
struct i3c_ccc_cmd_dest {TYPE_1__ payload; int addr; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void *FUNC_1(struct i3c_ccc_cmd_dest *VAR_1, u8 VAR_2,
       u16 VAR_3)
{
 VAR_1->addr = VAR_2;
 VAR_1->payload.len = VAR_3;
 if (VAR_3)
  VAR_1->payload.data = FUNC_0(VAR_3, VAR_0);
 else
  VAR_1->payload.data = ((void*)0);

 return VAR_1->payload.data;
}
