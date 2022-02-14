
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct hostent {char* h_addr; int h_length; int h_addrtype; } ;
struct circleq_dnsentry {scalar_t__ type; struct circleq_dnsentry* name; int addrlen; int addrtype; scalar_t__ addr; } ;
typedef int socklen_t ;
typedef int buf ;
struct TYPE_2__ {int id; } ;
typedef TYPE_1__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct circleq_dnsentry*,int ) ;
 scalar_t__ VAR_2 ;
 struct hostent* FUNC_1 (char*,int,struct circleq_dnsentry*,scalar_t__) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct circleq_dnsentry*) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hostent*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 struct circleq_dnsentry* FUNC_10 (int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (struct circleq_dnsentry*,int ) ;

void
FUNC_13(void)
{
 register struct circleq_dnsentry *VAR_9;
 char VAR_10[sizeof(HEADER) + VAR_1];
 struct sockaddr_in VAR_11;
 socklen_t VAR_12;
 int VAR_13;
 HEADER *VAR_14;
 struct hostent *VAR_15;

 if (VAR_3)
  FUNC_9("running dns queue");

 FUNC_2(VAR_10, sizeof(VAR_10));

 VAR_12 = sizeof(struct sockaddr_in);
 VAR_13 = FUNC_7(VAR_8, VAR_10, sizeof(VAR_10), 0,
   (struct sockaddr *)&VAR_11, &VAR_12);

 if (VAR_13 == -1) {
  FUNC_9("recvfrom failed: %s", FUNC_8(VAR_4));
  return;
 }
 VAR_14 = (HEADER *)&VAR_10;
 if (!VAR_6 ||
  (VAR_9 = FUNC_10(FUNC_5(VAR_14->id), VAR_0)) == ((void*)0)) {

  return;
 }

 if (VAR_3)
  FUNC_9("got dns reply from %s", FUNC_4(VAR_11.sin_addr));

 VAR_15 = FUNC_1(VAR_10, VAR_13, VAR_9->name, VAR_9->type);

 if (VAR_15 != ((void*)0)) {
  if (VAR_9->type == VAR_2) {
   VAR_15->h_addr = (char *)VAR_9->addr;
   VAR_15->h_addrtype = VAR_9->addrtype;
   VAR_15->h_length = VAR_9->addrlen;
  }
 }


 FUNC_12(VAR_9, FUNC_6(VAR_15));
 VAR_6--;
 FUNC_0(&VAR_7, VAR_9, VAR_5);
 FUNC_3(VAR_9->name);
 FUNC_3(VAR_9);


 FUNC_11();

 return;
}
