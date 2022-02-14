
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct ast_vbios_stdtable {int misc; int* seq; int* crtc; int* ar; int* gr; } ;
struct ast_vbios_mode_info {struct ast_vbios_stdtable* std_table; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ast_private*,int ) ;
 int FUNC_1 (struct ast_private*,int ,int) ;
 int FUNC_2 (struct ast_private*,int ,int,int) ;
 int FUNC_3 (struct ast_private*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_6, struct drm_display_mode *VAR_7,
       struct ast_vbios_mode_info *VAR_8)
{
 struct ast_private *VAR_9 = VAR_6->dev->dev_private;
 const struct ast_vbios_stdtable *VAR_10;
 u32 VAR_11;
 u8 VAR_12;

 VAR_10 = VAR_8->std_table;

 VAR_12 = VAR_10->misc;
 FUNC_1(VAR_9, VAR_4, VAR_12);


 FUNC_2(VAR_9, VAR_5, 0x00, 0x03);
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  VAR_12 = VAR_10->seq[VAR_11];
  if (!VAR_11)
   VAR_12 |= 0x20;
  FUNC_2(VAR_9, VAR_5, (VAR_11 + 1) , VAR_12);
 }


 FUNC_3(VAR_9, VAR_1, 0x11, 0x7f, 0x00);
 for (VAR_11 = 0; VAR_11 < 25; VAR_11++)
  FUNC_2(VAR_9, VAR_1, VAR_11, VAR_10->crtc[VAR_11]);


 VAR_12 = FUNC_0(VAR_9, VAR_3);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11++) {
  VAR_12 = VAR_10->ar[VAR_11];
  FUNC_1(VAR_9, VAR_0, (u8)VAR_11);
  FUNC_1(VAR_9, VAR_0, VAR_12);
 }
 FUNC_1(VAR_9, VAR_0, 0x14);
 FUNC_1(VAR_9, VAR_0, 0x00);

 VAR_12 = FUNC_0(VAR_9, VAR_3);
 FUNC_1(VAR_9, VAR_0, 0x20);


 for (VAR_11 = 0; VAR_11 < 9; VAR_11++)
  FUNC_2(VAR_9, VAR_2, VAR_11, VAR_10->gr[VAR_11]);
}
