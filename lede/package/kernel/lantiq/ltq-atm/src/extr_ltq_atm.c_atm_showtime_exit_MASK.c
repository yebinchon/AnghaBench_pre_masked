
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_6;

 if ( !VAR_4 )
  return -1;





 for ( VAR_6 = 0; VAR_6 < VAR_1; VAR_6++ )
  FUNC_1(VAR_3.port[VAR_6].dev, VAR_0);

 VAR_4 = 0;
 VAR_5 = ((void*)0);
 FUNC_2("leave showtime\n");
 return 0;
}
