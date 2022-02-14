
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {TYPE_2__* rdev; } ;
struct r5conf {TYPE_1__* mddev; int log; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r5l_log* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;

bool FUNC_4(struct r5conf *VAR_2)
{
 struct r5l_log *VAR_3;
 bool VAR_4;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_2->log);

 if (!VAR_3)
  VAR_4 = FUNC_3(VAR_1, &VAR_2->mddev->flags);
 else
  VAR_4 = FUNC_3(VAR_0, &VAR_3->rdev->flags);
 FUNC_2();
 return VAR_4;
}
