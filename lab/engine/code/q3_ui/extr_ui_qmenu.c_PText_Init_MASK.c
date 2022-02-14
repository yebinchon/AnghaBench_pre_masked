
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int flags; int left; int right; int top; int bottom; } ;
struct TYPE_5__ {TYPE_1__ generic; int string; int style; } ;
typedef TYPE_2__ menutext_s ;


 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( menutext_s *VAR_4 )
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 float VAR_9;

 VAR_9 = FUNC_0( VAR_4->style );

 VAR_5 = VAR_4->generic.x;
 VAR_6 = VAR_4->generic.y;
 VAR_7 = FUNC_1( VAR_4->string ) * VAR_9;
 VAR_8 = VAR_1 * VAR_9;

 if( VAR_4->generic.flags & VAR_3 ) {
  VAR_5 -= VAR_7;
 }
 else if( VAR_4->generic.flags & VAR_2 ) {
  VAR_5 -= VAR_7 / 2;
 }

 VAR_4->generic.left = VAR_5 - VAR_0 * VAR_9;
 VAR_4->generic.right = VAR_5 + VAR_7 + VAR_0 * VAR_9;
 VAR_4->generic.top = VAR_6;
 VAR_4->generic.bottom = VAR_6 + VAR_8;
}
