
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nullb_cmd {int timer; TYPE_2__* nq; } ;
typedef int ktime_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int completion_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct nullb_cmd *VAR_1)
{
 ktime_t VAR_2 = VAR_1->nq->dev->completion_nsec;

 FUNC_0(&VAR_1->timer, VAR_2, VAR_0);
}
