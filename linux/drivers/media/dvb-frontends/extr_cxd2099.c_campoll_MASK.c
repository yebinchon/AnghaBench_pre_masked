
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cxd {int dr; int slot_stat; int ready; TYPE_1__* client; scalar_t__ write_busy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cxd*,int,int*) ;
 int FUNC_2 (struct cxd*,int,int) ;
 int FUNC_3 (struct cxd*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct cxd *VAR_2)
{
 u8 VAR_3;

 FUNC_1(VAR_2, 0x04, &VAR_3);
 if (!VAR_3)
  return 0;
 FUNC_2(VAR_2, 0x05, VAR_3);

 if (VAR_3 & 0x40)
  VAR_2->dr = 1;
 if (VAR_3 & 0x20)
  VAR_2->write_busy = 0;

 if (VAR_3 & 2) {
  u8 VAR_4;

  FUNC_1(VAR_2, 0x01, &VAR_4);
  if (!(2 & VAR_4)) {
   if (!VAR_2->slot_stat) {
    VAR_2->slot_stat |=
           VAR_0;
    FUNC_3(VAR_2, 0x03, 0x08, 0x08);
   }

  } else {
   if (VAR_2->slot_stat) {
    VAR_2->slot_stat = 0;
    FUNC_3(VAR_2, 0x03, 0x00, 0x08);
    FUNC_0(&VAR_2->client->dev, "NO CAM\n");
    VAR_2->ready = 0;
   }
  }
  if ((VAR_3 & 8) &&
      VAR_2->slot_stat == VAR_0) {
   VAR_2->ready = 1;
   VAR_2->slot_stat |= VAR_1;
  }
 }
 return 0;
}
