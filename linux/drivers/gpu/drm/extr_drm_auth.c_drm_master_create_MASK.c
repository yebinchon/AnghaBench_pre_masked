
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_master {int lessee_idr; int leases; int lessee_list; int lessees; struct drm_device* dev; int magic_map; int refcount; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_master*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct drm_master* FUNC_4 (int,int ) ;

struct drm_master *FUNC_5(struct drm_device *VAR_1)
{
 struct drm_master *VAR_2;

 VAR_2 = FUNC_4(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_3(&VAR_2->refcount);
 FUNC_1(VAR_2);
 FUNC_2(&VAR_2->magic_map);
 VAR_2->dev = VAR_1;


 FUNC_0(&VAR_2->lessees);
 FUNC_0(&VAR_2->lessee_list);
 FUNC_2(&VAR_2->leases);
 FUNC_2(&VAR_2->lessee_idr);

 return VAR_2;
}
