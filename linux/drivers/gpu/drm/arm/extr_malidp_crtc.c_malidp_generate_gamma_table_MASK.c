
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_property_blob {scalar_t__ data; } ;
struct drm_color_lut {int green; } ;
struct TYPE_2__ {int end; int start; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct drm_property_blob *VAR_2,
     u32 VAR_3[VAR_0])
{
 struct drm_color_lut *VAR_4 = (struct drm_color_lut *)VAR_2->data;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

  VAR_8 = VAR_1[VAR_5].end - VAR_1[VAR_5].start;

  VAR_9 = FUNC_1(VAR_4[VAR_1[VAR_5].start].green,
        12);
  VAR_10 = FUNC_1(VAR_4[VAR_1[VAR_5].end].green, 12);
  VAR_6 = (VAR_8 == 0) ? 0 : ((VAR_10 - VAR_9) * 256) / VAR_8;
  VAR_7 = VAR_9;
  VAR_3[VAR_5] = FUNC_0(VAR_6, VAR_7);
 }
}
