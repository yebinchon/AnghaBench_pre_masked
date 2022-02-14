
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int flags; } ;
struct TYPE_5__ {float* color; int style; int string; TYPE_1__ generic; } ;
typedef TYPE_2__ menutext_s ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ,float*) ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_1( menutext_s *VAR_2 )
{
 int VAR_3;
 int VAR_4;
 float* VAR_5;

 VAR_3 = VAR_2->generic.x;
 VAR_4 = VAR_2->generic.y;

 if (VAR_2->generic.flags & VAR_0)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_2->color;

 FUNC_0( VAR_3, VAR_4, VAR_2->string, VAR_2->style, VAR_5 );
}
