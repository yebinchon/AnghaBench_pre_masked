
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int imgFlags_t ;
struct TYPE_6__ {int integer; } ;
struct TYPE_5__ {int numCubemaps; TYPE_1__* cubemaps; } ;
struct TYPE_4__ {scalar_t__ image; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int ,int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ) ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_5 (char*,int) ;

void FUNC_6(void)
{
 int VAR_10, VAR_11;
 imgFlags_t VAR_12 = VAR_5 | VAR_1 | VAR_3 | VAR_4 | VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_9.numCubemaps; VAR_10++)
 {
  if (!VAR_9.cubemaps[VAR_10].image)
  {
   VAR_9.cubemaps[VAR_10].image = FUNC_1(FUNC_5("*cubeMap%d", VAR_10), ((void*)0), VAR_8->integer, VAR_8->integer, VAR_6, VAR_12, VAR_0);

   for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
   {
    FUNC_0();
    FUNC_4(VAR_10, VAR_11, VAR_7);
    FUNC_3();
    FUNC_2();
   }
  }
 }
}
