
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct host1x_syncpt {TYPE_3__* base; } ;
struct host1x_job {int syncpt_id; TYPE_2__* channel; } ;
struct host1x {struct host1x_syncpt* syncpt; } ;
struct TYPE_6__ {unsigned int id; } ;
struct TYPE_5__ {int cdma; TYPE_1__* dev; } ;
struct TYPE_4__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 struct host1x* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct host1x_syncpt*) ;

__attribute__((used)) static inline void FUNC_6(struct host1x_job *VAR_2)
{
 struct host1x *VAR_3 = FUNC_2(VAR_2->channel->dev->parent);
 struct host1x_syncpt *VAR_4 = VAR_3->syncpt + VAR_2->syncpt_id;
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_5(VAR_4);
 VAR_5 = VAR_4->base->id;

 FUNC_3(&VAR_2->channel->cdma,
    FUNC_4(VAR_0,
    VAR_1, 1),
    FUNC_0(VAR_5) |
    FUNC_1(VAR_6));
}
