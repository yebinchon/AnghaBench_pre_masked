
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int spec1; int spec2; int need_configure; int perp_mode; scalar_t__ rawcmd; } ;
struct TYPE_3__ {scalar_t__ track; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_1(int VAR_6)
{
 int VAR_7;

 VAR_0->spec1 = VAR_0->spec2 = -1;
 VAR_0->need_configure = 1;
 VAR_0->perp_mode = 1;
 VAR_0->rawcmd = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  if (FUNC_0(VAR_7) == VAR_5 && (VAR_6 || VAR_4->track != VAR_1))
   VAR_4->track = VAR_2;
}
