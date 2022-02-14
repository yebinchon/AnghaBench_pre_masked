
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int timeout; int min_timeout; int max_hw_heartbeat_ms; int * parent; int * ops; int * info; int status; } ;
struct fts_data {TYPE_1__ wdd; TYPE_3__* client; scalar_t__ resolution; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct fts_data*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct fts_data*) ;

__attribute__((used)) static int FUNC_6(struct fts_data *VAR_8)
{
 int VAR_9, VAR_10;

 FUNC_5(&VAR_8->wdd, VAR_8);

 VAR_9 = FUNC_1(VAR_8->client, VAR_1);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_9 == 0) {
  VAR_10 = FUNC_2(VAR_8, VAR_7);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_8->wdd.timeout = 60;
 } else {
  VAR_10 = FUNC_1(VAR_8->client, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_8->resolution = VAR_10 & FUNC_0(1) ? VAR_7 : VAR_6;
  VAR_8->wdd.timeout = VAR_9 * (u8)VAR_8->resolution;
  FUNC_3(VAR_3, &VAR_8->wdd.status);
 }


 VAR_8->wdd.info = &VAR_4;
 VAR_8->wdd.ops = &VAR_5;
 VAR_8->wdd.parent = &VAR_8->client->dev;
 VAR_8->wdd.min_timeout = 1;


 VAR_8->wdd.max_hw_heartbeat_ms = 0xFF * 60 * VAR_2;

 return FUNC_4(&VAR_8->wdd);
}
