
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_printer {int dummy; } ;
struct drm_framebuffer {unsigned int width; char* height; char** pitches; char** offsets; scalar_t__* obj; TYPE_1__* format; int modifier; int comm; } ;
struct drm_format_name_buf {int dummy; } ;
struct TYPE_2__ {unsigned int num_planes; int format; } ;


 int FUNC_0 (char*,struct drm_framebuffer const*,unsigned int) ;
 int FUNC_1 (unsigned int,struct drm_framebuffer const*,unsigned int) ;
 int FUNC_2 (struct drm_framebuffer const*) ;
 int FUNC_3 (struct drm_printer*,unsigned int,scalar_t__) ;
 int FUNC_4 (int ,struct drm_format_name_buf*) ;
 int FUNC_5 (struct drm_printer*,unsigned int,char*,...) ;

void FUNC_6(struct drm_printer *VAR_0, unsigned int VAR_1,
    const struct drm_framebuffer *VAR_2)
{
 struct drm_format_name_buf VAR_3;
 unsigned int VAR_4;

 FUNC_5(VAR_0, VAR_1, "allocated by = %s\n", VAR_2->comm);
 FUNC_5(VAR_0, VAR_1, "refcount=%u\n",
     FUNC_2(VAR_2));
 FUNC_5(VAR_0, VAR_1, "format=%s\n",
     FUNC_4(VAR_2->format->format, &VAR_3));
 FUNC_5(VAR_0, VAR_1, "modifier=0x%llx\n", VAR_2->modifier);
 FUNC_5(VAR_0, VAR_1, "size=%ux%u\n", VAR_2->width, VAR_2->height);
 FUNC_5(VAR_0, VAR_1, "layers:\n");

 for (VAR_4 = 0; VAR_4 < VAR_2->format->num_planes; VAR_4++) {
  FUNC_5(VAR_0, VAR_1 + 1, "size[%u]=%dx%d\n", VAR_4,
      FUNC_1(VAR_2->width, VAR_2, VAR_4),
      FUNC_0(VAR_2->height, VAR_2, VAR_4));
  FUNC_5(VAR_0, VAR_1 + 1, "pitch[%u]=%u\n", VAR_4, VAR_2->pitches[VAR_4]);
  FUNC_5(VAR_0, VAR_1 + 1, "offset[%u]=%u\n", VAR_4, VAR_2->offsets[VAR_4]);
  FUNC_5(VAR_0, VAR_1 + 1, "obj[%u]:%s\n", VAR_4,
      VAR_2->obj[VAR_4] ? "" : "(null)");
  if (VAR_2->obj[VAR_4])
   FUNC_3(VAR_0, VAR_1 + 2, VAR_2->obj[VAR_4]);
 }
}
