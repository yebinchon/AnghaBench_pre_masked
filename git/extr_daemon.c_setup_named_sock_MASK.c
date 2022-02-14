
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socketlist {int* list; scalar_t__ nr; int alloc; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; struct addrinfo* ai_next; int ai_flags; } ;
typedef int pbuf ;
typedef int on ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,scalar_t__,int ) ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_12 ;
 long FUNC_3 (int,int ,long) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 char* FUNC_7 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct addrinfo*,int ,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,int ,int ,int*,int) ;
 int FUNC_14 (scalar_t__,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_17(char *VAR_13, int VAR_14, struct socketlist *VAR_15)
{
 int VAR_16 = 0;
 char VAR_17[VAR_10];
 struct addrinfo VAR_18, *VAR_19, *VAR_20;
 int VAR_21;
 long VAR_22;

 FUNC_16(VAR_17, sizeof(VAR_17), "%d", VAR_14);
 FUNC_10(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.ai_family = VAR_1;
 VAR_18.ai_socktype = VAR_11;
 VAR_18.ai_protocol = VAR_8;
 VAR_18.ai_flags = VAR_2;

 VAR_21 = FUNC_6(VAR_13, VAR_17, &VAR_18, &VAR_19);
 if (VAR_21) {
  FUNC_9("getaddrinfo() for %s failed: %s", VAR_13, FUNC_5(VAR_21));
  return 0;
 }

 for (VAR_20 = VAR_19; VAR_20; VAR_20 = VAR_20->ai_next) {
  int VAR_23;

  VAR_23 = FUNC_14(VAR_20->ai_family, VAR_20->ai_socktype, VAR_20->ai_protocol);
  if (VAR_23 < 0)
   continue;
  if (VAR_23 >= VAR_4) {
   FUNC_9("Socket descriptor too large");
   FUNC_2(VAR_23);
   continue;
  }
  if (FUNC_12(VAR_23)) {
   FUNC_9("Could not set SO_REUSEADDR: %s", FUNC_15(VAR_12));
   FUNC_2(VAR_23);
   continue;
  }

  FUNC_11(VAR_23);

  if (FUNC_1(VAR_23, VAR_20->ai_addr, VAR_20->ai_addrlen) < 0) {
   FUNC_9("Could not bind to %s: %s",
     FUNC_7(VAR_20->ai_family, VAR_20->ai_addr, VAR_20->ai_addrlen),
     FUNC_15(VAR_12));
   FUNC_2(VAR_23);
   continue;
  }
  if (FUNC_8(VAR_23, 5) < 0) {
   FUNC_9("Could not listen to %s: %s",
     FUNC_7(VAR_20->ai_family, VAR_20->ai_addr, VAR_20->ai_addrlen),
     FUNC_15(VAR_12));
   FUNC_2(VAR_23);
   continue;
  }

  VAR_22 = FUNC_3(VAR_23, VAR_5, 0);
  if (VAR_22 >= 0)
   FUNC_3(VAR_23, VAR_6, VAR_22 | VAR_3);

  FUNC_0(VAR_15->list, VAR_15->nr + 1, VAR_15->alloc);
  VAR_15->list[VAR_15->nr++] = VAR_23;
  VAR_16++;
 }

 FUNC_4(VAR_19);

 return VAR_16;
}
