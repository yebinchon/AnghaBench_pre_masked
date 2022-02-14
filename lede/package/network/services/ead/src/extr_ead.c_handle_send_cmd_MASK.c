
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tn ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct ead_msg {int type; } ;
struct ead_packet {struct ead_msg msg; } ;
struct ead_msg_cmd_data {int done; int data; } ;
struct ead_msg_cmd {scalar_t__* data; int timeout; int type; } ;
typedef int pid_t ;
typedef int fd_set ;
struct TYPE_2__ {struct ead_msg msg; } ;


 int FUNC_0 (int,char*,int,int ,int) ;


 int VAR_0 ;
 void* FUNC_1 (struct ead_msg*,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 struct ead_msg_cmd* VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct ead_msg*) ;
 int FUNC_7 (struct ead_msg*,int) ;
 int FUNC_8 (struct ead_packet*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int ,...) ;
 int FUNC_11 () ;
 int FUNC_12 (struct timeval*,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (struct timeval*,struct timeval*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_19 (int,int ,int) ;
 int FUNC_20 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static bool
FUNC_22(struct ead_packet *VAR_11, int VAR_12, int *VAR_13)
{
 struct ead_msg *VAR_14 = &VAR_11->msg;
 struct ead_msg_cmd *VAR_15 = FUNC_1(VAR_14, VAR_15);
 struct ead_msg_cmd_data *VAR_16;
 struct timeval VAR_17, VAR_18, VAR_19;
 int VAR_20[2], VAR_21;
 fd_set VAR_22;
 pid_t VAR_23;
 bool VAR_24 = 0;
 int VAR_25;
 int VAR_26;
 int VAR_27;

 VAR_27 = FUNC_6(VAR_14) - sizeof(struct ead_msg_cmd);
 if (VAR_27 <= 0)
  return 0;

 VAR_26 = FUNC_16(VAR_15->type);
 VAR_25 = FUNC_16(VAR_15->timeout);

 FUNC_3(&VAR_22);
 VAR_15->data[VAR_27] = 0;
 switch(VAR_26) {
 case 128:
  if (FUNC_18(VAR_20) < 0)
   return 0;

  FUNC_10(VAR_20[0], VAR_2, VAR_3 | FUNC_10(VAR_20[0], VAR_1));
  VAR_7 = 1;
  VAR_23 = FUNC_11();
  if (VAR_23 == 0) {
   FUNC_4(VAR_20[0]);
   VAR_21 = FUNC_17("/dev/null", VAR_4);
   if (VAR_21 > 0) {
    FUNC_5(VAR_21, 0);
    FUNC_5(VAR_20[1], 1);
    FUNC_5(VAR_20[1], 2);
   }
   FUNC_21((char *)VAR_15->data);
   FUNC_9(0);
  } else if (VAR_23 > 0) {
   FUNC_4(VAR_20[1]);
   if (!VAR_25)
    VAR_25 = VAR_0;

   VAR_24 = 1;
   break;
  }
  return 0;
 case 129:
  VAR_23 = FUNC_11();
  if (VAR_23 == 0) {

   VAR_21 = FUNC_17("/dev/null", VAR_4);
   if (VAR_21 > 0) {
    FUNC_5(VAR_21, 0);
    FUNC_5(VAR_21, 1);
    FUNC_5(VAR_21, 2);
   }
   FUNC_21((char *)VAR_15->data);
   FUNC_9(0);
  } else if (VAR_23 > 0) {
   break;
  }
  return 0;
 default:
  return 0;
 }

 VAR_14 = &VAR_10->msg;
 VAR_16 = FUNC_1(VAR_14, VAR_9);

 if (VAR_24) {
  int VAR_28, VAR_29;


  FUNC_12(&VAR_18, ((void*)0));
  FUNC_14(&VAR_19, &VAR_18, sizeof(VAR_19));
  VAR_17.tv_usec = VAR_5 * 1000;
  VAR_17.tv_sec = 0;
  do {
   VAR_16->done = 0;
   FUNC_2(VAR_20[0], &VAR_22);
   VAR_28 = FUNC_20(VAR_20[0] + 1, &VAR_22, ((void*)0), ((void*)0), &VAR_17);
   VAR_29 = 0;
   if (VAR_28 > 0) {
    VAR_29 = FUNC_19(VAR_20[0], VAR_16->data, 1024);
    if (VAR_29 < 0)
     VAR_29 = 0;
   }
   if (!VAR_29 && !VAR_7)
    break;
   FUNC_0(3, "Sending %d bytes of console data, type=%d, timeout=%d\n", VAR_29, FUNC_15(VAR_14->type), VAR_25);
   FUNC_7(VAR_14, sizeof(struct ead_msg_cmd_data) + VAR_29);
   FUNC_8(VAR_11);
   FUNC_12(&VAR_19, ((void*)0));
  } while (VAR_19.tv_sec < VAR_18.tv_sec + VAR_25);
  if (VAR_7) {
   FUNC_13(VAR_23, VAR_6);
   return 0;
  }
 }
 VAR_16->done = 1;
 FUNC_7(VAR_14, sizeof(struct ead_msg_cmd_data));

 return 1;
}
