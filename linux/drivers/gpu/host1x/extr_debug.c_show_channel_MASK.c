
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct output {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct host1x_channel {TYPE_2__ cdma; TYPE_1__* dev; } ;
struct host1x {int dummy; } ;
struct TYPE_3__ {int parent; } ;


 struct host1x* FUNC_0 (int ) ;
 int FUNC_1 (struct host1x*,struct host1x_channel*,struct output*) ;
 int FUNC_2 (struct host1x*,struct host1x_channel*,struct output*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct host1x_channel *VAR_0, void *VAR_1, bool VAR_2)
{
 struct host1x *VAR_3 = FUNC_0(VAR_0->dev->parent);
 struct output *VAR_4 = VAR_1;

 FUNC_3(&VAR_0->cdma.lock);

 if (VAR_2)
  FUNC_2(VAR_3, VAR_0, VAR_4);

 FUNC_1(VAR_3, VAR_0, VAR_4);

 FUNC_4(&VAR_0->cdma.lock);

 return 0;
}
