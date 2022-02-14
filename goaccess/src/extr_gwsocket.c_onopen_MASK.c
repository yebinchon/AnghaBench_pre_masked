
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int WSPipeOut ;
struct TYPE_3__ {int listener; char* remote_ip; } ;
typedef TYPE_1__ WSClient ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_4 (WSPipeOut * VAR_2, WSClient * VAR_3)
{
  uint32_t VAR_4 = sizeof (uint32_t) * 3;
  char *VAR_5 = FUNC_0 (VAR_4, sizeof (char));
  char *VAR_6 = VAR_5;

  VAR_6 += FUNC_2 (VAR_6, VAR_3->listener);
  VAR_6 += FUNC_2 (VAR_6, VAR_1);
  VAR_6 += FUNC_2 (VAR_6, VAR_0);

  FUNC_3 (VAR_2, VAR_5, VAR_4);
  FUNC_3 (VAR_2, VAR_3->remote_ip, VAR_0);
  FUNC_1 (VAR_5);

  return 0;
}
