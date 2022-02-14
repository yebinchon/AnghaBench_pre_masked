
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {struct blk_plug* plug; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct request_queue*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline struct blk_plug *FUNC_3(struct request_queue *VAR_1,
        struct bio *VAR_2)
{




 if (!FUNC_1(VAR_1) || !FUNC_2(FUNC_0(VAR_2)))
  return VAR_0->plug;


 return ((void*)0);
}
