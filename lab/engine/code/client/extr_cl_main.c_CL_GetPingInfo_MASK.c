
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; } ;
struct TYPE_4__ {int info; TYPE_1__ adr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_2__* VAR_1 ;

void FUNC_1( int VAR_2, char *VAR_3, int VAR_4 )
{
 if (VAR_2 < 0 || VAR_2 >= VAR_0 || !VAR_1[VAR_2].adr.port)
 {

  if (VAR_4)
   VAR_3[0] = '\0';
  return;
 }

 FUNC_0( VAR_3, VAR_1[VAR_2].info, VAR_4 );
}
