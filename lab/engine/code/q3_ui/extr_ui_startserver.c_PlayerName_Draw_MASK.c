
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {int x; int y; scalar_t__ menuPosition; int flags; int name; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; TYPE_1__* parent; } ;
struct TYPE_6__ {int string; TYPE_2__ generic; } ;
typedef TYPE_3__ menutext_s ;
struct TYPE_4__ {scalar_t__ cursor; } ;


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

__attribute__((used)) static void FUNC_3( void *VAR_13 ) {
 menutext_s *VAR_14;
 float *VAR_15;
 int VAR_16, VAR_17;
 int VAR_18;
 qboolean VAR_19;

 VAR_14 = (menutext_s *)VAR_13;

 VAR_16 = VAR_14->generic.x;
 VAR_17 = VAR_14->generic.y;

 VAR_18 = VAR_8;
 VAR_19 = (VAR_14->generic.parent->cursor == VAR_14->generic.menuPosition);

 if ( VAR_14->generic.flags & VAR_1 )
  VAR_15 = VAR_10;
 else if ( VAR_19 )
 {
  VAR_15 = VAR_11;
  VAR_18 |= VAR_6;
 }
 else if ( VAR_14->generic.flags & VAR_0 )
 {
  VAR_15 = VAR_11;
  VAR_18 |= VAR_3;
 }
 else
  VAR_15 = VAR_12;

 if ( VAR_19 )
 {

  FUNC_2( VAR_14->generic.left, VAR_14->generic.top, VAR_14->generic.right-VAR_14->generic.left+1, VAR_14->generic.bottom-VAR_14->generic.top+1, VAR_9 );
  FUNC_0( VAR_16, VAR_17, 13, VAR_4|VAR_3|VAR_8, VAR_15);
 }

 FUNC_1( VAR_16 - VAR_2, VAR_17, VAR_14->generic.name, VAR_18|VAR_7, VAR_15 );
 FUNC_1( VAR_16 + VAR_2, VAR_17, VAR_14->string, VAR_18|VAR_5, VAR_15 );
}
