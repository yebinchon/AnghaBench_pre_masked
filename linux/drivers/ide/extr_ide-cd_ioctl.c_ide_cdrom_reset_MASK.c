
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int rq_flags; } ;
struct cdrom_info {int disk; } ;
struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_5__ {int atapi_flags; int queue; struct cdrom_info* driver_data; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_4 (struct request*) ;
 TYPE_2__* FUNC_5 (struct request*) ;

int FUNC_6(struct cdrom_device_info *VAR_5)
{
 ide_drive_t *VAR_6 = VAR_5->handle;
 struct cdrom_info *VAR_7 = VAR_6->driver_data;
 struct request *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6->queue, VAR_3, 0);
 FUNC_4(VAR_8)->type = VAR_0;
 VAR_8->rq_flags = VAR_4;
 FUNC_0(VAR_6->queue, VAR_7->disk, VAR_8, 0);
 VAR_9 = FUNC_5(VAR_8)->result ? -VAR_1 : 0;
 FUNC_2(VAR_8);




 if (VAR_6->atapi_flags & VAR_2)
  (void)FUNC_3(VAR_6, 1);

 return VAR_9;
}
