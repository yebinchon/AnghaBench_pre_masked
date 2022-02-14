
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct request {int cmd_flags; } ;
struct TYPE_8__ {int tf; } ;
struct TYPE_9__ {TYPE_2__ out; } ;
struct TYPE_7__ {int command; } ;
struct ide_cmd {struct request* rq; int protocol; int tf_flags; TYPE_3__ valid; TYPE_1__ tf; } ;
struct TYPE_10__ {unsigned long capacity64; int id; } ;
typedef TYPE_4__ ide_drive_t ;
struct TYPE_11__ {struct ide_cmd* special; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (struct request*) ;
 struct ide_cmd* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ide_cmd*,int ,int) ;
 scalar_t__ FUNC_5 (struct request*) ;

__attribute__((used)) static bool FUNC_6(ide_drive_t *VAR_11, struct request *VAR_12)
{
 struct ide_cmd *VAR_13;

 if (FUNC_5(VAR_12) != VAR_9)
  return 1;

 if (FUNC_2(VAR_12)->special) {
  VAR_13 = FUNC_2(VAR_12)->special;
  FUNC_4(VAR_13, 0, sizeof(*VAR_13));
 } else {
  VAR_13 = FUNC_3(sizeof(*VAR_13), VAR_4);
 }


 FUNC_0(VAR_13 == ((void*)0));

 if (FUNC_1(VAR_11->id) &&
     (VAR_11->capacity64 >= (1UL << 28)))
  VAR_13->tf.command = VAR_1;
 else
  VAR_13->tf.command = VAR_0;
 VAR_13->valid.out.tf = VAR_7 | VAR_6;
 VAR_13->tf_flags = VAR_5;
 VAR_13->protocol = VAR_3;
 VAR_12->cmd_flags &= ~VAR_10;
 VAR_12->cmd_flags |= VAR_8;
 FUNC_2(VAR_12)->type = VAR_2;
 FUNC_2(VAR_12)->special = VAR_13;
 VAR_13->rq = VAR_12;

 return 1;
}
