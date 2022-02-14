
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_atapi_pc {int c; } ;
struct gendisk {int dummy; } ;
struct TYPE_5__ {scalar_t__ media; int queue; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_7__ {struct ide_atapi_pc* special; int type; } ;
struct TYPE_6__ {scalar_t__ result; int * cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct gendisk*,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,void*,unsigned int,int ) ;
 TYPE_3__* FUNC_4 (struct request*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,int ,int) ;
 TYPE_2__* FUNC_6 (struct request*) ;

int FUNC_7(ide_drive_t *VAR_6, struct gendisk *VAR_7,
        struct ide_atapi_pc *VAR_8, void *VAR_9, unsigned int VAR_10)
{
 struct request *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_6->queue, VAR_4, 0);
 FUNC_4(VAR_11)->type = VAR_0;
 FUNC_4(VAR_11)->special = VAR_8;

 if (VAR_9 && VAR_10) {
  VAR_12 = FUNC_3(VAR_6->queue, VAR_11, VAR_9, VAR_10,
     VAR_2);
  if (VAR_12)
   goto put_req;
 }

 FUNC_5(FUNC_6(VAR_11)->cmd, VAR_8->c, 12);
 if (VAR_6->media == VAR_5)
  FUNC_6(VAR_11)->cmd[13] = VAR_3;
 FUNC_0(VAR_6->queue, VAR_7, VAR_11, 0);
 VAR_12 = FUNC_6(VAR_11)->result ? -VAR_1 : 0;
put_req:
 FUNC_2(VAR_11);
 return VAR_12;
}
