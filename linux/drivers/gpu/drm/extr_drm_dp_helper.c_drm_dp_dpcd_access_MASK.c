
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux_msg {unsigned int address; size_t size; unsigned int reply; void* buffer; int request; } ;
struct drm_dp_aux {int (* transfer ) (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;int hw_mutex; } ;
typedef int msg ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct drm_dp_aux_msg*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_dp_aux*,struct drm_dp_aux_msg*) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct drm_dp_aux *VAR_6, u8 VAR_7,
         unsigned int VAR_8, void *VAR_9, size_t VAR_10)
{
 struct drm_dp_aux_msg VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14 = 0, VAR_15 = 0;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.address = VAR_8;
 VAR_11.request = VAR_7;
 VAR_11.buffer = VAR_9;
 VAR_11.size = VAR_10;

 FUNC_2(&VAR_6->hw_mutex);







 for (VAR_12 = 0; VAR_12 < 32; VAR_12++) {
  if (VAR_15 != 0 && VAR_15 != -VAR_5) {
   FUNC_5(VAR_0,
         VAR_0 + 100);
  }

  VAR_15 = VAR_6->transfer(VAR_6, &VAR_11);

  if (VAR_15 >= 0) {
   VAR_13 = VAR_11.reply & VAR_2;
   if (VAR_13 == VAR_1) {
    if (VAR_15 == VAR_10)
     goto unlock;

    VAR_15 = -VAR_4;
   } else
    VAR_15 = -VAR_3;
  }






  if (!VAR_14)
   VAR_14 = VAR_15;
 }

 FUNC_0("Too many retries, giving up. First error: %d\n", VAR_14);
 VAR_15 = VAR_14;

unlock:
 FUNC_3(&VAR_6->hw_mutex);
 return VAR_15;
}
