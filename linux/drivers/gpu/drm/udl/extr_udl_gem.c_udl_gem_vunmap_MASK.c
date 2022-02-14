
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* import_attach; } ;
struct udl_gem_object {int vmapping; TYPE_2__ base; } ;
struct TYPE_3__ {int dmabuf; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct udl_gem_object*) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct udl_gem_object *VAR_0)
{
 if (VAR_0->base.import_attach) {
  FUNC_0(VAR_0->base.import_attach->dmabuf, VAR_0->vmapping);
  return;
 }

 FUNC_2(VAR_0->vmapping);

 FUNC_1(VAR_0);
}
