
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_util_service {int channel; int recv_buffer; } ;
struct TYPE_2__ {int state; int recv_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_7 ;

int FUNC_1(struct hv_util_service *VAR_8)
{
 VAR_7 = VAR_8->recv_buffer;
 VAR_5.recv_channel = VAR_8->channel;







 VAR_5.state = VAR_1;

 VAR_6 = FUNC_0(VAR_2, 0, 0,
        VAR_3, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 return 0;
}
