
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;
struct tbaud_msg {char* msg; int baud; } ;
typedef int sig_t ;
typedef int dialer_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct termios*,int ) ;
 int FUNC_4 (struct termios*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (int ,char*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char*,char*,int) ;
 scalar_t__ FUNC_13 (char*) ;
 struct tbaud_msg* VAR_7 ;
 int FUNC_14 (int ,struct termios*) ;
 int FUNC_15 (int ,int ,struct termios*) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(void)
{
 char VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[64];
 struct tbaud_msg *VAR_14;
 sig_t VAR_15;

 if (FUNC_13("\r\n") == 0)
  return (0);
 VAR_15 = FUNC_10(VAR_2, VAR_6);
again:
 VAR_10 = 0; VAR_11 = sizeof(VAR_13)-1;
 FUNC_2(VAR_13, sizeof(VAR_13));
 VAR_5 = 0;
 for (VAR_10 = 0, VAR_11 = sizeof(VAR_13)-1 ; VAR_11 > 0 ; VAR_10++, VAR_11--) {
  if (FUNC_9(VAR_8))
   break;
  FUNC_0(FUNC_5(FUNC_16(VAR_0)));
  VAR_12 = FUNC_8(VAR_1, &VAR_9, 1);
  FUNC_0(0);
  if (VAR_12 <= 0)
   break;
  VAR_9 &= 0x7f;
  if (VAR_9 == '\r') {
   if (FUNC_13("\n") == 0)
    break;
   if (!VAR_13[0])
    goto again;
   if (FUNC_11(VAR_13, "RINGING") == 0 &&
       FUNC_1(FUNC_16(VAR_4))) {



    goto again;
   }
   if (FUNC_12(VAR_13, "CONNECT",
        sizeof("CONNECT")-1) != 0)
    break;
   for (VAR_14 = VAR_7 ; VAR_14->msg ; VAR_14++)
    if (FUNC_11(VAR_14->msg,
        VAR_13+sizeof("CONNECT")-1) == 0) {
     struct termios VAR_16;

     FUNC_14(VAR_1, &VAR_16);
     FUNC_4(&VAR_16, VAR_14->baud);
     FUNC_3(&VAR_16, VAR_14->baud);
     FUNC_15(VAR_1, VAR_3, &VAR_16);
     FUNC_10(VAR_2, VAR_15);




     return (1);
    }
   break;
  }
  VAR_13[VAR_10] = VAR_9;




 }
 FUNC_6("%s\r\n", VAR_13);
 FUNC_10(VAR_2, VAR_15);
 return (0);
}
