
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panfrost_perfcnt {TYPE_2__* bo; int * buf; struct panfrost_file_priv* user; } ;
struct panfrost_file_priv {int dummy; } ;
struct panfrost_device {int dev; struct panfrost_perfcnt* perfcnt; } ;
struct TYPE_3__ {int base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct panfrost_device*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct panfrost_device *VAR_7,
        struct panfrost_file_priv *VAR_8)
{
 struct panfrost_perfcnt *VAR_9 = VAR_7->perfcnt;

 if (VAR_8 != VAR_9->user)
  return -VAR_0;

 FUNC_3(VAR_7, VAR_3, 0x0);
 FUNC_3(VAR_7, VAR_5, 0x0);
 FUNC_3(VAR_7, VAR_4, 0x0);
 FUNC_3(VAR_7, VAR_6, 0);
 FUNC_3(VAR_7, VAR_1,
    FUNC_0(VAR_2));

 VAR_9->user = ((void*)0);
 FUNC_2(&VAR_9->bo->base.base, VAR_9->buf);
 VAR_9->buf = ((void*)0);
 FUNC_1(&VAR_9->bo->base.base);
 VAR_9->bo = ((void*)0);
 FUNC_4(VAR_7->dev);
 FUNC_5(VAR_7->dev);

 return 0;
}
