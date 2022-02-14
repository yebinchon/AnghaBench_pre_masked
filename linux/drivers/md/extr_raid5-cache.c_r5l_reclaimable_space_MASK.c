
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {int last_checkpoint; TYPE_2__* rdev; } ;
struct r5conf {int dummy; } ;
typedef int sector_t ;
struct TYPE_4__ {TYPE_1__* mddev; } ;
struct TYPE_3__ {struct r5conf* private; } ;


 int FUNC_0 (struct r5conf*) ;
 int FUNC_1 (struct r5l_log*,int ,int ) ;

__attribute__((used)) static sector_t FUNC_2(struct r5l_log *VAR_0)
{
 struct r5conf *VAR_1 = VAR_0->rdev->mddev->private;

 return FUNC_1(VAR_0, VAR_0->last_checkpoint,
     FUNC_0(VAR_1));
}
