
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ synch_lineno; scalar_t__ lineno; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_2(int VAR_4)
{
 FUNC_1(VAR_4, VAR_0);
 if (VAR_3 && VAR_4 == '\n') {
  VAR_2[VAR_1].synch_lineno++;
  if (VAR_2[VAR_1].synch_lineno != VAR_2[VAR_1].lineno)
   FUNC_0();
 }
}
