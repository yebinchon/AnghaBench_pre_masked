
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct cluster_server {char* hostname; int port; struct in_addr addr; scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 struct cluster_server* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 char FUNC_1 () ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_2 (int) ;
 int * VAR_12 ;
 int FUNC_3 (int ,char*,...) ;
 struct hostent* FUNC_4 (char*) ;
 char* FUNC_5 (struct in_addr) ;
 int FUNC_6 (struct cluster_server*,int ,int) ;
 int FUNC_7 (int ,void*,int) ;
 int VAR_13 ;
 int FUNC_8 (char*,char**,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_14 ;

void FUNC_10 (void) {
  int VAR_15, VAR_16;
  char *VAR_17, *VAR_18;
  struct cluster_server *VAR_19;
  struct hostent *VAR_20;
  VAR_10 = VAR_15 = FUNC_7 (VAR_12[0], VAR_9, VAR_4+1);
  if (VAR_15 < 0) {
    FUNC_3 (VAR_13, "error reading configuration file %s: %m\n", VAR_11);
    FUNC_2 (2);
  }
  if (VAR_15 > VAR_4) {
    FUNC_3 (VAR_13, "configuration file %s too long (max %d bytes)\n", VAR_11, VAR_4);
    FUNC_2 (2);
  }
  VAR_5 = VAR_8 = VAR_9;
  VAR_6 = VAR_8 + VAR_15;
  *VAR_6 = 0;
  VAR_7 = 0;

  VAR_2 = 0;
  while (FUNC_0()) {
    VAR_17 = VAR_18 = VAR_5;
    while ((*VAR_18 >= 'a' && *VAR_18 <= 'z') || (*VAR_18 >= 'A' && *VAR_18 <= 'Z') || (*VAR_18 >= '0' && *VAR_18 <= '9') || *VAR_18 == '.' || *VAR_18 == '-' || *VAR_18 == '_') {
      VAR_18++;
    }
    if (VAR_18 == VAR_17) {
      FUNC_9("hostname expected");
      return;
    }
    if (VAR_18 > VAR_17 + 63) {
      FUNC_9("hostname too long");
      return;
    }
    VAR_16 = *VAR_18;
    *VAR_18 = 0;
    if (VAR_2 >= VAR_3) {
      FUNC_9("too many servers in cluster");
      return;
    }
    VAR_19 = VAR_1 + VAR_2;
    FUNC_6 (VAR_19, 0, sizeof (*VAR_19));
    VAR_19->id = VAR_2;
    VAR_19->hostname = VAR_17;
    VAR_19->port = -1;
    if (!(VAR_20 = FUNC_4 (VAR_17)) || VAR_20->h_addrtype != VAR_0 || VAR_20->h_length != 4 || !VAR_20->h_addr_list || !VAR_20->h_addr) {
      FUNC_9("cannot resolve hostname");
      return;
    }
    VAR_19->addr = *((struct in_addr *) VAR_20->h_addr);

    VAR_5 = VAR_17 = VAR_18;
    *VAR_18 = VAR_16;
    if (FUNC_1() != ':') {
      FUNC_9("':' expected");
    }
    VAR_5++;
    FUNC_1();
    if (*VAR_5 < '0' || *VAR_5 > '9') {
      FUNC_9("port number expected");
    }
    VAR_19->port = FUNC_8 (VAR_5, &VAR_5, 10);
    if (VAR_19->port <= 0 || VAR_19->port >= 0x10000) {
      FUNC_9("port number out of range");
    }
    if (FUNC_1() != ';') {
      FUNC_9("';' expected");
    }
    VAR_5++;

    VAR_2++;
    if (VAR_14 > 0) {
      FUNC_3 (VAR_13, "server #%ld: ip %s, port %d\n", VAR_2, FUNC_5(VAR_19->addr), VAR_19->port);
    }
  }
  if (!VAR_2) {
    FUNC_3 (VAR_13, "fatal: no cluster servers defined\n");
    FUNC_2(1);
  }
}
