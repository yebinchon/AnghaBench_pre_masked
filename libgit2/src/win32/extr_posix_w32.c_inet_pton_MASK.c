
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int LPSTR ;
typedef int LPSOCKADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,int *,int ,int*) ;

 int VAR_6 ;
 int FUNC_2 (void*,void*,int) ;

int FUNC_3(int VAR_7, const char *VAR_8, void *VAR_9)
{
 struct sockaddr_storage VAR_10;
 void *VAR_11;
 int VAR_12 = sizeof(struct sockaddr_storage), VAR_13;
 int VAR_14 = 0;

 if (VAR_7 == VAR_0) {
  VAR_11 = &((struct sockaddr_in *)&VAR_10)->sin_addr;
  VAR_13 = sizeof(struct in_addr);
 } else if (VAR_7 == VAR_1) {
  VAR_11 = &((struct sockaddr_in6 *)&VAR_10)->sin6_addr;
  VAR_13 = sizeof(struct in6_addr);
 } else {
  VAR_6 = VAR_2;
  return -1;
 }

 if ((VAR_14 = FUNC_1((LPSTR)VAR_8, VAR_7, ((void*)0), (LPSOCKADDR)&VAR_10, &VAR_12)) == 0) {
  FUNC_2(VAR_9, VAR_11, VAR_13);
  return 1;
 }

 switch(FUNC_0()) {
 case 129:
  return 0;
 case 130:
  VAR_6 = VAR_5;
  return -1;
 case 128:
  VAR_6 = VAR_4;
  return -1;
 }

 VAR_6 = VAR_3;
 return -1;
}
