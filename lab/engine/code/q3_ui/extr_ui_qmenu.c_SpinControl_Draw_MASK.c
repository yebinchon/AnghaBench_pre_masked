
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {int x; int y; scalar_t__ menuPosition; int flags; int name; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; TYPE_1__* parent; } ;
struct TYPE_7__ {size_t curvalue; int * itemnames; TYPE_2__ generic; } ;
typedef TYPE_3__ menulist_s ;
struct TYPE_5__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int,int,float*) ;
 int FUNC_1 (scalar_t__,int,int ,int,float*) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 float* VAR_10 ;
 float* VAR_11 ;
 float* VAR_12 ;

__attribute__((used)) static void FUNC_3( menulist_s *VAR_13 )
{
 float *VAR_14;
 int VAR_15,VAR_16;
 int VAR_17;
 qboolean VAR_18;

 VAR_15 = VAR_13->generic.x;
 VAR_16 = VAR_13->generic.y;

 VAR_17 = VAR_8;
 VAR_18 = (VAR_13->generic.parent->cursor == VAR_13->generic.menuPosition);

 if ( VAR_13->generic.flags & VAR_1 )
  VAR_14 = VAR_10;
 else if ( VAR_18 )
 {
  VAR_14 = VAR_11;
  VAR_17 |= VAR_6;
 }
 else if ( VAR_13->generic.flags & VAR_0 )
 {
  VAR_14 = VAR_11;
  VAR_17 |= VAR_3;
 }
 else
  VAR_14 = VAR_12;

 if ( VAR_18 )
 {

  FUNC_2( VAR_13->generic.left, VAR_13->generic.top, VAR_13->generic.right-VAR_13->generic.left+1, VAR_13->generic.bottom-VAR_13->generic.top+1, VAR_9 );
  FUNC_0( VAR_15, VAR_16, 13, VAR_4|VAR_3|VAR_8, VAR_14);
 }

 FUNC_1( VAR_15 - VAR_2, VAR_16, VAR_13->generic.name, VAR_17|VAR_7, VAR_14 );
 FUNC_1( VAR_15 + VAR_2, VAR_16, VAR_13->itemnames[VAR_13->curvalue], VAR_17|VAR_5, VAR_14 );
}
