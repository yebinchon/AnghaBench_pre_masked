
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {int sin_len; void* sin_port; TYPE_1__ sin_addr; void* sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin2 ;
typedef int sin1 ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(int *VAR_6, int *VAR_7)
{
 struct sockaddr_in VAR_8, VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_6(VAR_2, VAR_3, 0);
 if (VAR_10 == -1)
  return (-1);

 VAR_11 = FUNC_6(VAR_2, VAR_3, 0);
 if (VAR_11 == -1) {
  FUNC_2(VAR_10);
  return (-1);
 }

 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8 = sizeof(VAR_8);
 VAR_8 = VAR_0;
 VAR_8 = FUNC_4(VAR_1);
 VAR_8 = FUNC_5(VAR_4);

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9 = sizeof(VAR_9);
 VAR_9 = VAR_0;
 VAR_9 = FUNC_4(VAR_1);
 VAR_9 = FUNC_5(VAR_5);

 if (FUNC_0(VAR_10, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_0(VAR_11, (struct sockaddr *) &VAR_9, sizeof(VAR_9)) < 0) {
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_3(VAR_10, (struct sockaddr *) &VAR_9, sizeof(VAR_9)) < 0) {
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  return (-1);
 }

 if (FUNC_3(VAR_11, (struct sockaddr *) &VAR_8, sizeof(VAR_8)) < 0) {
  FUNC_2(VAR_10);
  FUNC_2(VAR_11);
  return (-1);
 }

 *VAR_6 = VAR_10;
 *VAR_7 = VAR_11;

 return (0);
}
