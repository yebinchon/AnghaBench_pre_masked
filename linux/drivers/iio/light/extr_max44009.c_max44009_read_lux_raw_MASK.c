
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct max44009_data {TYPE_1__* client; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
typedef int loreg ;
typedef int lo ;
typedef int hireg ;
typedef int hi ;
struct TYPE_2__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct max44009_data *VAR_5)
{
 int VAR_6;
 u8 VAR_7 = VAR_3;
 u8 VAR_8 = VAR_4;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;

 struct i2c_msg VAR_11[] = {
  {
   .addr = VAR_5->client->addr,
   .flags = 0,
   .len = sizeof(VAR_7),
   .buf = &VAR_7,
  },
  {
   .addr = VAR_5->client->addr,
   .flags = VAR_1,
   .len = sizeof(VAR_10),
   .buf = &VAR_10,
  },
  {
   .addr = VAR_5->client->addr,
   .flags = 0,
   .len = sizeof(VAR_8),
   .buf = &VAR_8,
  },
  {
   .addr = VAR_5->client->addr,
   .flags = VAR_1,
   .len = sizeof(VAR_9),
   .buf = &VAR_9,
  }
 };







 VAR_6 = FUNC_0(VAR_5->client->adapter,
      VAR_11, VAR_2);

 if (VAR_6 != VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_10, VAR_9);
}
