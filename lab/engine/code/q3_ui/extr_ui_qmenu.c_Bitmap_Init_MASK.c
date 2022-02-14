
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int flags; int left; int right; int top; int bottom; } ;
struct TYPE_5__ {int width; int height; scalar_t__ focusshader; scalar_t__ shader; TYPE_1__ generic; } ;
typedef TYPE_2__ menubitmap_s ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0( menubitmap_s *VAR_2 )
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->generic.x;
 VAR_4 = VAR_2->generic.y;
 VAR_5 = VAR_2->width;
 VAR_6 = VAR_2->height;
 if( VAR_5 < 0 ) {
  VAR_5 = -VAR_5;
 }
 if( VAR_6 < 0 ) {
  VAR_6 = -VAR_6;
 }

 if (VAR_2->generic.flags & VAR_1)
 {
  VAR_3 = VAR_3 - VAR_5;
 }
 else if (VAR_2->generic.flags & VAR_0)
 {
  VAR_3 = VAR_3 - VAR_5/2;
 }

 VAR_2->generic.left = VAR_3;
 VAR_2->generic.right = VAR_3 + VAR_5;
 VAR_2->generic.top = VAR_4;
 VAR_2->generic.bottom = VAR_4 + VAR_6;

 VAR_2->shader = 0;
 VAR_2->focusshader = 0;
}
