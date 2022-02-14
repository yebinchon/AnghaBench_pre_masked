
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_private {int next_cursor; int cursor_cache; } ;
struct ast_crtc {int offset_x; int offset_y; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ast_private*,int ,int,int) ;
 int FUNC_1 (struct drm_crtc*) ;
 int * FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ) ;
 struct ast_crtc* FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static int FUNC_6(struct drm_crtc *VAR_5,
      int VAR_6, int VAR_7)
{
 struct ast_crtc *VAR_8 = FUNC_4(VAR_5);
 struct ast_private *VAR_9 = VAR_5->dev->dev_private;
 int VAR_10, VAR_11;
 u8 *VAR_12;

 VAR_12 = FUNC_2(FUNC_3(VAR_9->cursor_cache),
    0, ((void*)0));
 VAR_12 += (VAR_3 + VAR_0)*VAR_9->next_cursor + VAR_3;
 FUNC_5(VAR_6, VAR_12 + VAR_1);
 FUNC_5(VAR_7, VAR_12 + VAR_2);

 VAR_10 = VAR_8->offset_x;
 VAR_11 = VAR_8->offset_y;
 if (VAR_6 < 0) {
  VAR_10 = (-VAR_6) + VAR_8->offset_x;
  VAR_6 = 0;
 }

 if (VAR_7 < 0) {
  VAR_11 = (-VAR_7) + VAR_8->offset_y;
  VAR_7 = 0;
 }
 FUNC_0(VAR_9, VAR_4, 0xc2, VAR_10);
 FUNC_0(VAR_9, VAR_4, 0xc3, VAR_11);
 FUNC_0(VAR_9, VAR_4, 0xc4, (VAR_6 & 0xff));
 FUNC_0(VAR_9, VAR_4, 0xc5, ((VAR_6 >> 8) & 0x0f));
 FUNC_0(VAR_9, VAR_4, 0xc6, (VAR_7 & 0xff));
 FUNC_0(VAR_9, VAR_4, 0xc7, ((VAR_7 >> 8) & 0x07));


 FUNC_1(VAR_5);

 return 0;
}
