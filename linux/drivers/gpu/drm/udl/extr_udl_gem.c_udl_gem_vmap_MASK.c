
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; TYPE_1__* import_attach; } ;
struct udl_gem_object {scalar_t__ vmapping; int pages; TYPE_2__ base; } ;
struct TYPE_3__ {int dmabuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct udl_gem_object*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ) ;

int FUNC_3(struct udl_gem_object *VAR_3)
{
 int VAR_4 = VAR_3->base.size / VAR_2;
 int VAR_5;

 if (VAR_3->base.import_attach) {
  VAR_3->vmapping = FUNC_0(VAR_3->base.import_attach->dmabuf);
  if (!VAR_3->vmapping)
   return -VAR_0;
  return 0;
 }

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_3->vmapping = FUNC_2(VAR_3->pages, VAR_4, 0, VAR_1);
 if (!VAR_3->vmapping)
  return -VAR_0;
 return 0;
}
