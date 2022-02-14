
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct ide_disk_obj {int dummy; } ;
struct ide_atapi_pc {int flags; struct request* rq; int c; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct ide_atapi_pc*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (struct request*) ;
 TYPE_1__* FUNC_4 (struct request*) ;

__attribute__((used)) static void FUNC_5(struct ide_disk_obj *VAR_3,
  struct ide_atapi_pc *VAR_4, struct request *VAR_5)
{
 FUNC_1(VAR_4);
 FUNC_2(VAR_4->c, FUNC_4(VAR_5)->cmd, sizeof(VAR_4->c));
 VAR_4->rq = VAR_5;
 if (FUNC_0(VAR_5)) {
  VAR_4->flags |= VAR_0;
  if (FUNC_3(VAR_5) == VAR_2)
   VAR_4->flags |= VAR_1;
 }
}
