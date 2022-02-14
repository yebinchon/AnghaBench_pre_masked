
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_mclass {int oclass; int member_1; int member_0; } ;
struct nouveau_svm {int inst; int mutex; struct nouveau_drm* drm; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {int object; TYPE_1__ info; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; struct nouveau_svm* svm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nouveau_svm*,char*) ;

 struct nouveau_svm* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nouveau_svm*,int ,int ) ;
 int FUNC_5 (struct nouveau_drm*) ;
 int FUNC_6 (int *,struct nvif_mclass const*) ;

void
FUNC_7(struct nouveau_drm *VAR_2)
{
 static const struct nvif_mclass VAR_3[] = {
  { 128, 0 },
  { 129, 0 },
  {}
 };
 struct nouveau_svm *VAR_4;
 int VAR_5;





 if (VAR_2->client.device.info.family > VAR_1)
  return;

 if (!(VAR_2->svm = VAR_4 = FUNC_2(sizeof(*VAR_2->svm), VAR_0)))
  return;

 VAR_2->svm->drm = VAR_2;
 FUNC_3(&VAR_2->svm->mutex);
 FUNC_0(&VAR_2->svm->inst);

 VAR_5 = FUNC_6(&VAR_2->client.device.object, VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4, "No supported fault buffer class");
  FUNC_5(VAR_2);
  return;
 }

 VAR_5 = FUNC_4(VAR_4, VAR_3[VAR_5].oclass, 0);
 if (VAR_5) {
  FUNC_5(VAR_2);
  return;
 }

 FUNC_1(VAR_4, "Initialised");
}
