
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int* msg; int curlen; } ;
struct TYPE_4__ {int port_number; int num_bytes; int bytes; } ;
struct TYPE_3__ {TYPE_2__ remote_i2c_read_ack; } ;
struct drm_dp_sideband_msg_reply_body {TYPE_1__ u; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int*,int) ;

__attribute__((used)) static bool FUNC_2(struct drm_dp_sideband_msg_rx *VAR_0,
            struct drm_dp_sideband_msg_reply_body *VAR_1)
{
 int VAR_2 = 1;

 VAR_1->u.remote_i2c_read_ack.port_number = (VAR_0->msg[VAR_2] & 0xf);
 VAR_2++;
 if (VAR_2 > VAR_0->curlen)
  goto fail_len;
 VAR_1->u.remote_i2c_read_ack.num_bytes = VAR_0->msg[VAR_2];
 VAR_2++;

 FUNC_1(VAR_1->u.remote_i2c_read_ack.bytes, &VAR_0->msg[VAR_2], VAR_1->u.remote_i2c_read_ack.num_bytes);
 return 1;
fail_len:
 FUNC_0("remote i2c reply parse length fail %d %d\n", VAR_2, VAR_0->curlen);
 return 0;
}
