
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_object {scalar_t__ type; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct drm_device *VAR_4,
     int VAR_5,
     struct drm_mode_object **VAR_6,
     bool VAR_7)
{
 int VAR_8;
 int VAR_9 = -1;
 int VAR_10 = -1;
 int VAR_11 = -1;




 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  if (VAR_6[VAR_8]->type == VAR_1 && VAR_9 == -1) {
   VAR_9 = VAR_8;
  }
  if (VAR_6[VAR_8]->type == VAR_0 && VAR_10 == -1)
   VAR_10 = VAR_8;

  if (VAR_7) {
   if (VAR_6[VAR_8]->type == VAR_2 && VAR_11 == -1)
    VAR_11 = VAR_8;
  }
 }
 if (VAR_9 == -1 || VAR_10 == -1)
  return -VAR_3;
 if (VAR_7 && VAR_11 == -1)
  return -VAR_3;
 return 0;
}
