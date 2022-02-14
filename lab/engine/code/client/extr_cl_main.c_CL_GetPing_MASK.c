
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int port; } ;
struct TYPE_4__ {int time; int start; int info; TYPE_2__ adr; } ;


 int FUNC_0 (TYPE_2__,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 char* FUNC_2 (TYPE_2__) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 () ;
 TYPE_1__* VAR_1 ;

void FUNC_5( int VAR_2, char *VAR_3, int VAR_4, int *VAR_5 )
{
 const char *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_2 < 0 || VAR_2 >= VAR_0 || !VAR_1[VAR_2].adr.port)
 {

  VAR_3[0] = '\0';
  *VAR_5 = 0;
  return;
 }

 VAR_6 = FUNC_2( VAR_1[VAR_2].adr );
 FUNC_3( VAR_3, VAR_6, VAR_4 );

 VAR_7 = VAR_1[VAR_2].time;
 if (!VAR_7)
 {

  VAR_7 = FUNC_4() - VAR_1[VAR_2].start;
  VAR_8 = FUNC_1( "cl_maxPing" );
  if( VAR_8 < 100 ) {
   VAR_8 = 100;
  }
  if (VAR_7 < VAR_8)
  {

   VAR_7 = 0;
  }
 }

 FUNC_0(VAR_1[VAR_2].adr, VAR_1[VAR_2].info, VAR_1[VAR_2].time);

 *VAR_5 = VAR_7;
}
