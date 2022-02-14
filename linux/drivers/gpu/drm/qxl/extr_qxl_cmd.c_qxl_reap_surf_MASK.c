
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int surf_evict_mutex; } ;
struct qxl_bo {int tbo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qxl_bo*,int) ;
 int FUNC_3 (struct qxl_bo*) ;
 int FUNC_4 (struct qxl_device*,struct qxl_bo*,int) ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int FUNC_6(struct qxl_device *VAR_0, struct qxl_bo *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0);
 if (VAR_3)
  return VAR_3;

 if (VAR_2)
  FUNC_1(&VAR_0->surf_evict_mutex);

 VAR_3 = FUNC_5(&VAR_1->tbo, 1, !VAR_2);

 if (VAR_2)
  FUNC_0(&VAR_0->surf_evict_mutex);
 if (VAR_3) {
  FUNC_3(VAR_1);
  return VAR_3;
 }

 FUNC_4(VAR_0, VAR_1, 1);
 FUNC_3(VAR_1);
 return 0;
}
