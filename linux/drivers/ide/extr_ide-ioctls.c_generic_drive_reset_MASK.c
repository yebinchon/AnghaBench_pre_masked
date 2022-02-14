
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int cmd_len; int result; int * cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,struct request*,int) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 TYPE_3__* FUNC_3 (struct request*) ;
 TYPE_2__* FUNC_4 (struct request*) ;

__attribute__((used)) static int FUNC_5(ide_drive_t *VAR_3)
{
 struct request *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_3->queue, VAR_2, 0);
 FUNC_3(VAR_4)->type = VAR_0;
 FUNC_4(VAR_4)->cmd_len = 1;
 FUNC_4(VAR_4)->cmd[0] = VAR_1;
 FUNC_0(VAR_3->queue, ((void*)0), VAR_4, 1);
 VAR_5 = FUNC_4(VAR_4)->result;
 FUNC_2(VAR_4);
 return VAR_5;
}
