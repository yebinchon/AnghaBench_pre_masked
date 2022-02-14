
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int visible_vram_size; } ;
struct radeon_device {TYPE_2__* ring; TYPE_1__ mc; } ;
struct TYPE_4__ {int ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*,int ) ;

void FUNC_4(struct radeon_device *VAR_4)
{

 FUNC_3(VAR_4, VAR_4->mc.visible_vram_size);
 VAR_4->ring[VAR_2].ready = 0;
 FUNC_0(VAR_1, 0);
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_3, 0);
 if (FUNC_2(VAR_4)) {
  FUNC_1("Failed to wait GUI idle while programming pipes. Bad things might happen.\n");
 }
}
