
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
typedef int u_short ;
struct td_desc {int dummy; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; struct addrinfo* ai_next; int ai_flags; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct addrinfo*) ;
 char const* FUNC_4 (int) ;
 int FUNC_5 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (struct td_desc**,int,int) ;
 struct td_desc** FUNC_8 (int*,int,int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char*,int,int,int) ;
 scalar_t__ FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (char*,char**,int) ;
 int FUNC_16 () ;

int
FUNC_17(int VAR_6, char *VAR_7[])
{
 struct addrinfo VAR_8, *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14, VAR_15, VAR_16 = 1;
 struct td_desc **VAR_17;
 const char *VAR_18 = ((void*)0);
 int VAR_19[VAR_1];
 int VAR_20;

 if (VAR_6 < 2)
  FUNC_16();

 FUNC_10(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ai_family = VAR_2;
 VAR_8.ai_socktype = VAR_3;
 VAR_8.ai_flags = VAR_0;

 VAR_13 = FUNC_15(VAR_7[1], &VAR_11, 10);
 if (VAR_13 < 1 || VAR_13 > 65535 || *VAR_11 != '\0')
  FUNC_16();
 if (VAR_6 > 2)
  VAR_16 = FUNC_15(VAR_7[2], &VAR_11, 10);
 if (VAR_16 < 1 || VAR_16 > 64)
  FUNC_16();

 VAR_12 = FUNC_9(65536);
 if (VAR_12 == ((void*)0)) {
  FUNC_11("malloc");
  return (-1);
 }
 FUNC_1(VAR_12, 65536);

 VAR_14 = FUNC_5(((void*)0), VAR_7[1], &VAR_8, &VAR_10);
 if (VAR_14) {
  FUNC_11(FUNC_4(VAR_14));
  return (-1);

 }

 VAR_20 = 0;
 for (VAR_9 = VAR_10; VAR_9 && VAR_20 < VAR_1; VAR_9 = VAR_9->ai_next) {
  VAR_19[VAR_20] = FUNC_14(VAR_9->ai_family, VAR_9->ai_socktype,
  VAR_9->ai_protocol);
  if (VAR_19[VAR_20] < 0) {
   VAR_18 = "socket";
   continue;
  }

  VAR_15 = 128 * 1024;
  if (FUNC_13(VAR_19[VAR_20], VAR_4, VAR_5, &VAR_15, sizeof(VAR_15)) < 0) {
   VAR_18 = "SO_RCVBUF";
   FUNC_2(VAR_19[VAR_20]);
   continue;
  }
  if (FUNC_0(VAR_19[VAR_20], VAR_9->ai_addr, VAR_9->ai_addrlen) < 0) {
   VAR_18 = "bind";
   FUNC_2(VAR_19[VAR_20]);
   continue;
  }
  (void) FUNC_6(VAR_19[VAR_20], 5);
  VAR_20++;
 }
 if (VAR_20 == 0) {
  FUNC_11(VAR_18);
  return (-1);

 }

 FUNC_12("netreceive %d sockets x %d threads listening on UDP port %d\n",
  VAR_20, VAR_16, (u_short)VAR_13);

 VAR_17 = FUNC_8(VAR_19, VAR_20, VAR_16);
 FUNC_7(VAR_17, VAR_20, VAR_16);


 FUNC_3(VAR_10);
}
