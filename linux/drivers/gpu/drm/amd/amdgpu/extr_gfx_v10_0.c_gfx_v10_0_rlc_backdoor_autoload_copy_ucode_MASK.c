
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {char* rlc_autoload_ptr; } ;
struct TYPE_5__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ size; } ;
typedef size_t FIRMWARE_ID ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,void const*,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_3,
             FIRMWARE_ID VAR_4,
             const void *VAR_5,
             uint32_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 char *VAR_9 = VAR_3->gfx.rlc.rlc_autoload_ptr;

 if (VAR_4 <= VAR_0 || VAR_4 >= VAR_1)
  return;

 VAR_7 = VAR_2[VAR_4].offset;
 VAR_8 = VAR_2[VAR_4].size;

 if (VAR_6 == 0)
  VAR_6 = VAR_8;

 if (VAR_6 > VAR_8)
  VAR_6 = VAR_8;

 FUNC_0(VAR_9 + VAR_7, VAR_5, VAR_6);

 if (VAR_6 < VAR_8)
  FUNC_1(VAR_9 + VAR_7 + VAR_6, 0, VAR_8 - VAR_6);
}
