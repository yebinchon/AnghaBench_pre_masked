
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; void* sin6_port; void* sin6_family; int sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr_in {int sin6_addr; void* sin6_port; void* sin6_family; int sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin_out ;
typedef int sin6_out ;
typedef int sin6 ;
typedef int sin ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_socklen_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sockaddr*) ;
 int FUNC_5 (void*,char*,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,struct sockaddr*,int*) ;
 int VAR_4 ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct sockaddr_in6*,int ,int) ;
 scalar_t__ FUNC_9 (void*,int ,int ) ;

__attribute__((used)) static int
FUNC_10(void)
{
 evutil_socket_t VAR_5 = -1;
 struct sockaddr_in VAR_6, VAR_7;
 struct sockaddr_in6 VAR_8, VAR_9;
 ev_socklen_t VAR_10 = sizeof(VAR_7);
 ev_socklen_t VAR_11 = sizeof(VAR_9);
 int VAR_12;
 if (VAR_4)
  return 0;


 VAR_4 = 1;

 if (FUNC_2() == 0) {

  return 0;
 }






 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_port = FUNC_7(53);
 VAR_12 = FUNC_5(VAR_0, "18.244.0.188", &VAR_6.sin_addr);
 FUNC_0(VAR_12);

 FUNC_8(&VAR_8, 0, sizeof(VAR_8));
 VAR_8 = VAR_1;
 VAR_8 = FUNC_7(53);
 VAR_12 = FUNC_5(VAR_1, "2001:4860:b002::68", &VAR_8);
 FUNC_0(VAR_12);

 FUNC_8(&VAR_7, 0, sizeof(VAR_7));
 FUNC_8(&VAR_9, 0, sizeof(VAR_9));


 if ((VAR_5 = FUNC_9(VAR_0, VAR_3, VAR_2)) >= 0 &&
     FUNC_1(VAR_5, (struct sockaddr*)&VAR_6, sizeof(VAR_6)) == 0 &&
     FUNC_6(VAR_5, (struct sockaddr*)&VAR_7, &VAR_10) == 0) {

  FUNC_4((struct sockaddr*) &VAR_7);
 }
 if (VAR_5 >= 0)
  FUNC_3(VAR_5);

 if ((VAR_5 = FUNC_9(VAR_1, VAR_3, VAR_2)) >= 0 &&
     FUNC_1(VAR_5, (struct sockaddr*)&VAR_8, sizeof(VAR_8)) == 0 &&
     FUNC_6(VAR_5, (struct sockaddr*)&VAR_9, &VAR_11) == 0) {

  FUNC_4((struct sockaddr*) &VAR_9);
 }

 if (VAR_5 >= 0)
  FUNC_3(VAR_5);

 return 0;
}
