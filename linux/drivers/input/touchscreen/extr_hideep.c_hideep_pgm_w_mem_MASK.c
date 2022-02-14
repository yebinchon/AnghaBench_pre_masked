
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int len; int addr; } ;
struct pgm_packet {int payload; TYPE_1__ header; } ;
struct i2c_msg {int* buf; int len; int addr; } ;
struct hideep_ts {TYPE_2__* client; scalar_t__ xfer_buf; } ;
typedef int __be32 ;
struct TYPE_4__ {int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int ,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(struct hideep_ts *VAR_3, u32 VAR_4,
       const __be32 *VAR_5, size_t VAR_6)
{
 struct pgm_packet *VAR_7 = (void *)VAR_3->xfer_buf;
 size_t VAR_8 = VAR_6 * sizeof(*VAR_5);
 struct i2c_msg VAR_9 = {
  .addr = VAR_3->client->addr,
  .len = VAR_8 + sizeof(VAR_7->header.len) +
    sizeof(VAR_7->header.addr),
  .buf = &VAR_7->header.len,
 };
 int VAR_10;

 if (VAR_8 > VAR_2)
  return -VAR_0;

 VAR_7->header.len = 0x80 | (VAR_6 - 1);
 VAR_7->header.addr = FUNC_0(VAR_4);
 FUNC_2(VAR_7->payload, VAR_5, VAR_8);

 VAR_10 = FUNC_1(VAR_3->client->adapter, &VAR_9, 1);
 if (VAR_10 != 1)
  return VAR_10 < 0 ? VAR_10 : -VAR_1;

 return 0;
}
