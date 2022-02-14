
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct drm_dp_aux {int dummy; } ;
struct cec_msg {int len; int msg; } ;
struct cec_adapter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_dp_aux* FUNC_0 (struct cec_adapter*) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct drm_dp_aux*,int ,int) ;
 unsigned int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cec_adapter *VAR_3, u8 VAR_4,
        u32 VAR_5, struct cec_msg *VAR_6)
{
 struct drm_dp_aux *VAR_7 = FUNC_0(VAR_3);
 unsigned int VAR_8 = FUNC_3(5, VAR_4 - 1);
 ssize_t VAR_9;

 VAR_9 = FUNC_1(VAR_7, VAR_0,
    VAR_6->msg, VAR_6->len);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_1,
     (VAR_6->len - 1) | (VAR_8 << 4) |
     VAR_2);
 return VAR_9 < 0 ? VAR_9 : 0;
}
