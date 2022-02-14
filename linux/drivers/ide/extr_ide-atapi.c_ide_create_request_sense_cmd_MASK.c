
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ide_atapi_pc {int* c; int req_xfer; } ;
struct TYPE_3__ {scalar_t__ media; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ide_atapi_pc*) ;

void FUNC_1(ide_drive_t *VAR_2, struct ide_atapi_pc *VAR_3)
{
 FUNC_0(VAR_3);
 VAR_3->c[0] = VAR_0;
 if (VAR_2->media == VAR_1) {
  VAR_3->c[4] = 255;
  VAR_3->req_xfer = 18;
 } else {
  VAR_3->c[4] = 20;
  VAR_3->req_xfer = 20;
 }
}
