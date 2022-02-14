
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qxl_release_info {int id; } ;
struct qxl_surface_cmd {int dummy; } ;
struct qxl_release {scalar_t__ release_offset; struct qxl_bo* release_bo; } ;
struct qxl_device {int dummy; } ;
struct qxl_bo {int dummy; } ;
typedef enum qxl_surface_cmd_type { ____Placeholder_qxl_surface_cmd_type } qxl_surface_cmd_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qxl_device*,int,int ,struct qxl_release**,int *) ;
 int FUNC_1 (struct qxl_device*,int ,struct qxl_release**) ;
 int FUNC_2 (struct qxl_release*,struct qxl_bo*) ;
 union qxl_release_info* FUNC_3 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_4 (struct qxl_device*,struct qxl_release*,union qxl_release_info*) ;

int FUNC_5(struct qxl_device *VAR_2,
           enum qxl_surface_cmd_type VAR_3,
           struct qxl_release *VAR_4,
           struct qxl_release **VAR_5)
{
 if (VAR_3 == VAR_1 && VAR_4) {
  int VAR_6;
  struct qxl_bo *VAR_7;
  union qxl_release_info *VAR_8;


  VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_7 = VAR_4->release_bo;

  (*VAR_5)->release_bo = VAR_7;
  (*VAR_5)->release_offset = VAR_4->release_offset + 64;

  FUNC_2(*VAR_5, VAR_7);

  VAR_8 = FUNC_3(VAR_2, *VAR_5);
  VAR_8->id = VAR_6;
  FUNC_4(VAR_2, *VAR_5, VAR_8);
  return 0;
 }

 return FUNC_0(VAR_2, sizeof(struct qxl_surface_cmd),
      VAR_0, VAR_5, ((void*)0));
}
