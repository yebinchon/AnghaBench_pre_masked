
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ revoked_ksv_cnt; int mutex; scalar_t__* revoked_ksv_list; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* VAR_1 ;

bool FUNC_5(struct drm_device *VAR_2, u8 *VAR_3,
     u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 u8 *VAR_9;

 if (!VAR_1)
  return 0;

 FUNC_3(&VAR_1->mutex);
 FUNC_2(VAR_2);

 VAR_5 = VAR_1->revoked_ksv_cnt;
 VAR_9 = VAR_1->revoked_ksv_list;


 if (!VAR_5 || !VAR_9) {
  FUNC_4(&VAR_1->mutex);
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_9 = VAR_1->revoked_ksv_list;
  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
    if (VAR_3[VAR_8] != VAR_9[VAR_8]) {
     break;
    } else if (VAR_8 == (VAR_0 - 1)) {
     FUNC_0("Revoked KSV is ");
     FUNC_1(VAR_3);
     FUNC_4(&VAR_1->mutex);
     return 1;
    }

   VAR_9 += VAR_0;
  }


  VAR_3 += VAR_0;
 }
 FUNC_4(&VAR_1->mutex);
 return 0;
}
