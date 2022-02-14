
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ tail; scalar_t__ last_flush; int space; int size; } ;
struct TYPE_6__ {int usec_timeout; int dma_access; TYPE_1__* primary; TYPE_3__ prim; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_primary_buffer_t ;
struct TYPE_5__ {int offset; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int ,int,int ,int,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

void FUNC_8(drm_mga_private_t *VAR_7)
{
 drm_mga_primary_buffer_t *VAR_8 = &VAR_7->prim;
 u32 VAR_9, VAR_10;
 u32 VAR_11 = 0;
 int VAR_12;
 VAR_0;
 FUNC_3("\n");


 for (VAR_12 = 0; VAR_12 < VAR_7->usec_timeout; VAR_12++) {
  VAR_11 = FUNC_4(VAR_6) & VAR_3;
  if (VAR_11 == VAR_2)
   break;
  FUNC_7(1);
 }

 if (VAR_8->tail == VAR_8->last_flush) {
  FUNC_3("   bailing out...\n");
  return;
 }

 VAR_10 = VAR_8->tail + VAR_7->primary->offset;





 FUNC_1(1);

 FUNC_2(VAR_1, 0x00000000,
    VAR_1, 0x00000000,
    VAR_1, 0x00000000, VAR_1, 0x00000000);

 FUNC_0();

 VAR_8->last_flush = VAR_8->tail;

 VAR_9 = FUNC_4(VAR_4);

 if (VAR_9 <= VAR_10)
  VAR_8->space = VAR_8->size - VAR_8->tail;
 else
  VAR_8->space = VAR_9 - VAR_10;

 FUNC_3("   head = 0x%06lx\n", (unsigned long)(VAR_9 - VAR_7->primary->offset));
 FUNC_3("   tail = 0x%06lx\n", (unsigned long)(VAR_10 - VAR_7->primary->offset));
 FUNC_3("  space = 0x%06x\n", VAR_8->space);

 FUNC_6();
 FUNC_5(VAR_5, VAR_10 | VAR_7->dma_access);

 FUNC_3("done.\n");
}
