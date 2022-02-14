
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct sun4i_frontend {int regs; TYPE_2__* data; } ;
struct drm_plane_state {struct drm_framebuffer* fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;
struct drm_framebuffer {int modifier; struct drm_format_info* format; } ;
struct drm_format_info {scalar_t__ is_yuv; } ;
struct TYPE_4__ {TYPE_1__* ch_phase; } ;
struct TYPE_3__ {int horzphase; int* vertphase; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct drm_format_info const*,int*) ;
 int FUNC_6 (struct drm_format_info const*,int ,int*) ;
 int FUNC_7 (struct drm_format_info const*,int*) ;
 int FUNC_8 (int ,int*) ;
 int* VAR_10 ;

int FUNC_9(struct sun4i_frontend *VAR_11,
      struct drm_plane *VAR_12, uint32_t VAR_13)
{
 struct drm_plane_state *VAR_14 = VAR_12->state;
 struct drm_framebuffer *VAR_15 = VAR_14->fb;
 const struct drm_format_info *VAR_16 = VAR_15->format;
 uint64_t VAR_17 = VAR_15->modifier;
 u32 VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22;
 u32 VAR_23;
 int VAR_24;

 VAR_24 = FUNC_5(VAR_16, &VAR_19);
 if (VAR_24) {
  FUNC_1("Invalid input format\n");
  return VAR_24;
 }

 VAR_24 = FUNC_6(VAR_16, VAR_17,
            &VAR_20);
 if (VAR_24) {
  FUNC_1("Invalid input mode\n");
  return VAR_24;
 }

 VAR_24 = FUNC_7(VAR_16, &VAR_21);
 if (VAR_24) {
  FUNC_1("Invalid pixel sequence\n");
  return VAR_24;
 }

 VAR_24 = FUNC_8(VAR_13, &VAR_18);
 if (VAR_24) {
  FUNC_1("Invalid output format\n");
  return VAR_24;
 }





 FUNC_4(VAR_11->regs, VAR_2,
       VAR_11->data->ch_phase[0].horzphase);
 FUNC_4(VAR_11->regs, VAR_5,
       VAR_11->data->ch_phase[1].horzphase);
 FUNC_4(VAR_11->regs, VAR_3,
       VAR_11->data->ch_phase[0].vertphase[0]);
 FUNC_4(VAR_11->regs, VAR_6,
       VAR_11->data->ch_phase[1].vertphase[0]);
 FUNC_4(VAR_11->regs, VAR_4,
       VAR_11->data->ch_phase[0].vertphase[1]);
 FUNC_4(VAR_11->regs, VAR_7,
       VAR_11->data->ch_phase[1].vertphase[1]);







 if (VAR_16->is_yuv) {

  VAR_23 = 0;

  for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_10); VAR_22++)
   FUNC_4(VAR_11->regs,
         FUNC_2(VAR_22),
         VAR_10[VAR_22]);
 } else {
  VAR_23 = VAR_0;
 }

 FUNC_3(VAR_11->regs, VAR_1,
      VAR_0, VAR_23);

 FUNC_4(VAR_11->regs, VAR_8,
       VAR_20 | VAR_19 | VAR_21);






 FUNC_4(VAR_11->regs, VAR_9,
       VAR_18);

 return 0;
}
