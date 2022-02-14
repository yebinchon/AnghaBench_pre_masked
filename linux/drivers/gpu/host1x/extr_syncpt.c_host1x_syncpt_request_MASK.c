
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_syncpt {int dummy; } ;
struct host1x_client {TYPE_1__* parent; } ;
struct host1x {int dummy; } ;
struct TYPE_2__ {int parent; } ;


 struct host1x* FUNC_0 (int ) ;
 struct host1x_syncpt* FUNC_1 (struct host1x*,struct host1x_client*,unsigned long) ;

struct host1x_syncpt *FUNC_2(struct host1x_client *VAR_0,
         unsigned long VAR_1)
{
 struct host1x *VAR_2 = FUNC_0(VAR_0->parent->parent);

 return FUNC_1(VAR_2, VAR_0, VAR_1);
}
