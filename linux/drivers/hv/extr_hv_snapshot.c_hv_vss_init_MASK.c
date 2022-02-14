
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
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

int
FUNC_2(struct hv_util_service *VAR_13)
{
 if (VAR_8 < VAR_5) {
  FUNC_1("Integration service 'Backup (volume snapshot)'"
   " not supported on this host version.\n");
  return -VAR_3;
 }
 VAR_7 = VAR_13->recv_buffer;
 VAR_12.recv_channel = VAR_13->channel;







 VAR_12.state = VAR_4;

 VAR_6 = FUNC_0(VAR_9, VAR_0, VAR_1,
        VAR_10, VAR_11);
 if (!VAR_6) {
  FUNC_1("VSS: Failed to initialize transport\n");
  return -VAR_2;
 }

 return 0;
}
