
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_plane_state {scalar_t__ color_encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline u32 FUNC_0(struct drm_plane_state *VAR_4)
{






 return VAR_0 |
        (VAR_4->color_encoding == VAR_3 ?
   VAR_2 : VAR_1);
}
