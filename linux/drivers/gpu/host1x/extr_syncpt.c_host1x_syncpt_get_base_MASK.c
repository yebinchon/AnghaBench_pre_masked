
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_syncpt_base {int dummy; } ;
struct host1x_syncpt {struct host1x_syncpt_base* base; } ;



struct host1x_syncpt_base *FUNC_0(struct host1x_syncpt *VAR_0)
{
 return VAR_0 ? VAR_0->base : ((void*)0);
}
