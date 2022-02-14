
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct intel_plane {TYPE_3__ base; } ;
struct TYPE_4__ {int cursor_width; } ;
struct TYPE_5__ {TYPE_1__ mode_config; } ;



__attribute__((used)) static unsigned int
FUNC_0(struct intel_plane *VAR_0,
         u32 VAR_1, u64 VAR_2,
         unsigned int VAR_3)
{
 return VAR_0->base.dev->mode_config.cursor_width * 4;
}
