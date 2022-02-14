
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_device {TYPE_1__* agp; TYPE_3__* dev_private; } ;
struct drm_buf {scalar_t__ bus_address; TYPE_4__* dev_private; } ;
struct TYPE_6__ {int dirty; } ;
typedef TYPE_2__ drm_i810_sarea_t ;
struct TYPE_7__ {unsigned long counter; TYPE_2__* sarea_priv; } ;
typedef TYPE_3__ drm_i810_private_t ;
struct TYPE_8__ {scalar_t__ currently_mapped; unsigned int my_use_idx; scalar_t__ virtual; int in_use; } ;
typedef TYPE_4__ drm_i810_buf_priv_t ;
struct TYPE_5__ {unsigned long base; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 int FUNC_1 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (unsigned int) ;
 int VAR_7 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_buf*) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_8, struct drm_buf *VAR_9, int VAR_10,
     unsigned int VAR_11)
{
 drm_i810_private_t *VAR_12 = VAR_8->dev_private;
 drm_i810_buf_priv_t *VAR_13 = VAR_9->dev_private;
 drm_i810_sarea_t *VAR_14 = VAR_12->sarea_priv;
 unsigned long VAR_15 = (unsigned long)VAR_9->bus_address;
 unsigned long VAR_16 = VAR_15 - VAR_8->agp->base;
 int VAR_17;
 VAR_7;

 FUNC_5(VAR_8);

 VAR_17 = FUNC_4(VAR_13->in_use, VAR_3, VAR_5);
 if (VAR_17 != VAR_3)
  FUNC_2("MC found buffer that isn't mine!\n");

 if (VAR_10 > 4 * 1024)
  VAR_10 = 0;

 VAR_14->dirty = 0x7f;

 FUNC_2("addr 0x%lx, used 0x%x\n", VAR_15, VAR_10);

 VAR_12->counter++;
 FUNC_2("dispatch counter : %ld\n", VAR_12->counter);
 FUNC_2("start : %lx\n", VAR_16);
 FUNC_2("used : %d\n", VAR_10);
 FUNC_2("start + used - 4 : %ld\n", VAR_16 + VAR_10 - 4);

 if (VAR_13->currently_mapped == VAR_6) {
  if (VAR_10 & 4) {
   *(u32 *) ((char *) VAR_13->virtual + VAR_10) = 0;
   VAR_10 += 4;
  }

  FUNC_6(VAR_9);
 }
 FUNC_1(4);
 FUNC_3(VAR_1);
 FUNC_3(VAR_16 | VAR_0);
 FUNC_3(VAR_16 + VAR_10 - 4);
 FUNC_3(0);
 FUNC_0();

 FUNC_1(8);
 FUNC_3(VAR_2);
 FUNC_3(VAR_13->my_use_idx);
 FUNC_3(VAR_4);
 FUNC_3(0);

 FUNC_3(VAR_2);
 FUNC_3(16);
 FUNC_3(VAR_11);
 FUNC_3(0);
 FUNC_0();
}
