
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct iop_msg {int* reply; scalar_t__* message; } ;
struct adb_request {int reply_len; int* reply; } ;
struct adb_iopmsg {int count; int flags; scalar_t__ cmd; scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int,int) ;
 int FUNC_1 (struct adb_request*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct adb_request* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct iop_msg*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int*,scalar_t__*,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(struct iop_msg *VAR_8)
{
 struct adb_iopmsg *VAR_9 = (struct adb_iopmsg *)VAR_8->message;
 struct adb_request *VAR_10;
 unsigned long VAR_11;




 FUNC_4(VAR_11);

 VAR_10 = VAR_6;
 if (VAR_9->flags & VAR_2) {
  VAR_8->reply[0] = VAR_2 | VAR_0;
  VAR_8->reply[1] = 0;
  VAR_8->reply[2] = 0;
  if (VAR_10 && (VAR_4 != VAR_7)) {
   FUNC_1(VAR_10, VAR_7);
  }
 } else {



  if ((VAR_4 == VAR_5) &&
      (VAR_9->flags & VAR_1)) {
   VAR_10->reply_len = VAR_9->count + 1;
   FUNC_5(VAR_10->reply, &VAR_9->cmd, VAR_10->reply_len);
  } else {
   FUNC_0(&VAR_9->cmd, VAR_9->count + 1,
      VAR_9->flags & VAR_0);
  }
  FUNC_5(VAR_8->reply, VAR_8->message, VAR_3);
 }
 FUNC_2(VAR_8);
 FUNC_3(VAR_11);
}
