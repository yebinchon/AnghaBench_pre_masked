
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;
struct addrinfo {int ai_flags; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (struct connection const*,char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (struct addrinfo*,int ,int) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static void
FUNC_7(const struct connection *VAR_5, const char *VAR_6,
    struct addrinfo **VAR_7, bool VAR_8)
{
 struct addrinfo VAR_9;
 char *VAR_10, *VAR_11, *VAR_12;
 const char *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_10 = FUNC_0(VAR_6);

 if (VAR_10[0] == '\0') {
  FUNC_1(VAR_5, "empty address");
  FUNC_4(1, "empty address");
 }
 if (VAR_10[0] == '[') {



  VAR_10++;
  VAR_11 = FUNC_6(&VAR_10, "]");
  if (VAR_10 == ((void*)0)) {
   FUNC_1(VAR_5, "malformed address");
   FUNC_4(1, "malformed address %s", VAR_6);
  }
  if (VAR_10[0] == '\0') {
   VAR_13 = ((void*)0);
  } else if (VAR_10[0] == ':') {
   VAR_13 = VAR_10 + 1;
  } else {
   FUNC_1(VAR_5, "malformed address");
   FUNC_4(1, "malformed address %s", VAR_6);
  }
 } else {




  for (VAR_12 = VAR_10; *VAR_12 != '\0'; VAR_12++) {
   if (*VAR_12 == ':')
    VAR_15++;
  }
  if (VAR_15 > 1) {
   VAR_11 = VAR_10;
   VAR_13 = ((void*)0);
  } else {
   VAR_11 = FUNC_6(&VAR_10, ":");
   if (VAR_10 == ((void*)0))
    VAR_13 = ((void*)0);
   else
    VAR_13 = VAR_10;
  }
 }

 if (VAR_13 == ((void*)0) && !VAR_8)
  VAR_13 = "3260";

 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ai_family = VAR_3;
 VAR_9.ai_socktype = VAR_4;
 VAR_9.ai_flags = VAR_0 | VAR_1;
 if (VAR_8)
  VAR_9.ai_flags |= VAR_2;

 VAR_14 = FUNC_3(VAR_11, VAR_13, &VAR_9, VAR_7);
 if (VAR_14 != 0) {
  FUNC_1(VAR_5, FUNC_2(VAR_14));
  FUNC_4(1, "getaddrinfo for %s failed: %s",
      VAR_6, FUNC_2(VAR_14));
 }
}
