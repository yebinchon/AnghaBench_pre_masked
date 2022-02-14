
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct drm_plane {TYPE_3__* rotation_property; } ;
struct drm_mode_set {int num_connectors; TYPE_1__* crtc; struct drm_connector** connectors; } ;
struct drm_cmdline_mode {unsigned int rotation_reflection; scalar_t__ specified; } ;
struct TYPE_5__ {int panel_orientation; } ;
struct drm_connector {struct drm_cmdline_mode cmdline_mode; TYPE_2__ display_info; } ;
struct TYPE_6__ {unsigned int num_values; unsigned long long* values; } ;
struct TYPE_4__ {struct drm_plane* primary; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;

bool FUNC_1(struct drm_mode_set *VAR_5, unsigned int *VAR_6)
{
 struct drm_connector *VAR_7 = VAR_5->connectors[0];
 struct drm_plane *VAR_8 = VAR_5->crtc->primary;
 struct drm_cmdline_mode *VAR_9;
 u64 VAR_10 = 0;
 unsigned int VAR_11;

 if (!VAR_5->num_connectors)
  return 0;

 switch (VAR_7->display_info.panel_orientation) {
 case 130:
  *VAR_6 = VAR_1;
  break;
 case 129:
  *VAR_6 = VAR_3;
  break;
 case 128:
  *VAR_6 = VAR_2;
  break;
 default:
  *VAR_6 = VAR_0;
 }
 VAR_9 = &VAR_7->cmdline_mode;
 if (VAR_9->specified && VAR_9->rotation_reflection) {
  unsigned int VAR_12, VAR_13;
  unsigned int VAR_14, VAR_15;
  unsigned int VAR_16, VAR_17;

  VAR_15 = FUNC_0(*VAR_6 & VAR_4);
  VAR_14 = FUNC_0(VAR_9->rotation_reflection & VAR_4);
  VAR_16 = (VAR_15 + VAR_14) % 4;

  VAR_13 = *VAR_6 & ~VAR_4;
  VAR_12 = VAR_9->rotation_reflection & ~VAR_4;
  VAR_17 = VAR_13 ^ VAR_12;

  *VAR_6 = (1 << VAR_16) | VAR_17;
 }






 if ((*VAR_6 & VAR_4) != VAR_1 ||
     !VAR_8->rotation_property)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_8->rotation_property->num_values; VAR_11++)
  VAR_10 |= (1ULL << VAR_8->rotation_property->values[VAR_11]);

 if (!(*VAR_6 & VAR_10))
  return 0;

 return 1;
}
