
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_5__ {int flags; int (* callback ) (TYPE_2__*,int ) ;} ;
struct TYPE_6__ {int curvalue; TYPE_1__ generic; } ;
typedef TYPE_2__ menuradiobutton_s ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static sfxHandle_t FUNC_1( menuradiobutton_s *VAR_3, int VAR_4 )
{
 switch (VAR_4)
 {
  case 129:
   if (!(VAR_3->generic.flags & VAR_0))
    break;

  case 137:
  case 136:
  case 135:
  case 134:
  case 138:
  case 133:
  case 132:
  case 130:
  case 131:
  case 128:
   VAR_3->curvalue = !VAR_3->curvalue;
   if ( VAR_3->generic.callback )
    VAR_3->generic.callback( VAR_3, VAR_1 );

   return (VAR_2);
 }


 return 0;
}
