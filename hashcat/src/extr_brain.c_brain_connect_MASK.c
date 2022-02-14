
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int so_error ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,int,int ,char*,int,int *) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int const VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (int,struct sockaddr const*,int) ;
 int VAR_10 ;
 int FUNC_5 (int,int ,int const) ;
 int FUNC_6 (int,int ,int ,int*,int*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int,int const) ;
 int VAR_11 ;
 char* FUNC_9 (int) ;

int FUNC_10 (int VAR_12, const struct sockaddr *VAR_13, socklen_t VAR_14, const int VAR_15)
{
  const int VAR_16 = FUNC_5 (VAR_12, VAR_2, 0);

  if (FUNC_5 (VAR_12, VAR_3, VAR_16 | VAR_5) == -1)
  {
    FUNC_3 (VAR_11, 0, "fcntl: %s\n", FUNC_9 (VAR_10));

    return -1;
  }

  FUNC_4 (VAR_12, VAR_13, VAR_14);

  const int VAR_17 = FUNC_8 (VAR_12, VAR_15);

  if (VAR_17 == -1) return -1;

  if (VAR_17 == 0)
  {
    FUNC_3 (VAR_11, 0, "connect: timeout\n");

    return -1;
  }

  int VAR_18 = 0;

  socklen_t VAR_19 = sizeof (VAR_18);

  if (FUNC_6 (VAR_12, VAR_7, VAR_8, &VAR_18, &VAR_19) == -1)
  {
    FUNC_3 (VAR_11, 0, "getsockopt: %s\n", FUNC_9 (VAR_10));

    return -1;
  }

  if (FUNC_5 (VAR_12, VAR_3, VAR_16) == -1)
  {
    FUNC_3 (VAR_11, 0, "fcntl: %s\n", FUNC_9 (VAR_10));

    return -1;
  }

  if (VAR_18 != 0)
  {
    FUNC_3 (VAR_11, 0, "connect: %s\n", FUNC_9 (VAR_18));

    return -1;
  }



  return 0;
}
