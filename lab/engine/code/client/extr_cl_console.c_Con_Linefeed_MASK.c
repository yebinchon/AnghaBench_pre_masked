
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {scalar_t__ realtime; } ;
struct TYPE_3__ {size_t current; size_t display; int linewidth; int* text; int totallines; scalar_t__ x; scalar_t__* times; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_1 (qboolean VAR_4)
{
 int VAR_5;


 if (VAR_3.current >= 0)
 {
    if (VAR_4)
    VAR_3.times[VAR_3.current % VAR_1] = 0;
    else
    VAR_3.times[VAR_3.current % VAR_1] = VAR_2.realtime;
 }

 VAR_3.x = 0;
 if (VAR_3.display == VAR_3.current)
  VAR_3.display++;
 VAR_3.current++;
 for(VAR_5=0; VAR_5<VAR_3.linewidth; VAR_5++)
  VAR_3.text[(VAR_3.current%VAR_3.totallines)*VAR_3.linewidth+VAR_5] = (FUNC_0(VAR_0)<<8) | ' ';
}
