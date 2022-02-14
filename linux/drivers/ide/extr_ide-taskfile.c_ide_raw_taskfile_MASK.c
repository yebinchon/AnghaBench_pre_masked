
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct request {int dummy; } ;
struct ide_cmd {int tf_flags; struct request* rq; } ;
struct TYPE_5__ {int queue; } ;
typedef TYPE_1__ ide_drive_t ;
struct TYPE_7__ {struct ide_cmd* special; int type; } ;
struct TYPE_6__ {scalar_t__ result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,struct request*,int ) ;
 struct request* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,struct request*,int *,int,int ) ;
 TYPE_3__* FUNC_4 (struct request*) ;
 TYPE_2__* FUNC_5 (struct request*) ;

int FUNC_6(ide_drive_t *VAR_7, struct ide_cmd *VAR_8, u8 *VAR_9,
       u16 VAR_10)
{
 struct request *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_7->queue,
  (VAR_8->tf_flags & VAR_3) ?
   VAR_5 : VAR_4, 0);
 FUNC_4(VAR_11)->type = VAR_0;







 if (VAR_10) {
  VAR_12 = FUNC_3(VAR_7->queue, VAR_11, VAR_9,
     VAR_10 * VAR_6, VAR_2);
  if (VAR_12)
   goto put_req;
 }

 FUNC_4(VAR_11)->special = VAR_8;
 VAR_8->rq = VAR_11;

 FUNC_0(VAR_7->queue, ((void*)0), VAR_11, 0);
 VAR_12 = FUNC_5(VAR_11)->result ? -VAR_1 : 0;
put_req:
 FUNC_2(VAR_11);
 return VAR_12;
}
