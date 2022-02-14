
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
typedef int ide_startstop_t ;
typedef int ide_drive_t ;
struct TYPE_4__ {int (* special ) (int *,int) ;} ;
struct TYPE_3__ {int result; int * cmd; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* FUNC_2 (struct request*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_3 (struct request*) ;

ide_startstop_t FUNC_4(ide_drive_t *VAR_1, struct request *VAR_2)
{
 int VAR_3, (*VAR_4)(ide_drive_t *, int) = FUNC_2(VAR_2)->special;

 VAR_3 = VAR_4(VAR_1, *(int *)&FUNC_3(VAR_2)->cmd[1]);
 if (VAR_3)
  FUNC_3(VAR_2)->result = VAR_3;
 FUNC_1(VAR_1, 0, FUNC_0(VAR_2));
 return VAR_0;
}
