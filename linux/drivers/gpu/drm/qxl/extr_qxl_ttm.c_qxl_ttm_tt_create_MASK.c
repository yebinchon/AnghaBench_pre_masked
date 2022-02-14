
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_buffer_object {int bdev; } ;
struct qxl_ttm_tt {struct ttm_tt ttm; struct qxl_device* qdev; } ;
struct qxl_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qxl_ttm_tt*) ;
 struct qxl_ttm_tt* FUNC_1 (int,int ) ;
 int VAR_1 ;
 struct qxl_device* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct ttm_tt*,struct ttm_buffer_object*,int ) ;

__attribute__((used)) static struct ttm_tt *FUNC_4(struct ttm_buffer_object *VAR_2,
     uint32_t VAR_3)
{
 struct qxl_device *VAR_4;
 struct qxl_ttm_tt *VAR_5;

 VAR_4 = FUNC_2(VAR_2->bdev);
 VAR_5 = FUNC_1(sizeof(struct qxl_ttm_tt), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_5->ttm.func = &VAR_1;
 VAR_5->qdev = VAR_4;
 if (FUNC_3(&VAR_5->ttm, VAR_2, VAR_3)) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }
 return &VAR_5->ttm;
}
