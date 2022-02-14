
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int x; int y; scalar_t__ menuPosition; int flags; char* name; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; TYPE_1__* parent; } ;
struct TYPE_8__ {int curvalue; TYPE_2__ generic; } ;
typedef TYPE_3__ menuradiobutton_s ;
struct TYPE_9__ {int rb_on; int rb_off; } ;
struct TYPE_6__ {scalar_t__ cursor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int,int,float*) ;
 int FUNC_1 (scalar_t__,int,int,int,int ) ;
 int FUNC_2 (scalar_t__,int,char*,int,float*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float* VAR_9 ;
 float* VAR_10 ;
 float* VAR_11 ;
 TYPE_4__ VAR_12 ;

__attribute__((used)) static void FUNC_4( menuradiobutton_s *VAR_13 )
{
 int VAR_14;
 int VAR_15;
 float *VAR_16;
 int VAR_17;
 qboolean VAR_18;

 VAR_14 = VAR_13->generic.x;
 VAR_15 = VAR_13->generic.y;

 VAR_18 = (VAR_13->generic.parent->cursor == VAR_13->generic.menuPosition);

 if ( VAR_13->generic.flags & VAR_0 )
 {
  VAR_16 = VAR_9;
  VAR_17 = VAR_4|VAR_7;
 }
 else if ( VAR_18 )
 {
  VAR_16 = VAR_10;
  VAR_17 = VAR_4|VAR_5|VAR_7;
 }
 else
 {
  VAR_16 = VAR_11;
  VAR_17 = VAR_4|VAR_7;
 }

 if ( VAR_18 )
 {

  FUNC_3( VAR_13->generic.left, VAR_13->generic.top, VAR_13->generic.right-VAR_13->generic.left+1, VAR_13->generic.bottom-VAR_13->generic.top+1, VAR_8 );
  FUNC_0( VAR_14, VAR_15, 13, VAR_3|VAR_2|VAR_7, VAR_16);
 }

 if ( VAR_13->generic.name )
  FUNC_2( VAR_14 - VAR_1, VAR_15, VAR_13->generic.name, VAR_6|VAR_7, VAR_16 );

 if ( !VAR_13->curvalue )
 {
  FUNC_1( VAR_14 + VAR_1, VAR_15 + 2, 16, 16, VAR_12.rb_off);
  FUNC_2( VAR_14 + VAR_1 + 16, VAR_15, "off", VAR_17, VAR_16 );
 }
 else
 {
  FUNC_1( VAR_14 + VAR_1, VAR_15 + 2, 16, 16, VAR_12.rb_on );
  FUNC_2( VAR_14 + VAR_1 + 16, VAR_15, "on", VAR_17, VAR_16 );
 }
}
