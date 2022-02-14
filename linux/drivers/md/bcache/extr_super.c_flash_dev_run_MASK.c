
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uuid_entry {int sectors; } ;
struct cache_set {int uuids; } ;
struct bcache_device {int kobj; int disk; int cl; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcache_device*,struct cache_set*,struct uuid_entry*) ;
 scalar_t__ FUNC_2 (struct bcache_device*,int ,int ) ;
 int FUNC_3 (struct bcache_device*,struct cache_set*,char*) ;
 int VAR_2 ;
 int FUNC_4 (struct bcache_device*) ;
 int FUNC_5 (struct bcache_device*) ;
 int FUNC_6 (struct cache_set*) ;
 int FUNC_7 (int *,int *) ;
 TYPE_1__* FUNC_8 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int *,int *,char*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 struct bcache_device* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_14(struct cache_set *VAR_5, struct uuid_entry *VAR_6)
{
 struct bcache_device *VAR_7 = FUNC_12(sizeof(struct bcache_device),
       VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_7(&VAR_7->cl, ((void*)0));
 FUNC_13(&VAR_7->cl, VAR_3, VAR_4);

 FUNC_10(&VAR_7->kobj, &VAR_2);

 if (FUNC_2(VAR_7, FUNC_6(VAR_5), VAR_6->sectors))
  goto err;

 FUNC_1(VAR_7, VAR_5, VAR_6 - VAR_5->uuids);
 FUNC_5(VAR_7);
 FUNC_4(VAR_7);
 FUNC_0(VAR_7->disk);

 if (FUNC_9(&VAR_7->kobj, &FUNC_8(VAR_7->disk)->kobj, "bcache"))
  goto err;

 FUNC_3(VAR_7, VAR_5, "volume");

 return 0;
err:
 FUNC_11(&VAR_7->kobj);
 return -VAR_0;
}
