
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vcnl4000_data {int vcnl4000_lock; TYPE_1__* client; } ;
typedef int buf ;
typedef int __be16 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,int,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct vcnl4000_data *VAR_2, u8 VAR_3,
    u8 VAR_4, u8 VAR_5, int *VAR_6)
{
 int VAR_7 = 20;
 __be16 VAR_8;
 int VAR_9;

 FUNC_6(&VAR_2->vcnl4000_lock);

 VAR_9 = FUNC_4(VAR_2->client, VAR_1,
     VAR_3);
 if (VAR_9 < 0)
  goto fail;


 while (VAR_7--) {
  VAR_9 = FUNC_2(VAR_2->client, VAR_1);
  if (VAR_9 < 0)
   goto fail;
  if (VAR_9 & VAR_4)
   break;
  FUNC_5(20);
 }

 if (VAR_7 < 0) {
  FUNC_1(&VAR_2->client->dev,
   "vcnl4000_measure() failed, data not ready\n");
  VAR_9 = -VAR_0;
  goto fail;
 }

 VAR_9 = FUNC_3(VAR_2->client,
  VAR_5, sizeof(VAR_8), (u8 *) &VAR_8);
 if (VAR_9 < 0)
  goto fail;

 FUNC_7(&VAR_2->vcnl4000_lock);
 *VAR_6 = FUNC_0(VAR_8);

 return 0;

fail:
 FUNC_7(&VAR_2->vcnl4000_lock);
 return VAR_9;
}
