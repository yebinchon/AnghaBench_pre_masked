
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {int ai_addrlen; int cont; int sin_port; TYPE_2__ sin_addr; int sin_family; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct sockaddr_in* ai_next; } ;
struct sockaddr {int dummy; } ;
struct imap_store {char* name; char* prefix; struct imap* imap; } ;
struct imap_server_conf {char* host; char* auth_method; char* user; int pass; int ssl_verify; scalar_t__ use_ssl; int port; scalar_t__ tunnel; } ;
struct imap_cmd_cb {int ai_addrlen; int cont; int sin_port; TYPE_2__ sin_addr; int sin_family; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct imap_cmd_cb* ai_next; } ;
struct TYPE_4__ {int* fd; int ssl; } ;
struct TYPE_6__ {TYPE_1__ sock; } ;
struct imap {TYPE_3__ buf; int caps; int in_progress; int * in_progress_append; } ;
struct hostent {scalar_t__* h_addr_list; } ;
struct credential {scalar_t__ username; } ;
struct child_process {int use_shell; int in; int out; int args; } ;
struct addrinfo {int ai_addrlen; int cont; int sin_port; TYPE_2__ sin_addr; int sin_family; struct sockaddr* ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int portstr ;
typedef int hints ;
typedef int cb ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct child_process VAR_2 ;
 struct credential VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (TYPE_3__*,char**) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (struct credential*) ;
 int FUNC_6 (struct credential*) ;
 int FUNC_7 (struct credential*) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct sockaddr_in*) ;
 char* FUNC_13 (int) ;
 int FUNC_14 (char*,char*,struct sockaddr_in*,struct sockaddr_in**) ;
 struct hostent* FUNC_15 (char*) ;
 int FUNC_16 (struct sockaddr*,int,char*,int,int *,int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct imap_store*) ;
 scalar_t__ const FUNC_19 (struct imap_store*,struct sockaddr_in*,char*,...) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (TYPE_2__) ;
 int FUNC_23 (struct sockaddr_in*,int ,int) ;
 char* FUNC_24 (char**) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct imap_store*,int *,char*) ;
 int FUNC_27 (char*) ;
 int FUNC_28 (struct imap_server_conf*,struct credential*) ;
 int FUNC_29 (int ,int ,int ) ;
 scalar_t__ FUNC_30 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_31 (struct child_process*) ;
 int VAR_12 ;
 scalar_t__ FUNC_32 (char*,char*) ;
 void* FUNC_33 (int,int) ;
 int FUNC_34 (char*,int,char*,int ) ;

__attribute__((used)) static struct imap_store *FUNC_35(struct imap_server_conf *VAR_13, char *VAR_14)
{
 struct credential VAR_15 = VAR_3;
 struct imap_store *VAR_16;
 struct imap *VAR_17;
 char *VAR_18, *VAR_19;
 int VAR_20 = -1, VAR_21;

 VAR_16 = FUNC_33(1, sizeof(*VAR_16));

 VAR_16->imap = VAR_17 = FUNC_33(1, sizeof(*VAR_17));
 VAR_17->buf.sock.fd[0] = VAR_17->buf.sock.fd[1] = -1;
 VAR_17->in_progress_append = &VAR_17->in_progress;



 if (VAR_13->tunnel) {
  struct child_process VAR_22 = VAR_2;

  FUNC_20("Starting tunnel '%s'... ", VAR_13->tunnel);

  FUNC_1(&VAR_22.args, VAR_13->tunnel);
  VAR_22.use_shell = 1;
  VAR_22.in = -1;
  VAR_22.out = -1;
  if (FUNC_31(&VAR_22))
   FUNC_8("cannot start proxy %s", VAR_13->tunnel);

  VAR_17->buf.sock.fd[0] = VAR_22.out;
  VAR_17->buf.sock.fd[1] = VAR_22.in;

  FUNC_20("ok\n");
 } else {

  struct addrinfo VAR_23, *VAR_24, *VAR_25;
  int VAR_26;
  char VAR_27[6];

  FUNC_34(VAR_27, sizeof(VAR_27), "%d", VAR_13->port);

  FUNC_23(&VAR_23, 0, sizeof(VAR_23));
  VAR_23.ai_socktype = VAR_9;
  VAR_23.ai_protocol = VAR_4;

  FUNC_20("Resolving %s... ", VAR_13->host);
  VAR_26 = FUNC_14(VAR_13->host, VAR_27, &VAR_23, &VAR_25);
  if (VAR_26) {
   FUNC_10(VAR_12, "getaddrinfo: %s\n", FUNC_13(VAR_26));
   goto bail;
  }
  FUNC_20("ok\n");

  for (VAR_24 = VAR_25; VAR_25; VAR_25 = VAR_25->ai_next) {
   char VAR_28[VAR_5];

   VAR_20 = FUNC_29(VAR_25->ai_family, VAR_25->ai_socktype,
       VAR_25->ai_protocol);
   if (VAR_20 < 0)
    continue;

   FUNC_16(VAR_25->ai_addr, VAR_25->ai_addrlen, VAR_28,
        sizeof(VAR_28), ((void*)0), 0, VAR_6);
   FUNC_20("Connecting to [%s]:%s... ", VAR_28, VAR_27);

   if (FUNC_4(VAR_20, VAR_25->ai_addr, VAR_25->ai_addrlen) < 0) {
    FUNC_3(VAR_20);
    VAR_20 = -1;
    FUNC_27("connect");
    continue;
   }

   break;
  }
  FUNC_12(VAR_24);
  if (VAR_20 < 0) {
   FUNC_11("Error: unable to connect to server.\n", VAR_12);
   goto bail;
  }

  VAR_17->buf.sock.fd[0] = VAR_20;
  VAR_17->buf.sock.fd[1] = FUNC_9(VAR_20);

  if (VAR_13->use_ssl &&
      FUNC_30(&VAR_17->buf.sock, 0, VAR_13->ssl_verify)) {
   FUNC_3(VAR_20);
   goto bail;
  }
  FUNC_20("ok\n");
 }


 if (FUNC_2(&VAR_17->buf, &VAR_19)) {
  FUNC_10(VAR_12, "IMAP error: no greeting response\n");
  goto bail;
 }
 VAR_18 = FUNC_24(&VAR_19);
 if (!VAR_18 || *VAR_18 != '*' || (VAR_18 = FUNC_24(&VAR_19)) == ((void*)0)) {
  FUNC_10(VAR_12, "IMAP error: invalid greeting response\n");
  goto bail;
 }
 VAR_21 = 0;
 if (!FUNC_32("PREAUTH", VAR_18))
  VAR_21 = 1;
 else if (FUNC_32("OK", VAR_18) != 0) {
  FUNC_10(VAR_12, "IMAP error: unknown greeting response\n");
  goto bail;
 }
 FUNC_26(VAR_16, ((void*)0), VAR_19);
 if (!VAR_17->caps && FUNC_19(VAR_16, ((void*)0), "CAPABILITY") != 128)
  goto bail;

 if (!VAR_21) {

  if (!VAR_13->use_ssl && FUNC_0(VAR_10)) {
   if (FUNC_19(VAR_16, ((void*)0), "STARTTLS") != 128)
    goto bail;
   if (FUNC_30(&VAR_17->buf.sock, 1,
            VAR_13->ssl_verify))
    goto bail;

   if (FUNC_19(VAR_16, ((void*)0), "CAPABILITY") != 128)
    goto bail;
  }

  FUNC_20("Logging in...\n");
  FUNC_28(VAR_13, &VAR_15);

  if (VAR_13->auth_method) {
   struct imap_cmd_cb VAR_29;

   if (!FUNC_32(VAR_13->auth_method, "CRAM-MD5")) {
    if (!FUNC_0(VAR_1)) {
     FUNC_10(VAR_12, "You specified "
      "CRAM-MD5 as authentication method, "
      "but %s doesn't support it.\n", VAR_13->host);
     goto bail;
    }


    FUNC_23(&VAR_29, 0, sizeof(VAR_29));
    VAR_29.cont = VAR_11;
    if (FUNC_19(VAR_16, &VAR_29, "AUTHENTICATE CRAM-MD5") != 128) {
     FUNC_10(VAR_12, "IMAP error: AUTHENTICATE CRAM-MD5 failed\n");
     goto bail;
    }
   } else {
    FUNC_10(VAR_12, "Unknown authentication method:%s\n", VAR_13->host);
    goto bail;
   }
  } else {
   if (FUNC_0(VAR_7)) {
    FUNC_10(VAR_12, "Skipping account %s@%s, server forbids LOGIN\n",
     VAR_13->user, VAR_13->host);
    goto bail;
   }
   if (!VAR_17->buf.sock.ssl)
    FUNC_21("*** IMAP Warning *** Password is being "
       "sent in the clear\n");
   if (FUNC_19(VAR_16, ((void*)0), "LOGIN \"%s\" \"%s\"", VAR_13->user, VAR_13->pass) != 128) {
    FUNC_10(VAR_12, "IMAP error: LOGIN failed\n");
    goto bail;
   }
  }
 }

 if (VAR_15.username)
  FUNC_5(&VAR_15);
 FUNC_6(&VAR_15);


 VAR_16->name = VAR_14;
 switch (FUNC_19(VAR_16, ((void*)0), "EXAMINE \"%s\"", VAR_16->name)) {
 case 128:

  break;
 case 130:
  FUNC_10(VAR_12, "IMAP error: could not check mailbox\n");
  goto out;
 case 129:
  if (FUNC_19(VAR_16, ((void*)0), "CREATE \"%s\"", VAR_16->name) == 128) {
   FUNC_20("Created missing mailbox\n");
  } else {
   FUNC_10(VAR_12, "IMAP error: could not create missing mailbox\n");
   goto out;
  }
  break;
 }

 VAR_16->prefix = "";
 return VAR_16;

bail:
 if (VAR_15.username)
  FUNC_7(&VAR_15);
 FUNC_6(&VAR_15);

 out:
 FUNC_18(VAR_16);
 return ((void*)0);
}
