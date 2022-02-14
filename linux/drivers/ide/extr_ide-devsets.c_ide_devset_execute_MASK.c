
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int dummy; } ;
struct ide_devset {int flags; int (* set ) (TYPE_1__*,int) ;} ;
struct TYPE_6__ {struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_8__ {int (* special ) (TYPE_1__*,int) ;int type; } ;
struct TYPE_7__ {int cmd_len; int result; int * cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct request_queue*,int *,struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;
 int FUNC_2 (struct request*) ;
 TYPE_4__* FUNC_3 (struct request*) ;
 TYPE_3__* FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_1__*,int) ;

int FUNC_6(ide_drive_t *VAR_4, const struct ide_devset *VAR_5,
         int VAR_6)
{
 struct request_queue *VAR_7 = VAR_4->queue;
 struct request *VAR_8;
 int VAR_9 = 0;

 if (!(VAR_5->flags & VAR_1))
  return VAR_5->set(VAR_4, VAR_6);

 VAR_8 = FUNC_1(VAR_7, VAR_3, 0);
 FUNC_3(VAR_8)->type = VAR_0;
 FUNC_4(VAR_8)->cmd_len = 5;
 FUNC_4(VAR_8)->cmd[0] = VAR_2;
 *(int *)&FUNC_4(VAR_8)->cmd[1] = VAR_6;
 FUNC_3(VAR_8)->special = VAR_5->set;

 FUNC_0(VAR_7, ((void*)0), VAR_8, 0);
 VAR_9 = FUNC_4(VAR_8)->result;
 FUNC_2(VAR_8);

 return VAR_9;
}
