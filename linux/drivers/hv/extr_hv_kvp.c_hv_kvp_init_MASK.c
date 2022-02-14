
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
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;

int
FUNC_1(struct hv_util_service *VAR_10)
{
 VAR_9 = VAR_10->recv_buffer;
 VAR_8.recv_channel = VAR_10->channel;







 VAR_8.state = VAR_3;

 VAR_4 = FUNC_0(VAR_5, VAR_0, VAR_1,
        VAR_6, VAR_7);
 if (!VAR_4)
  return -VAR_2;

 return 0;
}
