
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in_addr {int s_addr; } ;
struct in6_addr {int * s6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,void*,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(uint32_t VAR_4, char *VAR_5, char *VAR_6)
{
 int VAR_7;
 void *VAR_8;
 struct in_addr VAR_9;
 struct in6_addr VAR_10;

 if (VAR_4 > VAR_2 || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  return (((void*)0));

 switch (VAR_4) {

  case 4:
   FUNC_1(&VAR_9, VAR_5, sizeof(VAR_9));
   VAR_7 = VAR_0;
   VAR_8 = &VAR_9;
   break;


  case 16:
   FUNC_1(VAR_10, VAR_5, sizeof(VAR_10));
   VAR_7 = VAR_1;
   VAR_8 = &VAR_10;
   break;

  default:
   return (((void*)0));
 }

 if (FUNC_0(VAR_7, VAR_8, VAR_6, VAR_3) == ((void*)0)) {
  FUNC_2("inet_ntop failed");
  return (((void*)0));
 }

 return (VAR_6);
}
