
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sti_fps_info {int curr_field_counter; int curr_frame_counter; int last_frame_counter; int last_field_counter; char* fips_str; int fps_str; scalar_t__ output; int last_timestamp; } ;
struct TYPE_4__ {char* name; struct drm_plane_state* state; } ;
struct sti_plane {struct sti_fps_info fps_info; TYPE_1__ drm_plane; } ;
struct drm_plane_state {TYPE_3__* fb; } ;
typedef int ktime_t ;
struct TYPE_6__ {int width; int height; TYPE_2__* format; } ;
struct TYPE_5__ {int format; } ;


 int FUNC_0 (char*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,char*,...) ;
 char* FUNC_5 (struct sti_plane*) ;

void FUNC_6(struct sti_plane *VAR_2,
     bool VAR_3,
     bool VAR_4)
{
 struct drm_plane_state *VAR_5 = VAR_2->drm_plane.state;
 ktime_t VAR_6;
 struct sti_fps_info *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_6 = FUNC_1();


 VAR_7 = &VAR_2->fps_info;

 if (VAR_4)
  VAR_7->curr_field_counter++;


 if (!VAR_3)
  return;

 VAR_7->curr_frame_counter++;
 VAR_10 = FUNC_3(FUNC_2(VAR_6, VAR_7->last_timestamp));
 VAR_11 = VAR_7->curr_frame_counter - VAR_7->last_frame_counter;

 if (VAR_11 <= 0 || VAR_10 < VAR_1)
  return;

 VAR_7->last_timestamp = VAR_6;
 VAR_7->last_frame_counter = VAR_7->curr_frame_counter;

 if (VAR_5->fb) {
  VAR_8 = (VAR_11 * 1000000) / VAR_10;
  FUNC_4(VAR_2->fps_info.fps_str, VAR_0,
    "%-8s %4dx%-4d %.4s @ %3d.%-3.3d fps (%s)",
    VAR_2->drm_plane.name,
    VAR_5->fb->width,
    VAR_5->fb->height,
    (char *)&VAR_5->fb->format->format,
    VAR_8 / 1000, VAR_8 % 1000,
    FUNC_5(VAR_2));
 }

 if (VAR_7->curr_field_counter) {

  VAR_12 = VAR_7->curr_field_counter - VAR_7->last_field_counter;
  VAR_7->last_field_counter = VAR_7->curr_field_counter;
  VAR_9 = (VAR_12 * 1000000) / VAR_10;
  FUNC_4(VAR_2->fps_info.fips_str,
    VAR_0, " - %3d.%-3.3d field/sec",
    VAR_9 / 1000, VAR_9 % 1000);
 } else {
  VAR_2->fps_info.fips_str[0] = '\0';
 }

 if (VAR_7->output)
  FUNC_0("%s%s\n",
    VAR_2->fps_info.fps_str,
    VAR_2->fps_info.fips_str);
}
