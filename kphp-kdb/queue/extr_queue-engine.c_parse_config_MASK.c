
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; scalar_t__ h_addr; int h_addr_list; } ;
struct conn_target {int port; struct in_addr target; } ;


 scalar_t__ VAR_0 ;
 struct conn_target** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 struct conn_target* FUNC_2 (struct conn_target*,int*) ;
 int FUNC_3 (int) ;
 int * VAR_12 ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (struct in_addr) ;
 struct hostent* FUNC_6 (char*) ;
 int FUNC_7 (int ,void*,int) ;
 struct conn_target VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (char*,char**,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_15 ;

void FUNC_10 (void) {
  int VAR_16, VAR_17;
  char *VAR_18, *VAR_19;
  struct conn_target *VAR_20;
  struct hostent *VAR_21;
  VAR_10 = VAR_16 = FUNC_7 (VAR_12[0], VAR_9, VAR_4 + 1);
  if (VAR_16 < 0) {
    FUNC_4 (VAR_14, "error reading configuration file %s: %m\n", VAR_11);
    FUNC_3 (2);
  }
  if (VAR_16 > VAR_4) {
    FUNC_4 (VAR_14, "configuration file %s too long (max %d bytes)\n", VAR_11, VAR_4);
    FUNC_3 (2);
  }

  VAR_5 = VAR_8 = VAR_9;
  VAR_6 = VAR_8 + VAR_16;
  *VAR_6 = 0;
  VAR_7 = 0;

  VAR_2 = 0;
  while (FUNC_0()) {
    VAR_18 = VAR_19 = VAR_5;
    while ((*VAR_19 >= 'a' && *VAR_19 <= 'z') || (*VAR_19 >= 'A' && *VAR_19 <= 'Z') || (*VAR_19 >= '0' && *VAR_19 <= '9') || *VAR_19 == '.' || *VAR_19 == '-' || *VAR_19 == '_') {
      VAR_19++;
    }
    if (VAR_19 == VAR_18) {
      FUNC_9("hostname expected");
      return;
    }
    if (VAR_19 > VAR_18 + 63) {
      FUNC_9("hostname too long");
      return;
    }
    VAR_17 = *VAR_19;
    *VAR_19 = 0;
    if (VAR_2 >= VAR_3) {
      FUNC_9("too many servers in cluster");
      return;
    }
    VAR_20 = &VAR_13;
    VAR_20->port = -1;
    if (!(VAR_21 = FUNC_6 (VAR_18)) || VAR_21->h_addrtype != VAR_0 || VAR_21->h_length != 4 || !VAR_21->h_addr_list || !VAR_21->h_addr) {
      FUNC_9("cannot resolve hostname");
      return;
    }
    VAR_20->target = *((struct in_addr *) VAR_21->h_addr);

    VAR_5 = VAR_18 = VAR_19;
    *VAR_19 = VAR_17;
    if (FUNC_1() != ':') {
      FUNC_9("':' expected");
    }
    VAR_5++;
    FUNC_1();
    if (*VAR_5 < '0' || *VAR_5 > '9') {
      FUNC_9("port number expected");
    }
    VAR_20->port = FUNC_8 (VAR_5, &VAR_5, 10);
    if (VAR_20->port <= 0 || VAR_20->port >= 0x10000) {
      FUNC_9("port number out of range");
    }
    if (FUNC_1() != ';') {
      FUNC_9("';' expected");
    }
    VAR_5++;

    if (VAR_15 > 0) {
      FUNC_4 (VAR_14, "server #%d: ip %s, port %d\n", VAR_2, FUNC_5 (VAR_20->target), VAR_20->port);
    }

    int VAR_22 = -1;
    VAR_20 = FUNC_2 (VAR_20, &VAR_22);
    if (VAR_22 <= 0) {
      FUNC_9 ("duplicate hostname:port");
    }
    VAR_1[VAR_2] = VAR_20;
    VAR_2++;
  }
  if (!VAR_2) {
    FUNC_4 (VAR_14, "fatal: no cluster servers defined\n");
    FUNC_3(1);
  }
}
