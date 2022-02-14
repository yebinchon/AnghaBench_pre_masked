
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * parent; } ;
struct TYPE_10__ {TYPE_3__* algo_data; int name; int * algo; TYPE_1__ dev; int class; int owner; } ;
struct TYPE_9__ {int udelay; struct radeon_i2c_chan* data; int timeout; int getscl; int getsda; int setscl; int setsda; int post_xfer; int pre_xfer; } ;
struct radeon_i2c_bus_rec {scalar_t__ hw_capable; scalar_t__ mm_i2c; } ;
struct radeon_i2c_chan {TYPE_4__ adapter; TYPE_3__ bit; int mutex; struct drm_device* dev; struct radeon_i2c_bus_rec rec; } ;
struct radeon_device {scalar_t__ family; } ;
struct drm_device {TYPE_2__* pdev; struct radeon_device* dev_private; } ;
struct TYPE_8__ {int dev; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct radeon_i2c_chan*) ;
 int FUNC_5 (struct radeon_i2c_chan*) ;
 struct radeon_i2c_chan* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int ,int,char*,char const*) ;
 int FUNC_9 (int) ;

struct radeon_i2c_chan *FUNC_10(struct drm_device *VAR_15,
       struct radeon_i2c_bus_rec *VAR_16,
       const char *VAR_17)
{
 struct radeon_device *VAR_18 = VAR_15->dev_private;
 struct radeon_i2c_chan *VAR_19;
 int VAR_20;


 if (VAR_16->mm_i2c && (VAR_11 == 0))
  return ((void*)0);

 VAR_19 = FUNC_6(sizeof(struct radeon_i2c_chan), VAR_3);
 if (VAR_19 == ((void*)0))
  return ((void*)0);

 VAR_19->rec = *VAR_16;
 VAR_19->adapter.owner = VAR_5;
 VAR_19->adapter.class = VAR_4;
 VAR_19->adapter.dev.parent = &VAR_15->pdev->dev;
 VAR_19->dev = VAR_15;
 FUNC_4(&VAR_19->adapter, VAR_19);
 FUNC_7(&VAR_19->mutex);
 if (VAR_16->mm_i2c ||
     (VAR_16->hw_capable &&
      VAR_11 &&
      ((VAR_18->family <= VAR_1) ||
       ((VAR_18->family >= VAR_2) && (VAR_18->family <= VAR_0))))) {

  FUNC_8(VAR_19->adapter.name, sizeof(VAR_19->adapter.name),
    "Radeon i2c hw bus %s", VAR_17);
  VAR_19->adapter.algo = &VAR_12;
  VAR_20 = FUNC_2(&VAR_19->adapter);
  if (VAR_20)
   goto out_free;
 } else if (VAR_16->hw_capable &&
     VAR_11 &&
     FUNC_0(VAR_18)) {

  FUNC_8(VAR_19->adapter.name, sizeof(VAR_19->adapter.name),
    "Radeon i2c hw bus %s", VAR_17);
  VAR_19->adapter.algo = &VAR_10;
  VAR_20 = FUNC_2(&VAR_19->adapter);
  if (VAR_20)
   goto out_free;
 } else {

  FUNC_8(VAR_19->adapter.name, sizeof(VAR_19->adapter.name),
    "Radeon i2c bit bus %s", VAR_17);
  VAR_19->adapter.algo_data = &VAR_19->bit;
  VAR_19->bit.pre_xfer = VAR_9;
  VAR_19->bit.post_xfer = VAR_8;
  VAR_19->bit.setsda = VAR_14;
  VAR_19->bit.setscl = VAR_13;
  VAR_19->bit.getsda = VAR_7;
  VAR_19->bit.getscl = VAR_6;
  VAR_19->bit.udelay = 10;
  VAR_19->bit.timeout = FUNC_9(2200);
  VAR_19->bit.data = VAR_19;
  VAR_20 = FUNC_3(&VAR_19->adapter);
  if (VAR_20) {
   FUNC_1("Failed to register bit i2c %s\n", VAR_17);
   goto out_free;
  }
 }

 return VAR_19;
out_free:
 FUNC_5(VAR_19);
 return ((void*)0);

}
