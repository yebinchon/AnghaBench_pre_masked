
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {TYPE_2__* pdev; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_9__ {TYPE_3__* algo_data; int name; TYPE_1__ dev; int class; int owner; } ;
struct TYPE_8__ {int udelay; int timeout; int getscl; int getsda; int setscl; int setsda; struct ast_i2c_chan* data; } ;
struct ast_i2c_chan {TYPE_4__ adapter; TYPE_3__ bit; struct drm_device* dev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,struct ast_i2c_chan*) ;
 int FUNC_3 (struct ast_i2c_chan*) ;
 struct ast_i2c_chan* FUNC_4 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int,char*) ;

__attribute__((used)) static struct ast_i2c_chan *FUNC_6(struct drm_device *VAR_7)
{
 struct ast_i2c_chan *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(sizeof(struct ast_i2c_chan), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->adapter.owner = VAR_2;
 VAR_8->adapter.class = VAR_1;
 VAR_8->adapter.dev.parent = &VAR_7->pdev->dev;
 VAR_8->dev = VAR_7;
 FUNC_2(&VAR_8->adapter, VAR_8);
 FUNC_5(VAR_8->adapter.name, sizeof(VAR_8->adapter.name),
   "AST i2c bit bus");
 VAR_8->adapter.algo_data = &VAR_8->bit;

 VAR_8->bit.udelay = 20;
 VAR_8->bit.timeout = 2;
 VAR_8->bit.data = VAR_8;
 VAR_8->bit.setsda = VAR_6;
 VAR_8->bit.setscl = VAR_5;
 VAR_8->bit.getsda = VAR_4;
 VAR_8->bit.getscl = VAR_3;
 VAR_9 = FUNC_1(&VAR_8->adapter);
 if (VAR_9) {
  FUNC_0("Failed to register bit i2c\n");
  goto out_free;
 }

 return VAR_8;
out_free:
 FUNC_3(VAR_8);
 return ((void*)0);
}
