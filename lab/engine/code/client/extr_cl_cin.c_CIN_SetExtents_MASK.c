
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; int xpos; int ypos; int width; int height; int dirty; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_0 (int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
 if (VAR_4 < 0 || VAR_4>= VAR_1 || VAR_2[VAR_4].status == VAR_0) return;
 VAR_2[VAR_4].xpos = VAR_5;
 VAR_2[VAR_4].ypos = VAR_6;
 VAR_2[VAR_4].width = VAR_7;
 VAR_2[VAR_4].height = VAR_8;
 VAR_2[VAR_4].dirty = VAR_3;
}
