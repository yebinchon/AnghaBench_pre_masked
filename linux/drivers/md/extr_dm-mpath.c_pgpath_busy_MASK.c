
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct pgpath {TYPE_2__ path; } ;
struct TYPE_3__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static int FUNC_2(struct pgpath *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0->path.dev->bdev);

 return FUNC_1(VAR_1);
}
