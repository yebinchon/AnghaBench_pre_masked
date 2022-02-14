
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_device {TYPE_2__* pdev; } ;
struct TYPE_7__ {int * parent; } ;
struct TYPE_10__ {TYPE_3__* algo_data; int name; int * algo; TYPE_1__ dev; int class; int owner; } ;
struct TYPE_9__ {int udelay; struct amdgpu_i2c_chan* data; int timeout; int getscl; int getsda; int setscl; int setsda; int post_xfer; int pre_xfer; } ;
struct amdgpu_i2c_bus_rec {scalar_t__ hw_capable; scalar_t__ mm_i2c; } ;
struct amdgpu_i2c_chan {TYPE_4__ adapter; TYPE_3__ bit; int mutex; struct drm_device* dev; struct amdgpu_i2c_bus_rec rec; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,struct amdgpu_i2c_chan*) ;
 int FUNC_4 (struct amdgpu_i2c_chan*) ;
 struct amdgpu_i2c_chan* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,char*,char const*) ;
 int FUNC_8 (int) ;

struct amdgpu_i2c_chan *FUNC_9(struct drm_device *VAR_11,
       const struct amdgpu_i2c_bus_rec *VAR_12,
       const char *VAR_13)
{
 struct amdgpu_i2c_chan *VAR_14;
 int VAR_15;


 if (VAR_12->mm_i2c && (VAR_4 == 0))
  return ((void*)0);

 VAR_14 = FUNC_5(sizeof(struct amdgpu_i2c_chan), VAR_0);
 if (VAR_14 == ((void*)0))
  return ((void*)0);

 VAR_14->rec = *VAR_12;
 VAR_14->adapter.owner = VAR_2;
 VAR_14->adapter.class = VAR_1;
 VAR_14->adapter.dev.parent = &VAR_11->pdev->dev;
 VAR_14->dev = VAR_11;
 FUNC_3(&VAR_14->adapter, VAR_14);
 FUNC_6(&VAR_14->mutex);
 if (VAR_12->hw_capable &&
     VAR_4) {

  FUNC_7(VAR_14->adapter.name, sizeof(VAR_14->adapter.name),
    "AMDGPU i2c hw bus %s", VAR_13);
  VAR_14->adapter.algo = &VAR_3;
  VAR_15 = FUNC_1(&VAR_14->adapter);
  if (VAR_15)
   goto out_free;
 } else {

  FUNC_7(VAR_14->adapter.name, sizeof(VAR_14->adapter.name),
    "AMDGPU i2c bit bus %s", VAR_13);
  VAR_14->adapter.algo_data = &VAR_14->bit;
  VAR_14->bit.pre_xfer = VAR_8;
  VAR_14->bit.post_xfer = VAR_7;
  VAR_14->bit.setsda = VAR_10;
  VAR_14->bit.setscl = VAR_9;
  VAR_14->bit.getsda = VAR_6;
  VAR_14->bit.getscl = VAR_5;
  VAR_14->bit.udelay = 10;
  VAR_14->bit.timeout = FUNC_8(2200);
  VAR_14->bit.data = VAR_14;
  VAR_15 = FUNC_2(&VAR_14->adapter);
  if (VAR_15) {
   FUNC_0("Failed to register bit i2c %s\n", VAR_13);
   goto out_free;
  }
 }

 return VAR_14;
out_free:
 FUNC_4(VAR_14);
 return ((void*)0);

}
