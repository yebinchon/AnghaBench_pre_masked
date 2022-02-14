
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int x; int y; int flags; int name; scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; int parent; } ;
struct TYPE_6__ {int field; TYPE_1__ generic; } ;
typedef TYPE_2__ menufield_s ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,float*) ;
 TYPE_2__* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int,int,int,float*) ;
 int FUNC_3 (int,int,int ,int,float*) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 float* VAR_13 ;
 float* VAR_14 ;
 float* VAR_15 ;

void FUNC_5( menufield_s *VAR_16 )
{
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 qboolean VAR_21;
 float *VAR_22;

 VAR_17 = VAR_16->generic.x;
 VAR_18 = VAR_16->generic.y;

 if (VAR_16->generic.flags & VAR_2)
 {
  VAR_19 = VAR_3;
  VAR_20 = VAR_9;
 }
 else
 {
  VAR_19 = VAR_0;
  VAR_20 = VAR_4;
 }

 if (FUNC_1( VAR_16->generic.parent ) == VAR_16) {
  VAR_21 = VAR_12;
  VAR_20 |= VAR_7;
 }
 else {
  VAR_21 = VAR_11;
 }

 if (VAR_16->generic.flags & VAR_1)
  VAR_22 = VAR_13;
 else if (VAR_21)
  VAR_22 = VAR_14;
 else
  VAR_22 = VAR_15;

 if ( VAR_21 )
 {

  FUNC_4( VAR_16->generic.left, VAR_16->generic.top, VAR_16->generic.right-VAR_16->generic.left+1, VAR_16->generic.bottom-VAR_16->generic.top+1, VAR_10 );
  FUNC_2( VAR_17, VAR_18, 13, VAR_6|VAR_5|VAR_20, VAR_22);
 }

 if ( VAR_16->generic.name ) {
  FUNC_3( VAR_17 - VAR_19, VAR_18, VAR_16->generic.name, VAR_20|VAR_8, VAR_22 );
 }

 FUNC_0( &VAR_16->field, VAR_17 + VAR_19, VAR_18, VAR_20, VAR_22 );
}
