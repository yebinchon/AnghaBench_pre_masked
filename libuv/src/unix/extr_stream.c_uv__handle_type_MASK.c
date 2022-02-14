
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_type ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int socklen_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int*) ;
 int FUNC_2 (struct sockaddr_storage*,int ,int) ;

uv_handle_type FUNC_3(int VAR_8) {
  struct sockaddr_storage VAR_9;
  socklen_t VAR_10;
  socklen_t VAR_11;
  int VAR_12;

  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_10 = sizeof(VAR_9);

  if (FUNC_0(VAR_8, (struct sockaddr*)&VAR_9, &VAR_10))
    return VAR_7;

  VAR_11 = sizeof VAR_12;

  if (FUNC_1(VAR_8, VAR_2, VAR_3, &VAR_12, &VAR_11))
    return VAR_7;

  if (VAR_12 == VAR_1) {
    switch (VAR_9.ss_family) {
      case 128:
        return VAR_4;
      case 130:
      case 129:
        return VAR_5;
      }
  }

  if (VAR_12 == VAR_0 &&
      (VAR_9.ss_family == 130 || VAR_9.ss_family == 129))
    return VAR_6;

  return VAR_7;
}
