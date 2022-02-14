
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_handle_type ;
typedef scalar_t__ uv_file ;
typedef int type ;
struct stat {int st_mode; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int socklen_t ;
typedef int sa ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (scalar_t__,struct stat*) ;
 scalar_t__ FUNC_5 (scalar_t__,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ,int*,int*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

uv_handle_type FUNC_8(uv_file VAR_13) {
  struct sockaddr VAR_14;
  struct stat VAR_15;
  socklen_t VAR_16;
  int VAR_17;

  if (VAR_13 < 0)
    return VAR_12;

  if (FUNC_7(VAR_13))
    return VAR_10;

  if (FUNC_4(VAR_13, &VAR_15))
    return VAR_12;

  if (FUNC_2(VAR_15.st_mode))
    return VAR_7;

  if (FUNC_0(VAR_15.st_mode))
    return VAR_7;

  if (FUNC_1(VAR_15.st_mode))
    return VAR_8;

  if (!FUNC_3(VAR_15.st_mode))
    return VAR_12;

  VAR_16 = sizeof(VAR_17);
  if (FUNC_6(VAR_13, VAR_5, VAR_6, &VAR_17, &VAR_16))
    return VAR_12;

  VAR_16 = sizeof(VAR_14);
  if (FUNC_5(VAR_13, &VAR_14, &VAR_16))
    return VAR_12;

  if (VAR_17 == VAR_3)
    if (VAR_14.sa_family == VAR_0 || VAR_14.sa_family == VAR_1)
      return VAR_11;

  if (VAR_17 == VAR_4) {
    if (VAR_14.sa_family == VAR_0 || VAR_14.sa_family == VAR_1)
      return VAR_9;
    if (VAR_14.sa_family == VAR_2)
      return VAR_8;
  }

  return VAR_12;
}
