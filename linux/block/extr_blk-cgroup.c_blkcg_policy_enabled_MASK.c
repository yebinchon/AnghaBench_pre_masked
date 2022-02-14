
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int blkcg_pols; } ;
struct blkcg_policy {int plid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct request_queue *VAR_0,
     const struct blkcg_policy *VAR_1)
{
 return VAR_1 && FUNC_0(VAR_1->plid, VAR_0->blkcg_pols);
}
