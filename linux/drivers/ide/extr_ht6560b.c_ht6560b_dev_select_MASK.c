
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int device_addr; int status_addr; } ;
struct TYPE_8__ {TYPE_1__ io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_9__ {scalar_t__ media; int dev_flags; int select; int name; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_5)
{
 ide_hwif_t *VAR_6 = VAR_5->hwif;
 unsigned long VAR_7;
 static u8 VAR_8 = 0;
 static u8 VAR_9 = 0;
 u8 VAR_10, VAR_11;

 FUNC_4(VAR_7);

 VAR_10 = FUNC_0(VAR_5);
 VAR_11 = FUNC_1(VAR_5);





 if (VAR_5->media != VAR_4 ||
     (VAR_5->dev_flags & VAR_3) == 0)
  VAR_10 |= VAR_2;

 if (VAR_10 != VAR_8 || VAR_11 != VAR_9) {
  VAR_8 = VAR_10;
  VAR_9 = VAR_11;
  (void)FUNC_2(VAR_1);
  (void)FUNC_2(VAR_1);
  (void)FUNC_2(VAR_1);
  (void)FUNC_2(VAR_1);
  FUNC_5(VAR_10, VAR_1);



  FUNC_5(VAR_11, VAR_6->io_ports.device_addr);
  (void)FUNC_2(VAR_6->io_ports.status_addr);




 }
 FUNC_3(VAR_7);

 FUNC_5(VAR_5->select | VAR_0, VAR_6->io_ports.device_addr);
}
