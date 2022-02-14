
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; int flags; int parent; } ;
struct TYPE_6__ {float* color; int style; int string; TYPE_1__ generic; } ;
typedef TYPE_2__ menutext_s ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int ,int,float*) ;
 int VAR_2 ;
 int VAR_3 ;
 float* VAR_4 ;

__attribute__((used)) static void FUNC_2( menutext_s *VAR_5 )
{
 int VAR_6;
 int VAR_7;
 float * VAR_8;
 int VAR_9;

 VAR_6 = VAR_5->generic.x;
 VAR_7 = VAR_5->generic.y;

 if (VAR_5->generic.flags & VAR_0)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_5->color;

 VAR_9 = VAR_5->style;
 if( VAR_5->generic.flags & VAR_1 ) {
  if( FUNC_0( VAR_5->generic.parent ) == VAR_5 ) {
   VAR_9 |= VAR_3;
  }
  else {
   VAR_9 |= VAR_2;
  }
 }

 FUNC_1( VAR_6, VAR_7, VAR_5->string, VAR_9, VAR_8 );
}
