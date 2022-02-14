
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct tftphdr {scalar_t__ th_opcode; int th_stuff; int th_msg; int th_code; } ;
struct tftp_stats {scalar_t__ amount; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_port; } ;
struct servent {int s_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 struct servent* FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int,int ,int) ;
 int VAR_9 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int ,struct tftp_stats*) ;
 int FUNC_7 (int,char*,int,struct sockaddr_storage*,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,char*,char*) ;
 int FUNC_11 (struct tftp_stats*) ;
 int FUNC_12 (int ,char*,int ,int ) ;
 int FUNC_13 (int,int*,struct tftp_stats*,struct tftphdr*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int,int *,char*) ;

void
FUNC_16(int VAR_12, char *VAR_13, int VAR_14, char *VAR_15, char *VAR_16)
{
 struct tftphdr *VAR_17;
 uint16_t VAR_18;
 char VAR_19[VAR_4];
 int VAR_20, VAR_21;
 struct tftp_stats VAR_22;

 FUNC_11(&VAR_22);

 VAR_17 = (struct tftphdr *)VAR_19;

 if (VAR_13 == ((void*)0)) {
  struct servent *VAR_23;
  VAR_23 = FUNC_2("tftp", "udp");
  FUNC_0(VAR_23 != ((void*)0));
  ((struct sockaddr_in *)&VAR_9)->sin_port = VAR_23->s_port;
 } else
  ((struct sockaddr_in *)&VAR_9)->sin_port =
      FUNC_3(FUNC_1(VAR_13));

 for (VAR_21 = 0; VAR_21 < 12; VAR_21++) {
  struct sockaddr_storage VAR_24;


  if (VAR_7&VAR_0)
   FUNC_5("Requesting %s\n", VAR_15);

  VAR_20 = FUNC_10(VAR_12, VAR_15, VAR_16);
  if (VAR_20 > 0) {
   FUNC_5("Cannot send RRQ packet\n");
   return;
  }





  VAR_20 = FUNC_7(VAR_12, VAR_19,
      VAR_4, &VAR_24, VAR_10);


  if (VAR_20 >= 0) {
   ((struct sockaddr_in *)&VAR_9)->sin_port =
       ((struct sockaddr_in *)&VAR_24)->sin_port;
   break;
  }


  if (VAR_20 == VAR_6) {
   FUNC_5("Try %d, didn't receive answer from remote.\n",
       VAR_21 + 1);
   continue;
  }


  break;
 }
 if (VAR_21 == 12) {
  FUNC_5("Transfer timed out.\n");
  return;
 }
 if (VAR_17->th_opcode == VAR_2) {
  FUNC_12(VAR_3, "Error code %d: %s", VAR_17->th_code, VAR_17->th_msg);
  return;
 }

 if (FUNC_15(VAR_14, ((void*)0), VAR_16) < 0) {
  FUNC_14("write_init");
  return;
 }





 if (VAR_17->th_opcode == VAR_5) {
  if (!VAR_8) {
   FUNC_5("Got OACK while options are not enabled!\n");
   FUNC_9(VAR_12, VAR_1);
   return;
  }

  FUNC_4(VAR_12, VAR_17->th_stuff, VAR_20 + 2);

  VAR_20 = FUNC_8(VAR_12, 0);
  if (VAR_20 > 0) {
   FUNC_5("Cannot send ACK on OACK.\n");
   return;
  }
  VAR_18 = 0;
  FUNC_13(VAR_12, &VAR_18, &VAR_22, ((void*)0), 0);
 } else {
  VAR_18 = 1;
  FUNC_13(VAR_12, &VAR_18, &VAR_22, VAR_17, VAR_20);
 }

 if (VAR_22.amount > 0)
  FUNC_6("Received", VAR_11, &VAR_22);
 return;
}
