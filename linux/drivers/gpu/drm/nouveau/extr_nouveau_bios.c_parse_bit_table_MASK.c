
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvbios {struct drm_device* dev; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_table {int (* parse_fn ) (struct drm_device*,struct nvbios*,struct bit_entry*) ;int id; } ;
struct bit_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ,struct bit_entry*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct nvbios*,struct bit_entry*) ;

__attribute__((used)) static int
FUNC_4(struct nvbios *VAR_1, const uint16_t VAR_2,
  struct bit_table *VAR_3)
{
 struct drm_device *VAR_4 = VAR_1->dev;
 struct nouveau_drm *VAR_5 = FUNC_2(VAR_4);
 struct bit_entry VAR_6;

 if (FUNC_1(VAR_4, VAR_3->id, &VAR_6) == 0)
  return VAR_3->parse_fn(VAR_4, VAR_1, &VAR_6);

 FUNC_0(VAR_5, "BIT table '%c' not found\n", VAR_3->id);
 return -VAR_0;
}
