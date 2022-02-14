
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vp_nvlist; } ;
typedef TYPE_1__ vdev_phys_t ;
struct TYPE_5__ {TYPE_1__ vl_vdev_phys; } ;
typedef TYPE_2__ vdev_label_t ;
typedef int nvlist_t ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,char**) ;
 scalar_t__ FUNC_3 (int ,int,int **,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,char*,size_t) ;

int
FUNC_6(FILE *VAR_0, char *VAR_1, size_t VAR_2)
{
 vdev_label_t *VAR_3 = ((void*)0);
 vdev_phys_t *VAR_4;
 char *VAR_5 = ((void*)0);
 nvlist_t *VAR_6 = ((void*)0);
 int VAR_7 = 0;







 VAR_3 = (vdev_label_t *)FUNC_4(VAR_0, 0, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  return (1);

 VAR_4 = &(VAR_3->vl_vdev_phys);

 if ((FUNC_3(VAR_4->vp_nvlist, sizeof(VAR_4->vp_nvlist),
     &VAR_6, 0)) == 0 &&
     (FUNC_2(VAR_6, "name", &VAR_5) == 0)) {
  FUNC_5(VAR_1, VAR_5, VAR_2);
 } else
  VAR_7 = 1;

 FUNC_1(VAR_6);
 FUNC_0(VAR_3);

 return (VAR_7);
}
