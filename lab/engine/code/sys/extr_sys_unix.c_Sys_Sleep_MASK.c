
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;

void FUNC_4( int VAR_2 )
{
 if( VAR_2 == 0 )
  return;

 if( VAR_1 )
 {
  fd_set VAR_3;

  FUNC_1(&VAR_3);
  FUNC_0(VAR_0, &VAR_3);
  if( VAR_2 < 0 )
  {
   FUNC_2(VAR_0 + 1, &VAR_3, ((void*)0), ((void*)0), ((void*)0));
  }
  else
  {
   struct timeval VAR_4;

   VAR_4.tv_sec = VAR_2/1000;
   VAR_4.tv_usec = (VAR_2%1000)*1000;
   FUNC_2(VAR_0 + 1, &VAR_3, ((void*)0), ((void*)0), &VAR_4);
  }
 }
 else
 {

  if( VAR_2 < 0 )
   VAR_2 = 10;

  FUNC_3( VAR_2 * 1000 );
 }
}
