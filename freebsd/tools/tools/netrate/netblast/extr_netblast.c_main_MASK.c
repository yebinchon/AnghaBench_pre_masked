
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_addrlen; int ai_addr; int ai_socktype; int ai_family; struct addrinfo* ai_next; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,long,char*,long) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct addrinfo*) ;
 char const* FUNC_6 (int) ;
 int FUNC_7 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 char* FUNC_8 (long) ;
 int FUNC_9 (struct addrinfo*,int ,int) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int ,int ,int ) ;
 int VAR_2 ;
 void* FUNC_12 (char*,char**,int) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_3, char *VAR_4[])
{
 long VAR_5, VAR_6;
 struct addrinfo VAR_7, *VAR_8, *VAR_9;
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 const char *VAR_15 = ((void*)0);

 if (VAR_3 != 5)
  FUNC_13();

 FUNC_9(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ai_family = VAR_0;
 VAR_7.ai_socktype = VAR_1;

 VAR_12 = FUNC_12(VAR_4[2], &VAR_10, 10);
 if (VAR_12 < 1 || VAR_12 > 65535 || *VAR_10 != '\0') {
  FUNC_4(VAR_2, "Invalid port number: %s\n", VAR_4[2]);
  FUNC_13();

 }

 VAR_5 = FUNC_12(VAR_4[3], &VAR_10, 10);
 if (VAR_5 < 0 || *VAR_10 != '\0')
  FUNC_13();
 if (VAR_5 > 32768) {
  FUNC_4(VAR_2, "payloadsize > 32768\n");
  return (-1);

 }

 VAR_6 = FUNC_12(VAR_4[4], &VAR_10, 10);
 if (VAR_6 < 0 || *VAR_10 != '\0') {
  FUNC_4(VAR_2, "Invalid duration time: %s\n", VAR_4[4]);
  FUNC_13();

 }

 VAR_11 = FUNC_8(VAR_5);
 if (VAR_11 == ((void*)0)) {
  FUNC_10("malloc");
  return (-1);

 }

 FUNC_1(VAR_11, VAR_5);
 VAR_14 = FUNC_7(VAR_4[1],VAR_4[2], &VAR_7, &VAR_9);
 if (VAR_14) {
  FUNC_10(FUNC_6(VAR_14));
  return (-1);

 }
 VAR_13 = -1;
 for (VAR_8 = VAR_9; VAR_8; VAR_8 = VAR_8->ai_next) {
  VAR_13 = FUNC_11(VAR_8->ai_family, VAR_8->ai_socktype, 0);
  if (VAR_13 < 0) {
   VAR_15 = "socket";
   continue;
  }

  if (FUNC_3(VAR_13, VAR_8->ai_addr, VAR_8->ai_addrlen) < 0) {
   VAR_15 = "connect";
   FUNC_2(VAR_13);
   VAR_13 = -1;
   continue;
  }

  break;
 }
 if (VAR_13 < 0) {
  FUNC_10(VAR_15);
  return (-1);

 }

 FUNC_5(VAR_9);

 return (FUNC_0(VAR_13, VAR_6, VAR_11, VAR_5));

}
