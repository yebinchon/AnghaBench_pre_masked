
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef int nfds_t ;
typedef int fd_set ;
struct TYPE_3__ {int lNetworkEvents; } ;
typedef TYPE_1__ WSANETWORKEVENTS ;
typedef scalar_t__ ULONGLONG ;
typedef int SOCKET ;
typedef int MSG ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int * FUNC_0 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int **,scalar_t__,scalar_t__,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_8 (int *,int *,int ,int ,int ) ;
 int VAR_22 ;
 int FUNC_9 (int,scalar_t__) ;
 scalar_t__ VAR_23 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_24 ;
 int FUNC_11 (int,int *,TYPE_1__*) ;
 int FUNC_12 (int,int *,int) ;
 int VAR_25 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int,int *,int *,int *) ;
 int VAR_26 ;
 int FUNC_16 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_17 (int ) ;
 void* FUNC_18 (int *,int*) ;
 int FUNC_19 (int,int,int) ;

int
FUNC_20 (struct pollfd *VAR_27, nfds_t VAR_28, int VAR_29)
{

  fd_set VAR_30, VAR_31, VAR_32;
  struct timeval VAR_33;
  struct timeval *VAR_34;
  int VAR_35, VAR_36;
  nfds_t VAR_37;
  if (!VAR_27 && VAR_28)
    {
      VAR_26 = VAR_0;
      return -1;
    }


  if (VAR_29 == 0)
    {
      VAR_34 = &VAR_33;
      VAR_34->tv_sec = 0;
      VAR_34->tv_usec = 0;
    }
  else if (VAR_29 > 0)
    {
      VAR_34 = &VAR_33;
      VAR_34->tv_sec = VAR_29 / 1000;
      VAR_34->tv_usec = (VAR_29 % 1000) * 1000;
    }
  else if (VAR_29 == VAR_12)

    VAR_34 = ((void*)0);
  else
    {
      VAR_26 = VAR_1;
      return -1;
    }


  VAR_35 = -1;
  FUNC_4 (&VAR_30);
  FUNC_4 (&VAR_31);
  FUNC_4 (&VAR_32);
  for (VAR_37 = 0; VAR_37 < VAR_28; VAR_37++)
    {
      if (VAR_27[VAR_37].fd < 0)
 continue;

      if (VAR_27[VAR_37].events & (VAR_15 | VAR_19))
 FUNC_3 (VAR_27[VAR_37].fd, &VAR_30);




      if (VAR_27[VAR_37].events & (VAR_16 | VAR_21 | VAR_20))
 FUNC_3 (VAR_27[VAR_37].fd, &VAR_31);
      if (VAR_27[VAR_37].events & (VAR_17 | VAR_18))
 FUNC_3 (VAR_27[VAR_37].fd, &VAR_32);
      if (VAR_27[VAR_37].fd >= VAR_35
   && (VAR_27[VAR_37].events & (VAR_15 | VAR_16 | VAR_17
          | VAR_19 | VAR_18
          | VAR_21 | VAR_20)))
 {
   VAR_35 = VAR_27[VAR_37].fd;
   if (VAR_35 > VAR_9)
     {
       VAR_26 = VAR_2;
       return -1;
     }
 }
    }


  VAR_36 = FUNC_16 (VAR_35 + 1, &VAR_30, &VAR_31, &VAR_32, VAR_34);
  if (VAR_36 < 0)
    return VAR_36;


  VAR_36 = 0;
  for (VAR_37 = 0; VAR_37 < VAR_28; VAR_37++)
    if (VAR_27[VAR_37].fd < 0)
      VAR_27[VAR_37].revents = 0;
    else
      {
 int VAR_38 = FUNC_15 (VAR_27[VAR_37].fd, VAR_27[VAR_37].events,
     &VAR_30, &VAR_31, &VAR_32);
 if (VAR_38)
   {
     VAR_27[VAR_37].revents = VAR_38;
     VAR_36++;
   }
 else
   {
     VAR_27[VAR_37].revents = 0;
   }
      }

  return VAR_36;
}
