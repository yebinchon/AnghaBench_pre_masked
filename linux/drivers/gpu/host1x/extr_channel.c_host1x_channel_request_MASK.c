
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_channel_list {int allocated_channels; } ;
struct host1x_channel {int id; int cdma; struct device* dev; int submitlock; int refcount; } ;
struct host1x {struct host1x_channel_list channel_list; } ;
struct device {int parent; } ;


 struct host1x_channel* FUNC_0 (struct host1x*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct host1x* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct host1x*,struct host1x_channel*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct host1x_channel *FUNC_8(struct device *VAR_0)
{
 struct host1x *VAR_1 = FUNC_3(VAR_0->parent);
 struct host1x_channel_list *VAR_2 = &VAR_1->channel_list;
 struct host1x_channel *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_6(&VAR_3->refcount);
 FUNC_7(&VAR_3->submitlock);
 VAR_3->dev = VAR_0;

 VAR_4 = FUNC_5(VAR_1, VAR_3, VAR_3->id);
 if (VAR_4 < 0)
  goto fail;

 VAR_4 = FUNC_4(&VAR_3->cdma);
 if (VAR_4 < 0)
  goto fail;

 return VAR_3;

fail:
 FUNC_1(VAR_3->id, VAR_2->allocated_channels);

 FUNC_2(VAR_0, "failed to initialize channel\n");

 return ((void*)0);
}
