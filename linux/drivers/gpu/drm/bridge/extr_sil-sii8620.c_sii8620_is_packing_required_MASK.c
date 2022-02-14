
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int dummy; } ;
struct drm_display_mode {int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sii8620*) ;

__attribute__((used)) static int FUNC_1(struct sii8620 *VAR_4,
           const struct drm_display_mode *VAR_5)
{
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_4)) {
  VAR_6 = VAR_2;
  VAR_7 = VAR_3;
 } else {
  VAR_6 = VAR_0;
  VAR_7 = VAR_1;
 }

 if (VAR_5->clock < VAR_6)
  return 0;
 else if (VAR_5->clock < VAR_7)
  return 1;
 else
  return -1;
}
