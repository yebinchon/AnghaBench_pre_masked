
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_rect {int x1; int x2; int y1; int y2; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct drm_rect*) ;
 int FUNC_3 (struct drm_rect*) ;
 int FUNC_4 (struct drm_rect*) ;
 int VAR_2 ;

bool FUNC_5(struct drm_rect *VAR_3, struct drm_rect *VAR_4,
     const struct drm_rect *VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_5->x1 - VAR_4->x1;
 if (VAR_6 > 0) {
  u32 VAR_7 = FUNC_1(FUNC_4(VAR_3),
         FUNC_4(VAR_4), VAR_6);

  VAR_3->x1 = FUNC_0(VAR_2, VAR_3->x2 - VAR_7, VAR_1, VAR_0);
  VAR_4->x1 = VAR_5->x1;
 }
 VAR_6 = VAR_5->y1 - VAR_4->y1;
 if (VAR_6 > 0) {
  u32 VAR_8 = FUNC_1(FUNC_2(VAR_3),
         FUNC_2(VAR_4), VAR_6);

  VAR_3->y1 = FUNC_0(VAR_2, VAR_3->y2 - VAR_8, VAR_1, VAR_0);
  VAR_4->y1 = VAR_5->y1;
 }
 VAR_6 = VAR_4->x2 - VAR_5->x2;
 if (VAR_6 > 0) {
  u32 VAR_9 = FUNC_1(FUNC_4(VAR_3),
         FUNC_4(VAR_4), VAR_6);

  VAR_3->x2 = FUNC_0(VAR_2, VAR_3->x1 + VAR_9, VAR_1, VAR_0);
  VAR_4->x2 = VAR_5->x2;
 }
 VAR_6 = VAR_4->y2 - VAR_5->y2;
 if (VAR_6 > 0) {
  u32 VAR_10 = FUNC_1(FUNC_2(VAR_3),
         FUNC_2(VAR_4), VAR_6);

  VAR_3->y2 = FUNC_0(VAR_2, VAR_3->y1 + VAR_10, VAR_1, VAR_0);
  VAR_4->y2 = VAR_5->y2;
 }

 return FUNC_3(VAR_4);
}
