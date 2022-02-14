
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request {int dummy; } ;
struct cdrom_info {scalar_t__ write_timeout; } ;
struct TYPE_4__ {int queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_5__ {int result; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct request*,int) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(ide_drive_t *VAR_2, struct request *VAR_3)
{

 struct cdrom_info *VAR_4 = VAR_2->driver_data;

 if (!FUNC_2(VAR_3)->result)
  VAR_4->write_timeout = VAR_1 + VAR_0;

 FUNC_2(VAR_3)->result = 1;

 if (FUNC_3(VAR_1, VAR_4->write_timeout))
  return 0;
 else {



  FUNC_1(VAR_3, 0);
  FUNC_0(VAR_2->queue, 1);
  return 1;
 }
}
