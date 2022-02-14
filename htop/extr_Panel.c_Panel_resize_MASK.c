
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int needsRedraw; int header; } ;
typedef TYPE_1__ Panel ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(Panel* VAR_0, int VAR_1, int VAR_2) {
   FUNC_1 (VAR_0 != ((void*)0));

   if (FUNC_0(VAR_0->header) > 0)
      VAR_2--;
   VAR_0->w = VAR_1;
   VAR_0->h = VAR_2;
   VAR_0->needsRedraw = 1;
}
