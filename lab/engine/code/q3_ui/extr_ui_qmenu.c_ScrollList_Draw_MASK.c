
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ menuPosition; int x; int y; int flags; TYPE_1__* parent; } ;
struct TYPE_7__ {int columns; int top; int height; int numitems; int curvalue; int width; int separation; int * itemnames; TYPE_2__ generic; } ;
typedef TYPE_3__ menulist_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ,int,float*) ;
 int FUNC_1 (int,int,int,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 float* VAR_8 ;
 float* VAR_9 ;

void FUNC_2( menulist_s *VAR_10 )
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 float* VAR_17;
 qboolean VAR_18;
 int VAR_19;

 VAR_18 = (VAR_10->generic.parent->cursor == VAR_10->generic.menuPosition);

 VAR_11 = VAR_10->generic.x;
 for( VAR_16 = 0; VAR_16 < VAR_10->columns; VAR_16++ ) {
  VAR_13 = VAR_10->generic.y;
  VAR_15 = VAR_10->top + VAR_16 * VAR_10->height;
  for( VAR_14 = VAR_15; VAR_14 < VAR_15 + VAR_10->height; VAR_14++) {
   if (VAR_14 >= VAR_10->numitems)
    break;

   if (VAR_14 == VAR_10->curvalue)
   {
    VAR_12 = VAR_11 - 2;
    if( VAR_10->generic.flags & VAR_0 ) {
     VAR_12 -= (VAR_10->width * VAR_2) / 2 + 1;
    }

    FUNC_1(VAR_12,VAR_13,VAR_10->width*VAR_2,VAR_1+2,VAR_7);
    VAR_17 = VAR_8;

    if (VAR_18)
     VAR_19 = VAR_5|VAR_4|VAR_6;
    else
     VAR_19 = VAR_4|VAR_6;
   }
   else
   {
    VAR_17 = VAR_9;
    VAR_19 = VAR_4|VAR_6;
   }
   if( VAR_10->generic.flags & VAR_0 ) {
    VAR_19 |= VAR_3;
   }

   FUNC_0(
    VAR_11,
    VAR_13,
    VAR_10->itemnames[VAR_14],
    VAR_19,
    VAR_17);

   VAR_13 += VAR_1;
  }
  VAR_11 += (VAR_10->width + VAR_10->separation) * VAR_2;
 }
}
