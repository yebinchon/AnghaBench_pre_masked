
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct cec_adapter* adap; } ;
struct drm_dp_aux {TYPE_1__ cec; } ;
struct cec_msg {int len; int msg; } ;
struct cec_adapter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cec_adapter*,struct cec_msg*) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct drm_dp_aux*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct drm_dp_aux *VAR_4)
{
 struct cec_adapter *VAR_5 = VAR_4->cec.adap;
 struct cec_msg VAR_6;
 u8 VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_2, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (!(VAR_7 & VAR_1))
  return 0;

 VAR_6.len = (VAR_7 & VAR_3) + 1;
 VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_6.msg, VAR_6.len);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0(VAR_5, &VAR_6);
 return 0;
}
