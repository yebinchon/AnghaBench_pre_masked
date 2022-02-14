
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int load_type; } ;
struct amdgpu_device {TYPE_1__ firmware; int dev; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct amdgpu_device*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_3 < 4) {
  FUNC_6(VAR_5->dev, "sched jobs (%d) must be at least 4\n",
    VAR_3);
  VAR_3 = 4;
 } else if (!FUNC_7(VAR_3)){
  FUNC_6(VAR_5->dev, "sched jobs (%d) must be a power of 2\n",
    VAR_3);
  VAR_3 = FUNC_8(VAR_3);
 }

 if (VAR_1 != -1 && VAR_1 < 32) {

  FUNC_6(VAR_5->dev, "gart size (%d) too small\n",
    VAR_1);
  VAR_1 = -1;
 }

 if (VAR_2 != -1 && VAR_2 < 32) {

  FUNC_6(VAR_5->dev, "gtt size (%d) too small\n",
     VAR_2);
  VAR_2 = -1;
 }


 if (VAR_4 != -1 &&
     (VAR_4 > 9 || VAR_4 < 4)) {
  FUNC_6(VAR_5->dev, "valid range is between 4 and 9\n");
  VAR_4 = -1;
 }

 FUNC_1(VAR_5);

 FUNC_2(VAR_5);

 FUNC_0(VAR_5);

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6) {
  FUNC_5(VAR_5->dev, "invalid lockup_timeout parameter syntax\n");
  return VAR_6;
 }

 VAR_5->firmware.load_type = FUNC_4(VAR_5, VAR_0);

 return VAR_6;
}
