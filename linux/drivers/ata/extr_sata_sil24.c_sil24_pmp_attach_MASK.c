
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct ata_port {int flags; TYPE_2__ link; } ;
struct TYPE_3__ {int * gscr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_port*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ata_port*,int) ;
 int FUNC_4 (struct ata_port*) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_1)
{
 u32 *VAR_2 = VAR_1->link.device->gscr;

 FUNC_3(VAR_1, 1);
 FUNC_4(VAR_1);

 if (FUNC_2(VAR_2) == 0x11ab &&
     FUNC_1(VAR_2) == 0x4140) {
  FUNC_0(VAR_1,
   "disabling NCQ support due to sil24-mv4140 quirk\n");
  VAR_1->flags &= ~VAR_0;
 }
}
