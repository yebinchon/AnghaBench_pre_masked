
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smi_info {int supports_event_msg_buff; int si_sm; TYPE_1__* handlers; } ;
struct TYPE_2__ {unsigned long (* get_result ) (int ,unsigned char*,int ) ;int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,unsigned char*,int) ;
 unsigned long FUNC_4 (int ,unsigned char*,int ) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 unsigned long FUNC_6 (int ,unsigned char*,int ) ;
 int FUNC_7 (struct smi_info*) ;

__attribute__((used)) static int FUNC_8(struct smi_info *VAR_9)
{
 unsigned char VAR_10[3];
 unsigned char *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 VAR_11 = FUNC_1(VAR_6, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_10[0] = VAR_7 << 2;
 VAR_10[1] = VAR_5;
 VAR_9->handlers->start_transaction(VAR_9->si_sm, VAR_10, 2);

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13) {
  FUNC_2("Error getting response from get global enables command, the event buffer is not enabled\n");
  goto out;
 }

 VAR_12 = VAR_9->handlers->get_result(VAR_9->si_sm,
        VAR_11, VAR_6);

 if (VAR_12 < 4 ||
   VAR_11[0] != (VAR_7 | 1) << 2 ||
   VAR_11[1] != VAR_5 ||
   VAR_11[2] != 0) {
  FUNC_2("Invalid return from get global enables command, cannot enable the event buffer\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_11[3] & VAR_4) {

  VAR_9->supports_event_msg_buff = 1;
  goto out;
 }

 VAR_10[0] = VAR_7 << 2;
 VAR_10[1] = VAR_8;
 VAR_10[2] = VAR_11[3] | VAR_4;
 VAR_9->handlers->start_transaction(VAR_9->si_sm, VAR_10, 3);

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13) {
  FUNC_2("Error getting response from set global, enables command, the event buffer is not enabled\n");
  goto out;
 }

 VAR_12 = VAR_9->handlers->get_result(VAR_9->si_sm,
        VAR_11, VAR_6);

 if (VAR_12 < 3 ||
   VAR_11[0] != (VAR_7 | 1) << 2 ||
   VAR_11[1] != VAR_8) {
  FUNC_2("Invalid return from get global, enables command, not enable the event buffer\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 if (VAR_11[2] != 0)




  VAR_13 = -VAR_1;
 else
  VAR_9->supports_event_msg_buff = 1;

out:
 FUNC_0(VAR_11);
 return VAR_13;
}
