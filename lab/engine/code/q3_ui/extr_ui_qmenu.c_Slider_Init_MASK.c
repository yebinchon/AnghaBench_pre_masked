
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ y; scalar_t__ bottom; scalar_t__ top; scalar_t__ x; scalar_t__ right; scalar_t__ left; scalar_t__ name; } ;
struct TYPE_5__ {TYPE_1__ generic; } ;
typedef TYPE_2__ menuslider_s ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( menuslider_s *VAR_3 )
{
 int VAR_4;


 if (VAR_3->generic.name)
  VAR_4 = FUNC_0(VAR_3->generic.name);
 else
  VAR_4 = 0;

 VAR_3->generic.left = VAR_3->generic.x - (VAR_4+1)*VAR_2;
 VAR_3->generic.right = VAR_3->generic.x + (VAR_0+2+1)*VAR_2;
 VAR_3->generic.top = VAR_3->generic.y;
 VAR_3->generic.bottom = VAR_3->generic.y + VAR_1;
}
