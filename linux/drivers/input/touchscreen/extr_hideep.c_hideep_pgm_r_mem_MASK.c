
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_3__ {size_t len; int addr; } ;
struct pgm_packet {TYPE_1__ header; } ;
struct i2c_msg {int len; size_t* buf; int flags; int addr; } ;
struct hideep_ts {TYPE_2__* client; scalar_t__ xfer_buf; } ;
typedef int __be32 ;
struct TYPE_4__ {int adapter; int addr; } ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct hideep_ts *VAR_4, u32 VAR_5,
       __be32 *VAR_6, size_t VAR_7)
{
 struct pgm_packet *VAR_8 = (void *)VAR_4->xfer_buf;
 size_t VAR_9 = VAR_7 * sizeof(*VAR_6);
 struct i2c_msg VAR_10[] = {
  {
   .addr = VAR_4->client->addr,
   .len = sizeof(VAR_8->header.len) +
     sizeof(VAR_8->header.addr),
   .buf = &VAR_8->header.len,
  },
  {
   .addr = VAR_4->client->addr,
   .flags = VAR_3,
   .len = VAR_9,
   .buf = (u8 *)VAR_6,
  },
 };
 int VAR_11;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 VAR_8->header.len = VAR_7 - 1;
 VAR_8->header.addr = FUNC_1(VAR_5);

 VAR_11 = FUNC_2(VAR_4->client->adapter, VAR_10, FUNC_0(VAR_10));
 if (VAR_11 != FUNC_0(VAR_10))
  return VAR_11 < 0 ? VAR_11 : -VAR_1;

 return 0;
}
