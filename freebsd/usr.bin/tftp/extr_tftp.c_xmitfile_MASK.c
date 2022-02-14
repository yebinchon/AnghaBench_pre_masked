
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct tftphdr {scalar_t__ th_opcode; int th_stuff; } ;
struct tftp_stats {scalar_t__ amount; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_port; } ;
struct servent {int s_port; } ;
typedef int serv ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 struct servent* FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (int,int ,int) ;
 int VAR_8 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ,struct tftp_stats*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int *,char*) ;
 int FUNC_10 (int,char*,int,struct sockaddr_storage*,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,char*,char*) ;
 int FUNC_13 (struct tftp_stats*) ;
 int FUNC_14 (int,int*,struct tftp_stats*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (char*) ;

void
FUNC_16(int VAR_12, char *VAR_13, int VAR_14, char *VAR_15, char *VAR_16)
{
 struct tftphdr *VAR_17;
 int VAR_18, VAR_19;
 uint16_t VAR_20;
 struct sockaddr_storage VAR_21;
 char VAR_22[VAR_3];
 struct tftp_stats VAR_23;

 FUNC_13(&VAR_23);

 FUNC_4(&VAR_21, 0, sizeof(VAR_21));
 VAR_17 = (struct tftphdr *)VAR_22;

 if (VAR_13 == ((void*)0)) {
  struct servent *VAR_24;
  VAR_24 = FUNC_2("tftp", "udp");
  FUNC_0(VAR_24 != ((void*)0));
  ((struct sockaddr_in *)&VAR_8)->sin_port = VAR_24->s_port;
 } else
  ((struct sockaddr_in *)&VAR_8)->sin_port =
      FUNC_3(FUNC_1(VAR_13));

 for (VAR_19 = 0; VAR_19 < 12; VAR_19++) {
  struct sockaddr_storage VAR_25;


  if (VAR_6&VAR_0)
   FUNC_6("Sending %s\n", VAR_15);

  VAR_18 = FUNC_12(VAR_12, VAR_15, VAR_16);
  if (VAR_18 > 0) {
   FUNC_6("Cannot send WRQ packet\n");
   return;
  }





  VAR_18 = FUNC_10(VAR_12, VAR_22,
      VAR_3, &VAR_25, VAR_9);


  if (VAR_18 >= 0) {
   ((struct sockaddr_in *)&VAR_8)->sin_port =
       ((struct sockaddr_in *)&VAR_25)->sin_port;
   break;
  }


  if (VAR_18 == VAR_5) {
   FUNC_6("Try %d, didn't receive answer from remote.\n",
       VAR_19 + 1);
   continue;
  }


  break;
 }
 if (VAR_19 == 12) {
  FUNC_6("Transfer timed out.\n");
  return;
 }
 if (VAR_17->th_opcode == VAR_2) {
  FUNC_6("Got ERROR, aborted\n");
  return;
 }





 if (VAR_17->th_opcode == VAR_4) {
  if (!VAR_7) {
   FUNC_6("Got OACK while options are not enabled!\n");
   FUNC_11(VAR_12, VAR_1);
   return;
  }

  FUNC_5(VAR_12, VAR_17->th_stuff, VAR_18 + 2);
 }

 if (FUNC_9(VAR_14, ((void*)0), VAR_16) < 0) {
  FUNC_15("read_init()");
  return;
 }

 VAR_20 = 1;
 FUNC_14(VAR_12, &VAR_20, &VAR_23);

 FUNC_8();
 if (VAR_23.amount > 0)
  FUNC_7("Sent", VAR_11, &VAR_23);

 VAR_10 = 1;
}
