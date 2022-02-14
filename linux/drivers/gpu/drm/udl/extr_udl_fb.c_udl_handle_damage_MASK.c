
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {char* transfer_buffer; int transfer_buffer_length; } ;
struct TYPE_5__ {int width; int height; int* pitches; TYPE_1__* format; struct drm_device* dev; } ;
struct udl_framebuffer {TYPE_3__* obj; TYPE_2__ base; int active_16; } ;
struct udl_device {int cpu_kcycles_used; int bytes_rendered; int bytes_identical; int bytes_sent; } ;
struct drm_device {int dummy; } ;
typedef int cycles_t ;
struct TYPE_6__ {scalar_t__ vmapping; } ;
struct TYPE_4__ {int * cpp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 struct udl_device* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (TYPE_3__*) ;
 struct urb* FUNC_10 (struct drm_device*) ;
 scalar_t__ FUNC_11 (struct drm_device*,int,struct urb**,char*,char**,int const,int const,int,int*,int*) ;
 int FUNC_12 (struct drm_device*,struct urb*,int) ;
 int FUNC_13 (struct urb*) ;

int FUNC_14(struct udl_framebuffer *VAR_2, int VAR_3, int VAR_4,
        int VAR_5, int VAR_6)
{
 struct drm_device *VAR_7 = VAR_2->base.dev;
 struct udl_device *VAR_8 = FUNC_8(VAR_7);
 int VAR_9, VAR_10;
 char *VAR_11;
 cycles_t VAR_12, VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 struct urb *VAR_16;
 int VAR_17;
 int VAR_18;

 FUNC_0(!FUNC_7(VAR_2->base.format->cpp[0]));
 VAR_18 = FUNC_4(VAR_2->base.format->cpp[0]);

 if (!VAR_2->active_16)
  return 0;

 if (!VAR_2->obj->vmapping) {
  VAR_10 = FUNC_9(VAR_2->obj);
  if (VAR_10 == -VAR_1) {
   FUNC_3("failed to vmap fb\n");
   return 0;
  }
  if (!VAR_2->obj->vmapping) {
   FUNC_3("failed to vmapping\n");
   return 0;
  }
 }

 VAR_17 = FUNC_1(VAR_3, sizeof(unsigned long));
 VAR_5 = FUNC_2(VAR_5 + (VAR_3-VAR_17), sizeof(unsigned long));
 VAR_3 = VAR_17;

 if ((VAR_5 <= 0) ||
     (VAR_3 + VAR_5 > VAR_2->base.width) ||
     (VAR_4 + VAR_6 > VAR_2->base.height))
  return -VAR_0;

 VAR_12 = FUNC_6();

 VAR_16 = FUNC_10(VAR_7);
 if (!VAR_16)
  return 0;
 VAR_11 = VAR_16->transfer_buffer;

 for (VAR_9 = VAR_4; VAR_9 < VAR_4 + VAR_6 ; VAR_9++) {
  const int VAR_19 = VAR_2->base.pitches[0] * VAR_9;
  const int VAR_20 = VAR_19 + (VAR_3 << VAR_18);
  const int VAR_21 = (VAR_2->base.width * VAR_9 + VAR_3) << VAR_18;
  if (FUNC_11(VAR_7, VAR_18, &VAR_16,
         (char *) VAR_2->obj->vmapping,
         &VAR_11, VAR_20, VAR_21,
         VAR_5 << VAR_18,
         &VAR_15, &VAR_14))
   goto error;
 }

 if (VAR_11 > (char *) VAR_16->transfer_buffer) {

  int VAR_22;
  if (VAR_11 < (char *) VAR_16->transfer_buffer + VAR_16->transfer_buffer_length)
   *VAR_11++ = 0xAF;
  VAR_22 = VAR_11 - (char *) VAR_16->transfer_buffer;
  VAR_10 = FUNC_12(VAR_7, VAR_16, VAR_22);
  VAR_14 += VAR_22;
 } else
  FUNC_13(VAR_16);

error:
 FUNC_5(VAR_14, &VAR_8->bytes_sent);
 FUNC_5(VAR_15, &VAR_8->bytes_identical);
 FUNC_5((VAR_5 * VAR_6) << VAR_18, &VAR_8->bytes_rendered);
 VAR_13 = FUNC_6();
 FUNC_5(((unsigned int) ((VAR_13 - VAR_12)
      >> 10)),
     &VAR_8->cpu_kcycles_used);

 return 0;
}
