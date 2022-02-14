
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union dp_downstream_port_present {void* byte; int member_0; } ;
typedef void* uint8_t ;
struct TYPE_6__ {int dp_keep_receiver_powered; } ;
struct TYPE_4__ {void* raw; } ;
struct TYPE_5__ {scalar_t__ dongle_type; int branch_dev_id; TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_3__ wa_flags; TYPE_2__ dpcd_caps; } ;


 scalar_t__ VAR_0 ;


 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct dc_link*,size_t,void**,int) ;
 int FUNC_1 (struct dc_link*,int) ;

__attribute__((used)) static void FUNC_2(struct dc_link *VAR_3, uint8_t *VAR_4,
  int VAR_5)
{
 int VAR_6 = 0;
 union dp_downstream_port_present VAR_7 = { 0 };

 if (!VAR_3->dpcd_caps.dpcd_rev.raw) {
  do {
   FUNC_1(VAR_3, 1);
   FUNC_0(VAR_3, VAR_2,
       VAR_4, VAR_5);
   VAR_3->dpcd_caps.dpcd_rev.raw = VAR_4[
    VAR_2 -
    VAR_2];
  } while (VAR_6++ < 4 && !VAR_3->dpcd_caps.dpcd_rev.raw);
 }

 VAR_7.byte = VAR_4[VAR_1 -
     VAR_2];

 if (VAR_3->dpcd_caps.dongle_type == VAR_0) {
  switch (VAR_3->dpcd_caps.branch_dev_id) {





  case 129:
  case 128:
   VAR_3->wa_flags.dp_keep_receiver_powered = 1;
   break;


  default:
   VAR_3->wa_flags.dp_keep_receiver_powered = 0;
   break;
  }
 } else
  VAR_3->wa_flags.dp_keep_receiver_powered = 0;
}
