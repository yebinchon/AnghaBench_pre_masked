
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rvt_rq {TYPE_2__* kwq; TYPE_1__* wq; } ;
struct TYPE_4__ {int head; } ;
struct TYPE_3__ {int head; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct rvt_rq *VAR_0, void *VAR_1)
{
 u32 VAR_2;

 if (VAR_1)
  VAR_2 = FUNC_0(VAR_0->wq->head);
 else
  VAR_2 = VAR_0->kwq->head;

 return VAR_2;
}
