
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef int ng_hci_event_pkt_t ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,int,int ) ;
 int FUNC_5 (int,int *,int *,int *,struct timeval*) ;
 int VAR_5 ;

int
FUNC_6(int VAR_6, char *VAR_7, int *VAR_8)
{
 struct timeval VAR_9;
 fd_set VAR_10;
 int VAR_11;

 FUNC_3(VAR_7 != ((void*)0));
 FUNC_3(VAR_8 != ((void*)0));
 FUNC_3(*VAR_8 > sizeof(ng_hci_event_pkt_t));

again:
 FUNC_2(&VAR_10);
 FUNC_1(VAR_6, &VAR_10);

 VAR_9.tv_sec = VAR_5;
 VAR_9.tv_usec = 0;

 VAR_11 = FUNC_5(VAR_6 + 1, &VAR_10, ((void*)0), ((void*)0), &VAR_9);
 if (VAR_11 <= 0) {
  if (VAR_11 < 0) {
   if (VAR_4 == VAR_0)
    goto again;
  } else
   VAR_4 = VAR_2;

  return (VAR_1);
 }

 FUNC_3(FUNC_0(VAR_6, &VAR_10));

 VAR_11 = FUNC_4(VAR_6, VAR_7, *VAR_8, 0);
 if (VAR_11 < 0)
  return (VAR_1);

 *VAR_8 = VAR_11;

 return (VAR_3);
}
