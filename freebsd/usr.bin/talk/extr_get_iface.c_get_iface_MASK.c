
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; void* sin_port; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct in_addr*,struct in_addr*,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,int ,int ) ;

int
FUNC_9(struct in_addr *VAR_6, struct in_addr *VAR_7)
{
 static struct sockaddr_in VAR_8;
 struct sockaddr_in VAR_9;
 socklen_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_6(&VAR_9.sin_addr, VAR_6, sizeof VAR_9.sin_addr);
 VAR_9.sin_port = FUNC_5(60000);
 VAR_9.sin_family = VAR_0;
 VAR_9.sin_len = sizeof VAR_9;

 VAR_8.sin_addr.s_addr = FUNC_4(VAR_2);
 VAR_8.sin_port = FUNC_5(60000);
 VAR_8.sin_family = VAR_0;
 VAR_8.sin_len = sizeof VAR_8;

 VAR_11 = FUNC_8(VAR_3, VAR_4, 0);
 if (VAR_11 < 0)
  return -1;

 do {
  VAR_12 = FUNC_0(VAR_11, (struct sockaddr *)&VAR_8, sizeof VAR_8);
  VAR_8.sin_port = FUNC_5(FUNC_7(VAR_8.sin_port) + 1);
 } while(VAR_12 < 0 && VAR_5 == VAR_1);

 if (VAR_12 < 0) {
  FUNC_1(VAR_11);
  return -1;
 }

 do {
  VAR_12 = FUNC_2(VAR_11, (struct sockaddr *)&VAR_9, sizeof VAR_9);
  VAR_9.sin_port = FUNC_5(FUNC_7(VAR_9.sin_port) + 1);
 } while(VAR_12 < 0 && VAR_5 == VAR_1);

 if (VAR_12 < 0) {
  FUNC_1(VAR_11);
  return -1;
 }

 VAR_10 = sizeof VAR_8;
 VAR_12 = FUNC_3(VAR_11, (struct sockaddr *)&VAR_8, &VAR_10);
 FUNC_1(VAR_11);
 if (VAR_12 < 0)
  return -1;

 FUNC_6(VAR_7, &VAR_8.sin_addr, sizeof VAR_8.sin_addr);
 return 0;
}
