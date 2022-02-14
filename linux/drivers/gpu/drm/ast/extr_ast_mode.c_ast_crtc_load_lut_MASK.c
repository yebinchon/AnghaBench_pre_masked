
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct drm_crtc {int gamma_size; int * gamma_store; int enabled; TYPE_1__* dev; } ;
struct ast_private {int dummy; } ;
struct TYPE_2__ {struct ast_private* dev_private; } ;


 int FUNC_0 (struct ast_private*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct drm_crtc *VAR_0)
{
 struct ast_private *VAR_1 = VAR_0->dev->dev_private;
 u16 *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 if (!VAR_0->enabled)
  return;

 VAR_2 = VAR_0->gamma_store;
 VAR_3 = VAR_2 + VAR_0->gamma_size;
 VAR_4 = VAR_3 + VAR_0->gamma_size;

 for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
  FUNC_0(VAR_1, VAR_5, *VAR_2++ >> 8, *VAR_3++ >> 8, *VAR_4++ >> 8);
}
