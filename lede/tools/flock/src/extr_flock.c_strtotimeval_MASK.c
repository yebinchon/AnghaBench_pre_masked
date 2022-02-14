
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_usec; int tv_sec; } ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static char * FUNC_2(const char *VAR_0, struct timeval *VAR_1)
{
  char *VAR_2;
  long VAR_3;
  int VAR_4;

  VAR_1->tv_sec = FUNC_1(VAR_0, &VAR_2, 10);
  VAR_3 = 0;

  if ( *VAR_2 == '.' ) {
    VAR_2++;

    for ( VAR_4 = 0 ; VAR_4 < 6 ; VAR_4++ ) {
      if ( !FUNC_0(*VAR_2) )
 break;

      VAR_3 *= 10;
      VAR_3 += *VAR_2++ - '0';
    }

    for ( ; VAR_4 < 6; VAR_4++ )
      VAR_3 *= 10;

    while ( FUNC_0(*VAR_2) )
      VAR_2++;
  }

  VAR_1->tv_usec = VAR_3;
  return VAR_2;
}
