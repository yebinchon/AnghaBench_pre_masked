
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct occ_poll_response_header {scalar_t__ occ_state; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct occ {int poll_cmd_data; int seq_no; int (* send_cmd ) (struct occ*,int*) ;int last_error; int error; scalar_t__ last_safe; TYPE_1__ resp; scalar_t__ error_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct occ*) ;
 int FUNC_1 (struct occ*,int*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct occ *VAR_5)
{
 int VAR_6;
 u16 VAR_7 = VAR_5->poll_cmd_data + VAR_5->seq_no + 1;
 u8 VAR_8[8];
 struct occ_poll_response_header *VAR_9;


 VAR_8[0] = VAR_5->seq_no++;
 VAR_8[1] = 0;
 VAR_8[2] = 0;
 VAR_8[3] = 1;
 VAR_8[4] = VAR_5->poll_cmd_data;
 VAR_8[5] = VAR_7 >> 8;
 VAR_8[6] = VAR_7 & 0xFF;
 VAR_8[7] = 0;


 VAR_6 = VAR_5->send_cmd(VAR_5, VAR_8);
 if (VAR_6) {
  VAR_5->last_error = VAR_6;
  if (VAR_5->error_count++ > VAR_1)
   VAR_5->error = VAR_6;

  goto done;
 }


 VAR_5->error_count = 0;
 VAR_5->last_error = 0;
 VAR_5->error = 0;


 VAR_9 = (struct occ_poll_response_header *)VAR_5->resp.data;
 if (VAR_9->occ_state == VAR_3) {
  if (VAR_5->last_safe) {
   if (FUNC_2(VAR_4,
           VAR_5->last_safe + VAR_2))
    VAR_5->error = -VAR_0;
  } else {
   VAR_5->last_safe = VAR_4;
  }
 } else {
  VAR_5->last_safe = 0;
 }

done:
 FUNC_0(VAR_5);
 return VAR_6;
}
