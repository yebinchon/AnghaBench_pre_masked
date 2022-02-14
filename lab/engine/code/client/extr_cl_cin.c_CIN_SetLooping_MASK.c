
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {scalar_t__ status; int looping; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(int VAR_3, qboolean VAR_4) {
 if (VAR_3 < 0 || VAR_3>= VAR_1 || VAR_2[VAR_3].status == VAR_0) return;
 VAR_2[VAR_3].looping = VAR_4;
}
