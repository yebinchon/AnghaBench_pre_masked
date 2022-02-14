
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_sha_dev {int flags; int queue_task; scalar_t__ force_complete; scalar_t__ is_async; int iclk; struct ahash_request* req; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int) ;} ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline int FUNC_3(struct atmel_sha_dev *VAR_6, int VAR_7)
{
 struct ahash_request *VAR_8 = VAR_6->req;

 VAR_6->flags &= ~(VAR_0 | VAR_4 | VAR_1 |
         VAR_2 | VAR_5 |
         VAR_3);

 FUNC_0(VAR_6->iclk);

 if ((VAR_6->is_async || VAR_6->force_complete) && VAR_8->base.complete)
  VAR_8->base.complete(&VAR_8->base, VAR_7);


 FUNC_2(&VAR_6->queue_task);

 return VAR_7;
}
