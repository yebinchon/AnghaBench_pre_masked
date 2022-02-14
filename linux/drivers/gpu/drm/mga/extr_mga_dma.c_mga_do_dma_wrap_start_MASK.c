
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int wrapped; scalar_t__ space; int last_wrap; int tail; scalar_t__ size; scalar_t__ last_flush; } ;
struct TYPE_6__ {scalar_t__ dma_access; TYPE_1__* primary; TYPE_3__ prim; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_primary_buffer_t ;
struct TYPE_5__ {scalar_t__ offset; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,int ,int,int ,int,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(drm_mga_private_t *VAR_4)
{
 drm_mga_primary_buffer_t *VAR_5 = &VAR_4->prim;
 u32 VAR_6, VAR_7;
 VAR_0;
 FUNC_3("\n");

 FUNC_1();

 FUNC_2(VAR_1, 0x00000000,
    VAR_1, 0x00000000,
    VAR_1, 0x00000000, VAR_1, 0x00000000);

 FUNC_0();

 VAR_7 = VAR_5->tail + VAR_4->primary->offset;

 VAR_5->tail = 0;
 VAR_5->last_flush = 0;
 VAR_5->last_wrap++;

 VAR_6 = FUNC_4(VAR_2);

 if (VAR_6 == VAR_4->primary->offset)
  VAR_5->space = VAR_5->size;
 else
  VAR_5->space = VAR_6 - VAR_4->primary->offset;

 FUNC_3("   head = 0x%06lx\n", (unsigned long)(VAR_6 - VAR_4->primary->offset));
 FUNC_3("   tail = 0x%06x\n", VAR_5->tail);
 FUNC_3("   wrap = %d\n", VAR_5->last_wrap);
 FUNC_3("  space = 0x%06x\n", VAR_5->space);

 FUNC_6();
 FUNC_5(VAR_3, VAR_7 | VAR_4->dma_access);

 FUNC_7(0, &VAR_5->wrapped);
 FUNC_3("done.\n");
}
