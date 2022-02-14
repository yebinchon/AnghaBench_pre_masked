
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union qxl_release_info {int id; } ;
struct qxl_release {int release_offset; struct qxl_bo* release_bo; } ;
struct qxl_device {int* current_release_bo_offset; int release_mutex; struct qxl_bo** current_release_bo; } ;
struct qxl_bo {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct qxl_bo* FUNC_3 (struct qxl_bo*) ;
 int FUNC_4 (struct qxl_bo**) ;
 int FUNC_5 (struct qxl_device*,int,struct qxl_release**) ;
 int FUNC_6 (struct qxl_device*,struct qxl_bo**) ;
 int FUNC_7 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_8 (struct qxl_release*,struct qxl_bo*) ;
 union qxl_release_info* FUNC_9 (struct qxl_device*,struct qxl_release*) ;
 int FUNC_10 (struct qxl_device*,struct qxl_release*,union qxl_release_info*) ;
 int* VAR_4 ;
 int* VAR_5 ;

int FUNC_11(struct qxl_device *VAR_6, unsigned long VAR_7,
           int VAR_8, struct qxl_release **VAR_9,
           struct qxl_bo **VAR_10)
{
 struct qxl_bo *VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 union qxl_release_info *VAR_14;
 int VAR_15;

 if (VAR_8 == VAR_2)
  VAR_15 = 0;
 else if (VAR_8 == VAR_3)
  VAR_15 = 1;
 else if (VAR_8 == VAR_1)
  VAR_15 = 2;
 else {
  FUNC_0("got illegal type: %d\n", VAR_8);
  return -VAR_0;
 }

 VAR_12 = FUNC_5(VAR_6, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  if (VAR_10)
   *VAR_10 = ((void*)0);
  return VAR_12;
 }

 FUNC_1(&VAR_6->release_mutex);
 if (VAR_6->current_release_bo_offset[VAR_15] + 1 >= VAR_5[VAR_15]) {
  FUNC_4(&VAR_6->current_release_bo[VAR_15]);
  VAR_6->current_release_bo_offset[VAR_15] = 0;
  VAR_6->current_release_bo[VAR_15] = ((void*)0);
 }
 if (!VAR_6->current_release_bo[VAR_15]) {
  VAR_13 = FUNC_6(VAR_6, &VAR_6->current_release_bo[VAR_15]);
  if (VAR_13) {
   FUNC_2(&VAR_6->release_mutex);
   FUNC_7(VAR_6, *VAR_9);
   return VAR_13;
  }
 }

 VAR_11 = FUNC_3(VAR_6->current_release_bo[VAR_15]);

 (*VAR_9)->release_bo = VAR_11;
 (*VAR_9)->release_offset = VAR_6->current_release_bo_offset[VAR_15] * VAR_4[VAR_15];
 VAR_6->current_release_bo_offset[VAR_15]++;

 if (VAR_10)
  *VAR_10 = VAR_11;

 FUNC_2(&VAR_6->release_mutex);

 VAR_13 = FUNC_8(*VAR_9, VAR_11);
 FUNC_4(&VAR_11);
 if (VAR_13) {
  FUNC_7(VAR_6, *VAR_9);
  return VAR_13;
 }

 VAR_14 = FUNC_9(VAR_6, *VAR_9);
 VAR_14->id = VAR_12;
 FUNC_10(VAR_6, *VAR_9, VAR_14);

 return VAR_13;
}
