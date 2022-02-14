
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_5__ {int (* callback ) (TYPE_2__*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ generic; int numitems; int curvalue; } ;
typedef TYPE_2__ menulist_s ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static sfxHandle_t FUNC_1( menulist_s *VAR_2, int VAR_3 )
{
 sfxHandle_t VAR_4;

 VAR_4 = 0;
 switch (VAR_3)
 {
  case 131:
  case 128:
  case 129:
   VAR_2->curvalue++;
   if (VAR_2->curvalue >= VAR_2->numitems)
    VAR_2->curvalue = 0;
   VAR_4 = VAR_1;
   break;

  case 132:
  case 130:
   VAR_2->curvalue--;
   if (VAR_2->curvalue < 0)
    VAR_2->curvalue = VAR_2->numitems-1;
   VAR_4 = VAR_1;
   break;
 }

 if ( VAR_4 && VAR_2->generic.callback )
  VAR_2->generic.callback( VAR_2, VAR_0 );

 return (VAR_4);
}
