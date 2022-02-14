
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; int load_type; } ;
struct amdgpu_device {TYPE_1__ firmware; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 int VAR_3;
 struct amdgpu_device *VAR_4 = (struct amdgpu_device *)VAR_2;

 FUNC_2(&VAR_4->firmware.mutex);




 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3)
  goto failed;

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3) {
  FUNC_0("PSP firmware loading failed\n");
  goto failed;
 }

 FUNC_3(&VAR_4->firmware.mutex);
 return 0;

failed:
 VAR_4->firmware.load_type = VAR_0;
 FUNC_3(&VAR_4->firmware.mutex);
 return -VAR_1;
}
