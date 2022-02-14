
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x_channel_list {struct host1x_channel* channels; int allocated_channels; } ;
struct host1x_channel {unsigned int id; } ;
struct host1x {int dev; TYPE_1__* info; struct host1x_channel_list channel_list; } ;
struct TYPE_2__ {unsigned int nb_channels; } ;


 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct host1x_channel *FUNC_3(struct host1x *VAR_0)
{
 struct host1x_channel_list *VAR_1 = &VAR_0->channel_list;
 unsigned int VAR_2 = VAR_0->info->nb_channels;
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_1->allocated_channels, VAR_2);
 if (VAR_3 >= VAR_2) {
  FUNC_0(VAR_0->dev, "failed to find free channel\n");
  return ((void*)0);
 }

 VAR_1->channels[VAR_3].id = VAR_3;

 FUNC_2(VAR_3, VAR_1->allocated_channels);

 return &VAR_1->channels[VAR_3];
}
