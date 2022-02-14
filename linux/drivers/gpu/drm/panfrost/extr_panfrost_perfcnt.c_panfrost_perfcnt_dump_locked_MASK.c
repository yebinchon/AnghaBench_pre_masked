
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct panfrost_device {TYPE_1__* perfcnt; } ;
struct TYPE_5__ {int start; } ;
struct TYPE_6__ {TYPE_2__ node; } ;
struct TYPE_4__ {int dump_comp; TYPE_3__* bo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct panfrost_device*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct panfrost_device *VAR_9)
{
 u64 VAR_10;
 int VAR_11;

 FUNC_2(&VAR_9->perfcnt->dump_comp);
 VAR_10 = VAR_9->perfcnt->bo->node.start << VAR_8;
 FUNC_0(VAR_9, VAR_7, VAR_10);
 FUNC_0(VAR_9, VAR_6, VAR_10 >> 32);
 FUNC_0(VAR_9, VAR_3,
    VAR_4 |
    VAR_5);
 FUNC_0(VAR_9, VAR_1, VAR_2);
 VAR_11 = FUNC_3(&VAR_9->perfcnt->dump_comp,
       FUNC_1(1000));
 if (!VAR_11)
  VAR_11 = -VAR_0;
 else if (VAR_11 > 0)
  VAR_11 = 0;

 return VAR_11;
}
