
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_7__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_9__ {int cursor; } ;
struct TYPE_8__ {int modelpage; TYPE_3__ menu; int numpages; int nummodels; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static sfxHandle_t FUNC_5( int VAR_5 )
{
 menucommon_s* VAR_6;
 int VAR_7;

 switch (VAR_5)
 {
  case 132:
  case 130:
   VAR_6 = FUNC_1(&VAR_4.menu);
   VAR_7 = VAR_6->id - VAR_0;
   if (VAR_7 >= 0 && VAR_7 <= 15)
   {
    if (VAR_7 > 0)
    {
     FUNC_2(&VAR_4.menu,VAR_4.menu.cursor-1);
     return (VAR_3);

    }
    else if (VAR_4.modelpage > 0)
    {
     VAR_4.modelpage--;
     FUNC_2(&VAR_4.menu,VAR_4.menu.cursor+15);
     FUNC_4();
     return (VAR_3);
    }
    else
     return (VAR_2);
   }
   break;

  case 131:
  case 128:
   VAR_6 = FUNC_1(&VAR_4.menu);
   VAR_7 = VAR_6->id - VAR_0;
   if (VAR_7 >= 0 && VAR_7 <= 15)
   {
    if ((VAR_7 < 15) && (VAR_4.modelpage*VAR_1 + VAR_7+1 < VAR_4.nummodels))
    {
     FUNC_2(&VAR_4.menu,VAR_4.menu.cursor+1);
     return (VAR_3);
    }
    else if ((VAR_7 == 15) && (VAR_4.modelpage < VAR_4.numpages-1))
    {
     VAR_4.modelpage++;
     FUNC_2(&VAR_4.menu,VAR_4.menu.cursor-15);
     FUNC_4();
     return (VAR_3);
    }
    else
     return (VAR_2);
   }
   break;

  case 129:
  case 133:
   FUNC_3();
   break;
 }

 return ( FUNC_0( &VAR_4.menu, VAR_5 ) );
}
