
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int * rom; int * ram_header; int vram_mapping; int surface_mapping; int release_ring; int cursor_ring; int command_ring; int gc_work; int * current_release_bo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qxl_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qxl_device*) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct qxl_device *VAR_0)
{
 FUNC_4(&VAR_0->current_release_bo[0]);
 FUNC_4(&VAR_0->current_release_bo[1]);
 FUNC_0(&VAR_0->gc_work);
 FUNC_6(VAR_0->command_ring);
 FUNC_6(VAR_0->cursor_ring);
 FUNC_6(VAR_0->release_ring);
 FUNC_5(VAR_0);
 FUNC_3(VAR_0);
 FUNC_1(VAR_0->surface_mapping);
 FUNC_1(VAR_0->vram_mapping);
 FUNC_2(VAR_0->ram_header);
 FUNC_2(VAR_0->rom);
 VAR_0->rom = ((void*)0);
}
