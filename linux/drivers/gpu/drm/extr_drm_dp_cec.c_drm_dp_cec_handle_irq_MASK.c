
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct cec_adapter* adap; } ;
struct drm_dp_aux {TYPE_1__ cec; } ;
struct cec_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cec_adapter*,int) ;
 int FUNC_1 (struct drm_dp_aux*) ;
 scalar_t__ FUNC_2 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_3 (struct drm_dp_aux*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct drm_dp_aux *VAR_10)
{
 struct cec_adapter *VAR_11 = VAR_10->cec.adap;
 u8 VAR_12;

 if (FUNC_2(VAR_10, VAR_5, &VAR_12) < 0)
  return;

 if (VAR_12 & VAR_4)
  FUNC_1(VAR_10);

 if (VAR_12 & VAR_9)
  FUNC_0(VAR_11, VAR_3);
 else if (VAR_12 & VAR_8)
  FUNC_0(VAR_11, VAR_0 |
      VAR_1);
 else if (VAR_12 &
   (VAR_6 | VAR_7))
  FUNC_0(VAR_11, VAR_2 |
      VAR_1);
 FUNC_3(VAR_10, VAR_5, VAR_12);
}
