
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_dp_aux {int dummy; } ;
struct cec_adapter {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_dp_aux* FUNC_0 (struct cec_adapter*) ;
 scalar_t__ FUNC_1 (struct drm_dp_aux*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cec_adapter *VAR_2, bool VAR_3)
{
 struct drm_dp_aux *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5 = VAR_3 ? VAR_1 : 0;
 ssize_t VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_4, VAR_0, VAR_5);
 return (VAR_3 && VAR_6 < 0) ? VAR_6 : 0;
}
