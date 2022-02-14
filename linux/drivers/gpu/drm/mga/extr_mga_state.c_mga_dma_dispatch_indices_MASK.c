
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {scalar_t__ used; scalar_t__ pending; int idx; int bus_address; TYPE_3__* dev_private; } ;
struct TYPE_7__ {int nbox; int * boxes; int dirty; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_8__ {unsigned int dma_access; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_9__ {int dispatched; scalar_t__ discard; } ;
typedef TYPE_3__ drm_mga_buf_priv_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,int,int ,unsigned int,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,unsigned int,unsigned int) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (struct drm_device*,struct drm_buf*) ;

__attribute__((used)) static void FUNC_9(struct drm_device *VAR_4, struct drm_buf *VAR_5,
         unsigned int VAR_6, unsigned int VAR_7)
{
 drm_mga_private_t *VAR_8 = VAR_4->dev_private;
 drm_mga_buf_priv_t *VAR_9 = VAR_5->dev_private;
 drm_mga_sarea_t *VAR_10 = VAR_8->sarea_priv;
 u32 VAR_11 = (u32) VAR_5->bus_address;
 int VAR_12 = 0;
 VAR_0;
 FUNC_4("buf=%d start=%d end=%d\n", VAR_5->idx, VAR_6, VAR_7);

 if (VAR_6 != VAR_7) {
  VAR_9->dispatched = 1;

  FUNC_6(VAR_8, VAR_10->dirty);

  do {
   if (VAR_12 < VAR_10->nbox) {
    FUNC_7(VAR_8,
         &VAR_10->boxes[VAR_12]);
   }

   FUNC_2(1);

   FUNC_3(VAR_1, 0x00000000,
      VAR_1, 0x00000000,
      VAR_2, VAR_11 + VAR_6,
      VAR_3, ((VAR_11 + VAR_7) |
       VAR_8->dma_access));

   FUNC_0();
  } while (++VAR_12 < VAR_10->nbox);
 }

 if (VAR_9->discard) {
  FUNC_1(VAR_9);
  VAR_5->pending = 0;
  VAR_5->used = 0;
  VAR_9->dispatched = 0;

  FUNC_8(VAR_4, VAR_5);
 }

 FUNC_5();
}
