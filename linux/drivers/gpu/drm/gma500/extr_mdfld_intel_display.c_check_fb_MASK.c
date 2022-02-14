
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {TYPE_1__* format; } ;
struct TYPE_2__ {int* cpp; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct drm_framebuffer *VAR_1)
{
 if (!VAR_1)
  return 0;

 switch (VAR_1->format->cpp[0] * 8) {
 case 8:
 case 16:
 case 24:
 case 32:
  return 0;
 default:
  FUNC_0("Unknown color depth\n");
  return -VAR_0;
 }
}
