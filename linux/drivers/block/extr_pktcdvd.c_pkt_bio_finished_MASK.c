
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int attention; } ;
struct TYPE_3__ {int pending_bios; } ;
struct pktcdvd_device {int wqueue; TYPE_2__ iosched; TYPE_1__ cdrw; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,struct pktcdvd_device*,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct pktcdvd_device *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->cdrw.pending_bios) <= 0);
 if (FUNC_1(&VAR_0->cdrw.pending_bios)) {
  FUNC_4(2, VAR_0, "queue empty\n");
  FUNC_3(&VAR_0->iosched.attention, 1);
  FUNC_5(&VAR_0->wqueue);
 }
}
