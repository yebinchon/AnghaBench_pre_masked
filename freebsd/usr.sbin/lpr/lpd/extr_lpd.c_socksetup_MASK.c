
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int ai_flags; } ;
typedef int on ;
typedef int hints ;
typedef int debuglvl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_9 (int,int ,int ,int const*,int) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,char*,...) ;

__attribute__((used)) static int *
FUNC_12(int VAR_10, int VAR_11)
{
 struct addrinfo VAR_12, *VAR_13, *VAR_14;
 int VAR_15, VAR_16, *VAR_17, *VAR_18;
 const int VAR_19 = 1;

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.ai_flags = VAR_1;
 VAR_12.ai_family = VAR_10;
 VAR_12.ai_socktype = VAR_6;
 VAR_15 = FUNC_5(((void*)0), "printer", &VAR_12, &VAR_13);
 if (VAR_15) {
  FUNC_11(VAR_5, "%s", FUNC_4(VAR_15));
  FUNC_7(0);
 }


 for (VAR_16 = 0, VAR_14 = VAR_13; VAR_14; VAR_14 = VAR_14->ai_next, VAR_16++)
  ;
 VAR_18 = FUNC_6((VAR_16 + 1) * sizeof(int));
 if (!VAR_18) {
  FUNC_11(VAR_5, "couldn't allocate memory for sockets");
  FUNC_7(0);
 }

 *VAR_18 = 0;
 VAR_17 = VAR_18 + 1;
 for (VAR_14 = VAR_13; VAR_14; VAR_14 = VAR_14->ai_next) {
  *VAR_17 = FUNC_10(VAR_14->ai_family, VAR_14->ai_socktype, VAR_14->ai_protocol);
  if (*VAR_17 < 0) {
   FUNC_11(VAR_4, "socket(): %m");
   continue;
  }
  if (FUNC_9(*VAR_17, VAR_7, VAR_9, &VAR_19, sizeof(VAR_19))
      < 0) {
   FUNC_11(VAR_5, "setsockopt(SO_REUSEADDR): %m");
   FUNC_1(*VAR_17);
   continue;
  }
  if (VAR_11)
   if (FUNC_9(*VAR_17, VAR_7, VAR_8, &VAR_11,
       sizeof(VAR_11)) < 0) {
    FUNC_11(VAR_5, "setsockopt (SO_DEBUG): %m");
    FUNC_1(*VAR_17);
    continue;
   }
  if (VAR_14->ai_family == VAR_0) {
   if (FUNC_9(*VAR_17, VAR_2, VAR_3,
           &VAR_19, sizeof(VAR_19)) < 0) {
    FUNC_11(VAR_5,
           "setsockopt (IPV6_V6ONLY): %m");
    FUNC_1(*VAR_17);
    continue;
   }
  }
  if (FUNC_0(*VAR_17, VAR_14->ai_addr, VAR_14->ai_addrlen) < 0) {
   FUNC_11(VAR_4, "bind(): %m");
   FUNC_1(*VAR_17);
   continue;
  }
  (*VAR_18)++;
  VAR_17++;
 }

 if (VAR_13)
  FUNC_3(VAR_13);

 if (*VAR_18 == 0) {
  FUNC_11(VAR_5, "Couldn't bind to any socket");
  FUNC_2(VAR_18);
  FUNC_7(0);
 }
 return(VAR_18);
}
