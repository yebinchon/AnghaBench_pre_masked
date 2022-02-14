
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int size; void const* data; } ;
struct TYPE_7__ {unsigned int size; void const* data; } ;
struct TYPE_6__ {int size; scalar_t__ data; } ;
struct TYPE_9__ {TYPE_3__ lockdown; TYPE_2__ bl_config; TYPE_1__ bootloader; } ;
struct TYPE_10__ {TYPE_4__ img; } ;
struct f34_data {TYPE_5__ v7; } ;
struct container_descriptor {int content_length; int content_address; int container_id; } ;






 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct f34_data *VAR_0,
             const void *VAR_1)
{
 int VAR_2;
 int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 const void *VAR_7;
 const struct container_descriptor *VAR_8;

 VAR_3 = VAR_0->v7.img.bootloader.size / 4 - 1;

 for (VAR_2 = 1; VAR_2 <= VAR_3; VAR_2++) {
  VAR_4 = FUNC_0(VAR_0->v7.img.bootloader.data + VAR_2 * 4);
  VAR_8 = VAR_1 + VAR_4;
  VAR_5 = FUNC_1(VAR_8->container_id);
  VAR_7 = VAR_1 + FUNC_2(VAR_8->content_address);
  VAR_6 = FUNC_2(VAR_8->content_length);
  switch (VAR_5) {
  case 131:
  case 128:
   VAR_0->v7.img.bl_config.data = VAR_7;
   VAR_0->v7.img.bl_config.size = VAR_6;
   break;
  case 130:
  case 129:
   VAR_0->v7.img.lockdown.data = VAR_7;
   VAR_0->v7.img.lockdown.size = VAR_6;
   break;
  default:
   break;
  }
 }
}
