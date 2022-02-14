
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct request {scalar_t__ rq_disk; } ;
struct TYPE_5__ {scalar_t__ media; int * failed_pc; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_6__ {int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_4 (struct request*) ;

void FUNC_5(ide_drive_t *VAR_5, struct request *VAR_6)
{
 u8 VAR_7 = FUNC_0(VAR_6) && VAR_6->rq_disk;
 u8 VAR_8 = VAR_5->media;

 VAR_5->failed_pc = ((void*)0);

 if ((VAR_8 == VAR_3 || VAR_8 == VAR_4) && VAR_7) {
  FUNC_4(VAR_6)->result = 0;
 } else {
  if (VAR_8 == VAR_4)
   FUNC_4(VAR_6)->result = VAR_2;
  else if (FUNC_2(VAR_6) && FUNC_4(VAR_6)->result == 0)
   FUNC_4(VAR_6)->result = -VAR_1;
 }

 FUNC_3(VAR_5, VAR_0, FUNC_1(VAR_6));
}
