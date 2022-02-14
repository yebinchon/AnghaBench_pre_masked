
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_6__ {int (* callback ) (TYPE_2__*,int ) ;scalar_t__ x; } ;
struct TYPE_7__ {int curvalue; int maxvalue; int minvalue; TYPE_1__ generic; } ;
typedef TYPE_2__ menuslider_s ;
struct TYPE_8__ {scalar_t__ cursorx; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static sfxHandle_t FUNC_1( menuslider_s *VAR_6, int VAR_7 )
{
 sfxHandle_t VAR_8;
 int VAR_9;
 int VAR_10;

 switch (VAR_7)
 {
  case 129:
   VAR_9 = VAR_5.cursorx - VAR_6->generic.x - 2*VAR_2;
   VAR_10 = VAR_6->curvalue;
   VAR_6->curvalue = (VAR_9/(float)(VAR_1*VAR_2)) * (VAR_6->maxvalue-VAR_6->minvalue) + VAR_6->minvalue;

   if (VAR_6->curvalue < VAR_6->minvalue)
    VAR_6->curvalue = VAR_6->minvalue;
   else if (VAR_6->curvalue > VAR_6->maxvalue)
    VAR_6->curvalue = VAR_6->maxvalue;
   if (VAR_6->curvalue != VAR_10)
    VAR_8 = VAR_4;
   else
    VAR_8 = 0;
   break;

  case 132:
  case 130:
   if (VAR_6->curvalue > VAR_6->minvalue)
   {
    VAR_6->curvalue--;
    VAR_8 = VAR_4;
   }
   else
    VAR_8 = VAR_3;
   break;

  case 131:
  case 128:
   if (VAR_6->curvalue < VAR_6->maxvalue)
   {
    VAR_6->curvalue++;
    VAR_8 = VAR_4;
   }
   else
    VAR_8 = VAR_3;
   break;

  default:

   VAR_8 = 0;
   break;
 }

 if ( VAR_8 && VAR_6->generic.callback )
  VAR_6->generic.callback( VAR_6, VAR_0 );

 return (VAR_8);
}
