
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct addrinfo {int ai_family; void* ai_flags; } ;




 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_2 (int const,char const*,int *) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_5(struct addrinfo **VAR_2, const char *VAR_3, struct addrinfo VAR_4)
{
 int VAR_5;
 u_int32_t VAR_6[4];
 const char *VAR_7;

 if (VAR_3 == ((void*)0) || FUNC_3("*", VAR_3) == 0)
  VAR_7 = ((void*)0);
 else
  VAR_7 = VAR_3;

 if (VAR_7 != ((void*)0)) {
  switch (VAR_4.ai_family) {
  case 129:
   if (FUNC_2(129, VAR_7, VAR_6) == 1) {
    VAR_4.ai_flags = VAR_0;
   } else {
    if (FUNC_2(128, VAR_7,
        VAR_6) == 1)
     return (1);
   }
   break;
  case 128:
   if (FUNC_2(128, VAR_7, VAR_6) == 1) {
    VAR_4.ai_flags = VAR_0;
   } else {
    if (FUNC_2(129, VAR_7,
        VAR_6) == 1)
     return (1);
   }
   break;
  default:
   break;
  }
 }

 VAR_5 = FUNC_1(VAR_7, "nfs", &VAR_4, VAR_2);
 if (VAR_5 != 0) {
  FUNC_4(VAR_1, "getaddrinfo %s: %s", VAR_3,
      FUNC_0(VAR_5));
  return (1);
 }
 return (0);
}
