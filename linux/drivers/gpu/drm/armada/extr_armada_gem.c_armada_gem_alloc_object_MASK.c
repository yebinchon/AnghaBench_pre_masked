
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* filp; } ;
struct armada_gem_object {TYPE_2__ obj; } ;
struct address_space {int dummy; } ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 int FUNC_0 (char*,struct armada_gem_object*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_device*,TYPE_2__*,size_t) ;
 int FUNC_2 (struct armada_gem_object*) ;
 struct armada_gem_object* FUNC_3 (int,int ) ;
 int FUNC_4 (struct address_space*,int) ;
 size_t FUNC_5 (size_t) ;

__attribute__((used)) static struct armada_gem_object *FUNC_6(struct drm_device *VAR_3,
 size_t VAR_4)
{
 struct armada_gem_object *VAR_5;
 struct address_space *VAR_6;

 VAR_4 = FUNC_5(VAR_4);

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 if (FUNC_1(VAR_3, &VAR_5->obj, VAR_4)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 VAR_6 = VAR_5->obj.filp->f_mapping;
 FUNC_4(VAR_6, VAR_0 | VAR_2);

 FUNC_0("alloc obj %p size %zu\n", VAR_5, VAR_4);

 return VAR_5;
}
