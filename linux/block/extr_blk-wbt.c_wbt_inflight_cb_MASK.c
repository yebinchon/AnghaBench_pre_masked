
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbt_wait_data {int rw; int rwb; } ;
struct rq_wait {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rq_wait*,int ) ;

__attribute__((used)) static bool FUNC_2(struct rq_wait *VAR_0, void *VAR_1)
{
 struct wbt_wait_data *VAR_2 = VAR_1;
 return FUNC_1(VAR_0, FUNC_0(VAR_2->rwb, VAR_2->rw));
}
