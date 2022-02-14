
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {size_t len; int* buf; int addr; } ;
struct TYPE_10__ {TYPE_1__* algo; } ;
struct TYPE_9__ {int* buf; TYPE_2__* client; } ;
struct TYPE_8__ {TYPE_4__* adapter; int addr; } ;
struct TYPE_7__ {int master_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_4__*,struct i2c_msg*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int*,int*,size_t) ;
 TYPE_3__ VAR_7 ;
 int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(u8 VAR_8, u8 *VAR_9, size_t VAR_10,
     unsigned int VAR_11,
     unsigned int VAR_12, u8 VAR_13)
{
 int VAR_14 = -VAR_1;
 int VAR_15;

 struct i2c_msg VAR_16 = {
  .addr = VAR_7.client->addr,
  .len = VAR_10 + 1,
  .buf = VAR_7.buf
 };

 if (VAR_10 > VAR_6)
  return -VAR_0;

 if (!VAR_7.client->adapter->algo->master_xfer)
  return -VAR_2;
 FUNC_1(VAR_7.client->adapter, VAR_3);


 VAR_7.buf[0] = VAR_8;
 FUNC_3(&(VAR_7.buf[1]), VAR_9, VAR_10);







 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
  VAR_14 = FUNC_0(VAR_7.client->adapter, &VAR_16, 1);
  if (VAR_14 > 0)
   break;
  FUNC_4(VAR_11, VAR_12);
 }

 FUNC_2(VAR_7.client->adapter, VAR_3);

 FUNC_4(VAR_5, VAR_4);





 if (VAR_14 <= 0)
  return -VAR_1;

 return 0;
}
