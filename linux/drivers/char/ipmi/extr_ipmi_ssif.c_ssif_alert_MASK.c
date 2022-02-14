
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int waiting_alert; int got_alert; scalar_t__ curr_msg; int retry_timer; } ;
struct i2c_client {int dummy; } ;
typedef enum i2c_alert_protocol { ____Placeholder_i2c_alert_protocol } i2c_alert_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ssif_info* FUNC_1 (struct i2c_client*) ;
 unsigned long* FUNC_2 (struct ssif_info*,unsigned long*) ;
 int FUNC_3 (struct ssif_info*,unsigned long*) ;
 int FUNC_4 (struct ssif_info*,int ) ;
 int FUNC_5 (struct ssif_info*) ;

__attribute__((used)) static void FUNC_6(struct i2c_client *VAR_2, enum i2c_alert_protocol VAR_3,
         unsigned int VAR_4)
{
 struct ssif_info *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6, *VAR_7;
 bool VAR_8 = 0;

 if (VAR_3 != VAR_0)
  return;

 FUNC_4(VAR_5, VAR_1);

 VAR_7 = FUNC_2(VAR_5, &VAR_6);
 if (VAR_5->waiting_alert) {
  VAR_5->waiting_alert = 0;
  FUNC_0(&VAR_5->retry_timer);
  VAR_8 = 1;
 } else if (VAR_5->curr_msg) {
  VAR_5->got_alert = 1;
 }
 FUNC_3(VAR_5, VAR_7);
 if (VAR_8)
  FUNC_5(VAR_5);
}
