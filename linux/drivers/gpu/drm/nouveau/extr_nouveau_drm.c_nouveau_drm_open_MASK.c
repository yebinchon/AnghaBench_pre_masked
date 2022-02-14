
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
struct nouveau_drm {TYPE_2__ client; int clients; } ;
struct TYPE_3__ {int super; } ;
struct nouveau_cli {int head; TYPE_1__ base; } ;
struct drm_file {struct nouveau_cli* driver_priv; int pid; } ;
struct drm_device {int dev; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct nouveau_cli*) ;
 struct nouveau_cli* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nouveau_cli*) ;
 int FUNC_7 (struct nouveau_drm*,char*,struct nouveau_cli*) ;
 struct nouveau_drm* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_14(struct drm_device *VAR_5, struct drm_file *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_8(VAR_5);
 struct nouveau_cli *VAR_8;
 char VAR_9[32], VAR_10[VAR_3];
 int VAR_11;


 VAR_11 = FUNC_10(VAR_5->dev);
 if (VAR_11 < 0 && VAR_11 != -VAR_0)
  return VAR_11;

 FUNC_0(VAR_10, VAR_4);
 FUNC_13(VAR_9, sizeof(VAR_9), "%s[%d]", VAR_10, FUNC_9(VAR_6->pid));

 if (!(VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2))) {
  VAR_11 = -VAR_1;
  goto done;
 }

 VAR_11 = FUNC_7(VAR_7, VAR_9, VAR_8);
 if (VAR_11)
  goto done;

 VAR_8->base.super = 0;

 VAR_6->driver_priv = VAR_8;

 FUNC_4(&VAR_7->client.mutex);
 FUNC_3(&VAR_8->head, &VAR_7->clients);
 FUNC_5(&VAR_7->client.mutex);

done:
 if (VAR_11 && VAR_8) {
  FUNC_6(VAR_8);
  FUNC_1(VAR_8);
 }

 FUNC_11(VAR_5->dev);
 FUNC_12(VAR_5->dev);
 return VAR_11;
}
