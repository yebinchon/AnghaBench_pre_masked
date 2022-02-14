
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_win_data {int dummy; } ;
struct drm_plane {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct vop_win_data const*,int ) ;
 int FUNC_1 (struct drm_plane*,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_5,
         const struct vop_win_data *VAR_6)
{
 unsigned int VAR_7 = 0;

 VAR_7 |= FUNC_0(VAR_6, VAR_3) ? VAR_0 : 0;
 VAR_7 |= FUNC_0(VAR_6, VAR_4) ? VAR_1 : 0;
 if (VAR_7)
  FUNC_1(VAR_5, VAR_2,
         VAR_2 | VAR_7);
}
