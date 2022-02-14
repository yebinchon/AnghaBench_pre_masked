
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct amdgpu_device {int dev; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ offset; } ;
typedef size_t FIRMWARE_ID ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static uint32_t FUNC_2(struct amdgpu_device *VAR_3)
{
 uint32_t VAR_4 = 0;
 FIRMWARE_ID VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_3->dev, "failed to parse rlc toc\n");
  return 0;
 }

 for (VAR_5 = VAR_1; VAR_5 < VAR_0; VAR_5++)
  VAR_4 += VAR_2[VAR_5].size;


 if (VAR_4 < VAR_2[VAR_0-1].offset)
  VAR_4 = VAR_2[VAR_0-1].offset +
    VAR_2[VAR_0-1].size;

 return VAR_4;
}
