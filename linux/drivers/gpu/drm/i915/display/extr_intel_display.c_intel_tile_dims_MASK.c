
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int dev; TYPE_1__* format; } ;
struct TYPE_2__ {unsigned int* cpp; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct drm_framebuffer const*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct drm_framebuffer *VAR_0, int VAR_1,
       unsigned int *VAR_2,
       unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_0, VAR_1);
 unsigned int VAR_5 = VAR_0->format->cpp[VAR_1];

 *VAR_2 = VAR_4 / VAR_5;
 *VAR_3 = FUNC_0(FUNC_2(VAR_0->dev)) / VAR_4;
}
