
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_vou_hw {scalar_t__ otfppu; scalar_t__ osd; struct device* dev; } ;
struct zx_plane {int * bits; scalar_t__ rsz; scalar_t__ hbsc; scalar_t__ layer; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 struct zx_plane* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct drm_device*,struct zx_plane*,int ) ;
 int * VAR_3 ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_4, struct zx_vou_hw *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct zx_plane *VAR_7;
 int VAR_8;
 int VAR_9;





 for (VAR_8 = 1; VAR_8 < VAR_2; VAR_8++) {
  VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
  if (!VAR_7) {
   FUNC_0(VAR_6, "failed to allocate zplane %d\n", VAR_8);
   return;
  }

  VAR_7->layer = VAR_5->osd + FUNC_2(VAR_8);
  VAR_7->hbsc = VAR_5->osd + FUNC_1(VAR_8);
  VAR_7->rsz = VAR_5->otfppu + FUNC_3(VAR_8);
  VAR_7->bits = &VAR_3[VAR_8];

  VAR_9 = FUNC_5(VAR_4, VAR_7, VAR_0);
  if (VAR_9) {
   FUNC_0(VAR_6, "failed to init overlay %d\n", VAR_8);
   continue;
  }
 }
}
