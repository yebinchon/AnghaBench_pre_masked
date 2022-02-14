
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {void* sa_family; } ;
struct addrinfo {int ai_family; int ai_addrlen; int ai_addr; TYPE_1__ sa; int ai_socktype; int ai_flags; } ;
typedef struct addrinfo sockunion_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (struct addrinfo*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (struct addrinfo*,int ,int ) ;
 int FUNC_6 (struct addrinfo*,int ,int) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static uint32_t
FUNC_8(sockunion_t *VAR_6, sockunion_t *VAR_7,
    const char *VAR_8, const char *VAR_9, const char *VAR_10)
{
 struct addrinfo VAR_11;
 struct addrinfo *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_9 != ((void*)0));

 VAR_14 = VAR_0;

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13 == 0)
  return (0);

 FUNC_6(&VAR_11, 0, sizeof(struct addrinfo));
 VAR_11.ai_flags = VAR_1;
 VAR_11.ai_family = VAR_3;
 VAR_11.ai_socktype = VAR_4;

 FUNC_6(VAR_6, 0, sizeof(sockunion_t));
 VAR_6->sa.sa_family = VAR_0;

 VAR_15 = FUNC_3(VAR_8, "0", &VAR_11, &VAR_12);
 if (VAR_15) {
  FUNC_7("getaddrinfo: %s", FUNC_2(VAR_15));
  return (0);
 }
 FUNC_0(VAR_12 != ((void*)0));
 VAR_14 = VAR_12->ai_family;
 FUNC_5(VAR_6, VAR_12->ai_addr, VAR_12->ai_addrlen);
 FUNC_1(VAR_12);


 if (VAR_7 != ((void*)0) && VAR_10 != ((void*)0) && *VAR_10 != '\0') {
  FUNC_6(VAR_7, 0, sizeof(sockunion_t));
  VAR_7->sa.sa_family = VAR_0;


  VAR_11.ai_family = VAR_14;
  VAR_15 = FUNC_3(VAR_10, "0", &VAR_11, &VAR_12);
  if (VAR_15) {
   FUNC_7("getaddrinfo: %s", FUNC_2(VAR_15));
   VAR_13 = 0;
  } else {
   if (VAR_14 != VAR_12->ai_family) {
    VAR_5 = VAR_2;
    VAR_13 = 0;
   }
   FUNC_5(VAR_7, VAR_12->ai_addr, VAR_12->ai_addrlen);
   FUNC_1(VAR_12);
  }
 }

 return (VAR_13);
}
