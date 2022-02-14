
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sense_rq_armed; int * sense_rq; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_0)
{
 if (!VAR_0->sense_rq)
  return;

 FUNC_0(VAR_0->sense_rq);
 VAR_0->sense_rq = ((void*)0);
 VAR_0->sense_rq_armed = 0;
}
