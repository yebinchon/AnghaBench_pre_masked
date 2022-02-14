
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {int dummy; } ;
struct rate_estimator {int maxcps; int cps; int avcps; int interval; int ewma_log; int timer; struct vc_map* vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct rate_estimator* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static struct rate_estimator *
FUNC_3(struct vc_map *VAR_4, int VAR_5)
{
 struct rate_estimator *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct rate_estimator), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 VAR_6->maxcps = VAR_5 < 0 ? -VAR_5 : VAR_5;
 VAR_6->cps = VAR_6->maxcps;
 VAR_6->avcps = VAR_6->cps << 5;
 VAR_6->vc = VAR_4;

 VAR_6->interval = 2;
 VAR_6->ewma_log = 2;
 FUNC_2(&VAR_6->timer, VAR_2, 0);
 FUNC_1(&VAR_6->timer, VAR_3 + ((VAR_1 / 4) << VAR_6->interval));

 return VAR_6;
}
