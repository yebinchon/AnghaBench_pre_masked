
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_waitlist {int thresh; int count; struct host1x_channel* data; } ;
struct host1x_channel {int dev; int cdma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct host1x_waitlist *VAR_0)
{
 struct host1x_channel *VAR_1 = VAR_0->data;

 FUNC_1(&VAR_1->cdma);


 FUNC_2(FUNC_0(VAR_1->dev),
          VAR_0->count, VAR_0->thresh);

}
