
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_rect {scalar_t__ y1; scalar_t__ y2; scalar_t__ x1; scalar_t__ x2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;

void FUNC_0(struct drm_rect *VAR_3,
    int VAR_4, int VAR_5,
    unsigned int VAR_6)
{
 struct drm_rect VAR_7;

 switch (VAR_6 & VAR_2) {
 case 131:
  break;
 case 128:
  VAR_7 = *VAR_3;
  VAR_3->x1 = VAR_4 - VAR_7.y2;
  VAR_3->x2 = VAR_4 - VAR_7.y1;
  VAR_3->y1 = VAR_7.x1;
  VAR_3->y2 = VAR_7.x2;
  break;
 case 130:
  VAR_7 = *VAR_3;
  VAR_3->x1 = VAR_4 - VAR_7.x2;
  VAR_3->x2 = VAR_4 - VAR_7.x1;
  VAR_3->y1 = VAR_5 - VAR_7.y2;
  VAR_3->y2 = VAR_5 - VAR_7.y1;
  break;
 case 129:
  VAR_7 = *VAR_3;
  VAR_3->x1 = VAR_7.y1;
  VAR_3->x2 = VAR_7.y2;
  VAR_3->y1 = VAR_5 - VAR_7.x2;
  VAR_3->y2 = VAR_5 - VAR_7.x1;
  break;
 default:
  break;
 }

 if (VAR_6 & (VAR_0 | VAR_1)) {
  VAR_7 = *VAR_3;

  if (VAR_6 & VAR_0) {
   VAR_3->x1 = VAR_4 - VAR_7.x2;
   VAR_3->x2 = VAR_4 - VAR_7.x1;
  }

  if (VAR_6 & VAR_1) {
   VAR_3->y1 = VAR_5 - VAR_7.y2;
   VAR_3->y2 = VAR_5 - VAR_7.y1;
  }
 }
}
