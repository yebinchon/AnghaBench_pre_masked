
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int buttons; int z; int x; int y; } ;
struct umouse_softc {int newdata; int ev_mtx; TYPE_2__* hci; int mtx; TYPE_1__ um_report; } ;
struct bhyvegc_image {int width; int height; } ;
struct TYPE_4__ {int (* hci_intr ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bhyvegc_image* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(uint8_t VAR_4, int VAR_5, int VAR_6, void *VAR_7)
{
 struct umouse_softc *VAR_8;
 struct bhyvegc_image *VAR_9;

 VAR_9 = FUNC_0();
 if (VAR_9 == ((void*)0)) {

  return;
 }

 VAR_8 = VAR_7;

 FUNC_1(&VAR_8->mtx);

 VAR_8->um_report.buttons = 0;
 VAR_8->um_report.z = 0;

 if (VAR_4 & 0x01)
  VAR_8->um_report.buttons |= 0x01;
 if (VAR_4 & 0x02)
  VAR_8->um_report.buttons |= 0x04;
 if (VAR_4 & 0x04)
  VAR_8->um_report.buttons |= 0x02;
 if (VAR_4 & 0x8)
  VAR_8->um_report.z = 1;
 if (VAR_4 & 0x10)
  VAR_8->um_report.z = -1;


 VAR_8->um_report.x = VAR_0 * VAR_5 / VAR_9->width;
 VAR_8->um_report.y = VAR_1 * VAR_6 / VAR_9->height;
 VAR_8->newdata = 1;
 FUNC_2(&VAR_8->mtx);

 FUNC_1(&VAR_8->ev_mtx);
 VAR_8->hci->hci_intr(VAR_8->hci, VAR_2 | VAR_3);
 FUNC_2(&VAR_8->ev_mtx);
}
