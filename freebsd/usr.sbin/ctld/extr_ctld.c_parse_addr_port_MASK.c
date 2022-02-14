
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addrinfo {int ai_flags; int ai_socktype; int ai_family; } ;
typedef int hints ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, const char *VAR_4, struct addrinfo **VAR_5)
{
 struct addrinfo VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 const char *VAR_10;
 int VAR_11, VAR_12 = 0;

 VAR_7 = VAR_3 = FUNC_3(VAR_3);
 if (VAR_3[0] == '[') {



  VAR_3++;
  VAR_8 = FUNC_4(&VAR_3, "]");
  if (VAR_3 == ((void*)0)) {
   FUNC_0(VAR_7);
   return (1);
  }
  if (VAR_3[0] == '\0') {
   VAR_10 = VAR_4;
  } else if (VAR_3[0] == ':') {
   VAR_10 = VAR_3 + 1;
  } else {
   FUNC_0(VAR_7);
   return (1);
  }
 } else {




  for (VAR_9 = VAR_3; *VAR_9 != '\0'; VAR_9++) {
   if (*VAR_9 == ':')
    VAR_12++;
  }
  if (VAR_12 > 1) {
   VAR_8 = VAR_3;
   VAR_10 = VAR_4;
  } else {
   VAR_8 = FUNC_4(&VAR_3, ":");
   if (VAR_3 == ((void*)0))
    VAR_10 = VAR_4;
   else
    VAR_10 = VAR_3;
  }
 }

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ai_family = VAR_1;
 VAR_6.ai_socktype = VAR_2;
 VAR_6.ai_flags = VAR_0;
 VAR_11 = FUNC_1(VAR_8, VAR_10, &VAR_6, VAR_5);
 FUNC_0(VAR_7);
 return ((VAR_11 != 0) ? 1 : 0);
}
