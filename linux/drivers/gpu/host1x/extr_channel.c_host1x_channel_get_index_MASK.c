
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_channel {int refcount; } ;
struct TYPE_2__ {struct host1x_channel* channels; } ;
struct host1x {TYPE_1__ channel_list; } ;


 int FUNC_0 (int *) ;

struct host1x_channel *FUNC_1(struct host1x *VAR_0,
      unsigned int VAR_1)
{
 struct host1x_channel *VAR_2 = &VAR_0->channel_list.channels[VAR_1];

 if (!FUNC_0(&VAR_2->refcount))
  return ((void*)0);

 return VAR_2;
}
