
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct pgpath {scalar_t__ is_active; TYPE_2__ path; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct pgpath*,int ) ;
 int FUNC_3 (struct request_queue*,int (*) (struct pgpath*,int ),struct pgpath*) ;

__attribute__((used)) static void FUNC_4(struct pgpath *VAR_1)
{
 struct request_queue *VAR_2 = FUNC_0(VAR_1->path.dev->bdev);

 if (VAR_1->is_active && !FUNC_1(VAR_2))
  FUNC_3(VAR_2, FUNC_2, VAR_1);
 else
  FUNC_2(VAR_1, VAR_0);
}
