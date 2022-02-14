
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_dp_aux {int dummy; } ;
struct cec_adapter {int capabilities; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_dp_aux* FUNC_0 (struct cec_adapter*) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int *) ;
 scalar_t__ FUNC_2 (struct drm_dp_aux*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_3,
           bool VAR_4)
{
 struct drm_dp_aux *VAR_5 = FUNC_0(VAR_3);
 ssize_t VAR_6;
 u8 VAR_7;

 if (!(VAR_3->capabilities & VAR_0))
  return 0;

 VAR_6 = FUNC_1(VAR_5, VAR_2, &VAR_7);
 if (VAR_6 >= 0) {
  if (VAR_4)
   VAR_7 |= VAR_1;
  else
   VAR_7 &= ~VAR_1;
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_7);
 }
 return (VAR_4 && VAR_6 < 0) ? VAR_6 : 0;
}
