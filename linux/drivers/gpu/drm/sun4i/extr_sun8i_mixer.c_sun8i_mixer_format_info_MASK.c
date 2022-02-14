
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct de2_fmt_info {scalar_t__ drm_fmt; } ;


 unsigned int FUNC_0 (struct de2_fmt_info const*) ;
 struct de2_fmt_info const* VAR_0 ;

const struct de2_fmt_info *FUNC_1(u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_0[VAR_2].drm_fmt == VAR_1)
   return &VAR_0[VAR_2];

 return ((void*)0);
}
