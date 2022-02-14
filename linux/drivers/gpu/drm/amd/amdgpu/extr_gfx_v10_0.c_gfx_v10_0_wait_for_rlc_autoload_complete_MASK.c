
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ load_type; } ;
struct amdgpu_device {int usec_timeout; TYPE_1__ firmware; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_7->usec_timeout; VAR_10++) {
  VAR_8 = FUNC_1(VAR_3, 0, VAR_5);
  VAR_9 = FUNC_1(VAR_3, 0, VAR_6);
  if ((VAR_8 == 0) &&
      (FUNC_0(VAR_9,
   VAR_4, VAR_1) == 1)) {
   break;
  }
  FUNC_7(1);
 }

 if (VAR_10 >= VAR_7->usec_timeout) {
  FUNC_2(VAR_7->dev, "rlc autoload: gc ucode autoload timeout\n");
  return -VAR_2;
 }

 if (VAR_7->firmware.load_type == VAR_0) {
  VAR_11 = FUNC_4(VAR_7);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_3(VAR_7);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_6(VAR_7);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_5(VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
