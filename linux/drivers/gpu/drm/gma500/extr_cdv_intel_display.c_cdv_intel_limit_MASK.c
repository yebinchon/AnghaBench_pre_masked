
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gma_limit_t {int dummy; } ;
struct drm_crtc {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct gma_limit_t* VAR_9 ;
 scalar_t__ FUNC_0 (struct drm_crtc*,int ) ;

__attribute__((used)) static const struct gma_limit_t *FUNC_1(struct drm_crtc *VAR_10,
       int VAR_11)
{
 const struct gma_limit_t *VAR_12;
 if (FUNC_0(VAR_10, VAR_8)) {




  if (VAR_11 == 96000)
   VAR_12 = &VAR_9[VAR_5];
  else
   VAR_12 = &VAR_9[VAR_4];
 } else if (FUNC_0(VAR_10, VAR_6) ||
   FUNC_0(VAR_10, VAR_7)) {
  if (VAR_11 == 27000)
   VAR_12 = &VAR_9[VAR_3];
  else
   VAR_12 = &VAR_9[VAR_2];
 } else {
  if (VAR_11 == 27000)
   VAR_12 = &VAR_9[VAR_0];
  else
   VAR_12 = &VAR_9[VAR_1];
 }
 return VAR_12;
}
